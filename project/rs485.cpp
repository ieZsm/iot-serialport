#include "rs485.h"
#include <QString>
#include <QCoreApplication>
#include <QTimer>

RS485::RS485(QObject *parant)
    : QObject(parant),
    serialPort(new QSerialPort(this)),
    isTransmitFlag(false),
    isReceiveFlag(false)

{
    /* data rx mode by using timer */
    // timerSerial = new QTimer();
    // connect(serialPort, &QSerialPort::readyRead, this, &SerialPort::serial_timerstart);
    // connect(timerSerial, SIGNAL(timeout()), this, SLOT(receiveData()));

}

RS485::~RS485()
{
    close_serialPort();
}

int RS485::ASCII2Hex(char ch)
{
    int hex = 0;

    if ((ch >= '0') && (ch <= '9'))
    {
        hex = ch - '0';
    }
    else if ((ch >= 'A') && (ch <= 'F'))
    {
        hex = ch - 'A' + 10;
    }
    else if ((ch >= 'a') && (ch <= 'f'))
    {
        hex = ch - 'a' + 10;
    }
    else
    {
        hex = 0;
    }
    return hex;
}

// void RS485::sleep(unsigned int msec)
// {
//     QTime delayTime = QTime::currentTime().addMSecs(msec); // 计算出当前时间之后 msec 毫秒的目标时间
//     while (QTime::currentTime() < delayTime)              // 持续循环，直到当前时间超过目标时间
//         QCoreApplication::processEvents(QEventLoop::AllEvents, 100); // 在等待期间处理 Qt 的事件
// }

bool RS485::isOpen() const
{
    return serialPort->isOpen();
}

void RS485::close_serialPort()
{
    if(serialPort->isOpen())
    {
        serialPort->clear();
        serialPort->close();
    }
}

void RS485::find_serialPort()
{
    serialNamePort.clear();
    foreach(const QSerialPortInfo & info, QSerialPortInfo::availablePorts())
    {
        serialNamePort << info.portName();
    }
}

void RS485::open_serialPort(QString &portName,
                            qint32 baudRate,
                            QSerialPort::DataBits dataBits,
                            QSerialPort::Parity parity,
                            QSerialPort::StopBits stopBits)
{
    serialPort->setPortName(portName);
    serialPort->setBaudRate(baudRate);
    serialPort->setDataBits(dataBits);
    serialPort->setParity(parity);
    serialPort->setStopBits(stopBits);
    serialPort->setFlowControl(QSerialPort::NoFlowControl);

    if(!serialPort->open(QIODevice::ReadWrite))
    {
        emit errorOccurred(tr("无法打开端口 %1: %2")
                            .arg(portName, serialPort->errorString()));
    }

}

void RS485::receive_data()
{
    if (isTransmitFlag) return;

    QByteArray data = serialPort->readAll();
    if (!data.isEmpty())
    {
        emit dataReceived(data);
    }
}


void RS485::transmit_data(const QByteArray &data)
{
    if(!serialPort->isOpen())
    {
        emit errorOccurred(tr("端口未打开"));
        return;
    }

    qint64 bytes = serialPort->write(data);
    if (bytes == -1)
    {
        emit errorOccurred(tr("发送失败: %1").arg(serialPort->errorString()));
    }
    else if (bytes != data.size())
    {
        emit statusMessage(tr("部分数据发送成功，已发送 %1 字节").arg(bytes));
    }

}















