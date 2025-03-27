#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // 创建数据库连接对象
    MySqlDB db("127.0.0.1", 3306, "mydb1", "beike", "m15510003719");

    if (!db.open()) {
        qDebug() << "Failed to connect to database!";
        return -1;
    }

    qDebug() << "Database connected successfully.";

    // 插入数据
    db.insertSensorData(25.3, 60.1, 3.824);
    db.insertSensorData(22.1, 55.4, 3.656);

    // 查询所有数据
    QVector<QMap<QString, QVariant>> allData = db.querySensorData();
    for (const auto &row : allData)
    {
        qDebug() << "ID:" << row["id"].toInt()
                 << " Time:" << row["record_time"].toDateTime().toString("yyyy-MM-dd HH:mm:ss")
                 << " Temp:" << row["temperature"].toDouble()
                 << " Humidity:" << row["humidity"].toDouble()
                 << " Voltage:" << row["aa_voltage"].toDouble();
    }

    // 查询最近一条数据
    QMap<QString, QVariant> latestData = db.queryLatestSensorData();
    if (!latestData.isEmpty())
    {
        qDebug() << "Latest ID:" << latestData["id"].toInt()
                 << " Time:" << latestData["record_time"].toDateTime().toString("yyyy-MM-dd HH:mm:ss")
                 << " Temp:" << latestData["temperature"].toDouble()
                 << " Humidity:" << latestData["humidity"].toDouble()
                 << " Voltage:" << latestData["aa_voltage"].toDouble();
    }
    else
    {
        qDebug() << "No data found.";
    }

    db.close();

    return a.exec();
}
