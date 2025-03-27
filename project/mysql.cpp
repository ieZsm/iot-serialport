#include "mysql.h"
#include <QUuid>  // 用于生成唯一连接名称
#include <QSqlRecord>


MySqlDB::MySqlDB(const QString &host,
                 int port,
                 const QString &name,
                 const QString &user,
                 const QString &password,
                 QObject *parent)
    :sql_host(host)
    ,sql_port(port)
    ,sql_name(name)
    ,sql_user(user)
    ,sql_password(password)
    ,QObject(parent)
{
    // 创建唯一命名的数据库连接
    sql_db = QSqlDatabase::addDatabase("QMYSQL", QUuid::createUuid().toString());
}


bool MySqlDB::open()
{
    // 设置连接参数
    sql_db.setHostName(sql_host);
    sql_db.setPort(sql_port);
    sql_db.setDatabaseName(sql_name);
    sql_db.setUserName(sql_user);
    sql_db.setPassword(sql_password);

    if (!sql_db.open())
    {
        // 失败时清理连接并发送错误信号
        emit error(sql_db.lastError().text());
        QSqlDatabase::removeDatabase(sql_db.connectionName());
        return false;
    }
    return true;
}


void MySqlDB::close()
{
    if (sql_db.isOpen())
    {
        sql_db.close();
    }

    // 释放数据库连接（确保 QSqlDatabase 没有其他引用）
    QString connName = sql_db.connectionName();
    sql_db = QSqlDatabase();  // 先赋值默认数据库对象，防止 dangling reference
    QSqlDatabase::removeDatabase(connName);  // 移除数据库连接
}


bool MySqlDB::isOpen() const
{
    return sql_db.isOpen();
}

/*
 * @brief 执行插入操作
 * 1. 检查连接状态
 * 2. 准备插入语句并绑定参数
 * 3. 返回自动生成的 ID（如主键自增）
 */
QVariant MySqlDB::executeInsert(const QString &query, const QMap<QString, QVariant> &params)
{
    if (!sql_db.isOpen()) {
        emit error("Database not connected");
        return QVariant();
    }

    QSqlQuery q(sql_db);
    q.prepare(query);

    // 绑定参数
    for (auto it = params.constBegin(); it != params.constEnd(); ++it) {
        q.bindValue(":" + it.key(), it.value());
    }

    if (!q.exec()) {
        emit error(q.lastError().text());
        return QVariant();
    }

    // 返回插入行的自动生成 ID
    return q.lastInsertId();
}

/*
 * @brief 执行查询操作
 * 1. 检查连接状态
 * 2. 准备查询语句并绑定参数
 * 3. 执行查询并处理结果集
 */
QVector<QMap<QString, QVariant>> MySqlDB::executeQuery(const QString &query, const QMap<QString, QVariant> &params)
{
    QVector<QMap<QString, QVariant>> results;

    if (!sql_db.isOpen()) {
        emit error("Database not connected");
        return results;
    }

    QSqlQuery q(sql_db);
    q.prepare(query);  // 预处理语句（防止 SQL 注入）

    // 绑定命名参数（格式：:paramName）
    for (auto it = params.constBegin(); it != params.constEnd(); ++it) {
        q.bindValue(":" + it.key(), it.value());
    }

    if (!q.exec()) {
        emit error(q.lastError().text());
        return results;
    }

    // 遍历结果集并转换为 QMap 结构
    while (q.next()) {
        QMap<QString, QVariant> row;
        const QSqlRecord record = q.record();
        for (int i = 0; i < record.count(); ++i) {
            // 字段名作为键，值为 QVariant
            row.insert(record.fieldName(i), q.value(i));
        }
        results.append(row);
    }

    return results;
}

// 插入传感器数据
bool MySqlDB::insertSensorData(double temperature, double humidity, double voltage)
{
    if (!sql_db.isOpen()) {
        emit error("Database not connected");
        return false;
    }

    QSqlQuery query(sql_db);
    query.prepare("INSERT INTO sensor_log (temperature, humidity, aa_voltage) VALUES (:temperature, :humidity, :aa_voltage)");

    query.bindValue(":temperature", temperature);
    query.bindValue(":humidity", humidity);
    query.bindValue(":aa_voltage", voltage);

    if (!query.exec()) {
        emit error(query.lastError().text());
        return false;
    }

    qDebug() << "Insert successful, ID:" << query.lastInsertId().toInt();
    return true;
}

// 查询所有传感器数据
QVector<QMap<QString, QVariant>> MySqlDB::querySensorData()
{
    QString query = "SELECT * FROM sensor_log ORDER BY record_time DESC";
    return executeQuery(query);
}

// 查询最新的传感器数据
QMap<QString, QVariant> MySqlDB::queryLatestSensorData()
{
    QString query = "SELECT * FROM sensor_log ORDER BY record_time DESC LIMIT 1";
    QVector<QMap<QString, QVariant>> results = executeQuery(query);

    if (!results.isEmpty()) {
        return results.first();
    }

    return QMap<QString, QVariant>();
}


