#ifndef RS485_H
#define RS485_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QString>
#include <QTimer>

class RS485 : public QObject
{
    Q_OBJECT

public:
    RS485(QObject *parent = nullptr);
    ~RS485();

    QSerialPort *serialPort;
    QStringList serialNamePort;

    int ASCII2Hex(char ch);
    void sleep(unsigned int msec);
    bool isOpen()const;

    void find_serialPort();
    void open_serialPort(QString &portName,
                        qint32 baudRate,
                        QSerialPort::DataBits dataBits,
                        QSerialPort::Parity parity,
                        QSerialPort::StopBits stopBits);
    void close_serialPort();
    void receive_data();
    void transmit_data(const QByteArray &data);

signals:

    void dataReceived(const QByteArray &data);
    void errorOccurred(const QString &error);
    void statusMessage(const QString &message);

private:

    bool isTransmitFlag;
    bool isReceiveFlag;
    // QTimer *timerSerial;
    // QTimer *timerStamp;

    typedef struct{
        // uint8_t node_id;
        // float als;
        // float aht[2];
        // float imu[3];
        // int tvoc;
    }DataFrame;


};

#endif // RS485_H
