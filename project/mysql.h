#ifndef MYSQL_H
#define MYSQL_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QVector>
#include <QMap>
#include <QDateTime>


class MySqlDB : public QObject
{
    Q_OBJECT

public:
    explicit MySqlDB(const QString &host = "localhost",
                     int port = 3306,
                     const QString &dbName = "",
                     const QString &user = "root",
                     const QString &password = "",
                     QObject *parent = nullptr);

    bool open();
    void close();
    bool isOpen() const;

    QVector<QMap<QString, QVariant>> executeQuery(
        const QString &query,
        const QMap<QString, QVariant> &params = {}
        );

    QVariant executeInsert(
        const QString &query,
        const QMap<QString, QVariant> &params = {}
        );

    // 数据库操作接口
    bool insertSensorData(double temperature, double humidity, double voltage);
    QVector<QMap<QString, QVariant>> querySensorData();
    QMap<QString, QVariant> queryLatestSensorData();

signals:

    void error(const QString &message);


private:
    QSqlDatabase sql_db;      // sql object
    QString sql_host;         // server address
    int sql_port;
    QString sql_name;
    QString sql_user;
    QString sql_password;

};



#endif // MYSQL_H
