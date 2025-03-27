#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rs485.h"
#include "mysql.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void errorHandled(const QString &error);
    void processDataReceived(const QByteArray &data);


private slots:

    void on_find_serialport_clicked();

    void on_open_serialport_clicked();

    void on_close_serialport_clicked();

    void on_clear_data_clicked();

    void on_send_data_clicked();

private:
    Ui::MainWindow *ui;
    RS485 *rs485;
};

#endif // MAINWINDOW_H



