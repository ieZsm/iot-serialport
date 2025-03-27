#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QString"
#include "rs485.h"
#include "mysql.h"
#include <QMessageBox>

QString rx_buffer;
QString error_buffer;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , rs485(new RS485(this))
{
    ui->setupUi(this);

    setCentralWidget(ui->mainWidget);

    connect(rs485, &RS485::dataReceived, this, &MainWindow::processDataReceived);
    connect(rs485, &RS485::errorOccurred, this, &MainWindow::errorHandled);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::errorHandled(const QString &error)
{
    error_buffer.append(QString("Error: %1").arg(error));
    ui->rxdata_window->appendPlainText(error_buffer);
    error_buffer.clear();
}

void MainWindow::processDataReceived(const QByteArray &data)
{
    rx_buffer.append(QString("Received: %1").arg(QString::fromUtf8(data)));
    ui->rxdata_window->appendPlainText(rx_buffer);
    rx_buffer.clear();
}


void MainWindow::on_find_serialport_clicked()
{
    ui->coms->clear();
    rs485->find_serialPort();
    ui->coms->addItems(rs485->serialNamePort);
}

void MainWindow::on_open_serialport_clicked()
{
    rs485->serialPort->setPortName(ui->coms->currentText());
    if (rs485->serialPort->open(QIODevice::ReadWrite))
    {
        /* set baudrate */
        rs485->serialPort->setBaudRate(ui->baudrate->currentText().toInt());

        /* set checkbits */
        switch (ui->checkbits->currentIndex())
        {
        case 0: rs485->serialPort->setParity(QSerialPort::NoParity);
            break;
        case 1: rs485->serialPort->setParity(QSerialPort::OddParity);
            break;
        case 2: rs485->serialPort->setParity(QSerialPort::EvenParity);
            break;
        default: rs485->serialPort->setParity(QSerialPort::NoParity);
            break;
        }

        /* set databits */
        switch (ui->databits->currentIndex())
        {
        case 5: rs485->serialPort->setDataBits(QSerialPort::Data5);
            break;
        case 6: rs485->serialPort->setDataBits(QSerialPort::Data6);
            break;
        case 7: rs485->serialPort->setDataBits(QSerialPort::Data7);
            break;
        case 8: rs485->serialPort->setDataBits(QSerialPort::Data8);
            break;
        default: rs485->serialPort->setDataBits(QSerialPort::Data8);
            break;
        }

        /* set stopbits */
        int stop_bit = ui->stopbits->currentIndex();
        if (stop_bit == 1)
        {
            rs485->serialPort->setStopBits(QSerialPort::OneStop);
        }
        else if (stop_bit == 1.5)
        {
            rs485->serialPort->setStopBits(QSerialPort::OneAndHalfStop);
        }
        else if (stop_bit == 2)
        {
            rs485->serialPort->setStopBits(QSerialPort::TwoStop);
        }
        else
        {
            rs485->serialPort->setStopBits(QSerialPort::OneStop);
        }

        /* set flowcontrol */
        rs485->serialPort->setFlowControl(QSerialPort::NoFlowControl);

        ui->open_serialport->setEnabled(false);
        ui->close_serialport->setEnabled(true);
    }
    else
    {
        QMessageBox::information(this, tr("Error"), tr("Open the failure."));
        on_find_serialport_clicked();
    }
}


void MainWindow::on_close_serialport_clicked()
{
    rs485->close_serialPort();
}


void MainWindow::on_clear_data_clicked()
{
    ui->rxdata_window->clear();
}


void MainWindow::on_send_data_clicked()
{
    if (rs485->serialPort->isOpen())
    {
        QString data = ui->txdata_window->toPlainText();
        data = data + '\r' + '\n';
        qint64 byte = rs485->serialPort->write(data.toUtf8());
        qDebug() << byte;
        if (byte > 0)
        {
            QString tx_data = ">> " + data;
            ui->rxdata_window->appendPlainText(tx_data);
        }
        else
        {
            QMessageBox::warning(this, "Error", "Send data error.");
        }
    }
    else
    {
        QMessageBox::warning(this, "Warning", "Serial port is not open.");
    }
}





