#include <QtSerialPort/QtSerialPort>
#include <QtNetwork>
#ifndef YAM_CODE_H
#define YAM_CODE_H


#define CMD_P48 "21"
#define CMD_GAIN "20"
#define CMD_WCLK "10"
#define CMD_ADDR "00"

//namespace Ui {
//class YamCode;
//}

class YamCode : public QObject
{
    Q_OBJECT

public:
    YamCode();
    ~YamCode();

    QByteArray prepare_string(QByteArray cmd, QByteArray ad, QByteArray dat);
    void send_over_network(QByteArray cmd, QByteArray ad, QByteArray dat, QChar IP);
    void transmit(QByteArray cmd, QByteArray ad, QByteArray dat);
    void test(void);

public slots:

    void s_test(int XA, int XB);

    void phantom_on(int chan);
    void phantom_off(int chan);

    void gain(int g, int chan);

signals:


private:

    QSerialPort *serial;
    QString serialPortName = "/dev/ttyUSB0";
    int serialPortBaudRate = QSerialPort::Baud38400;



    int n_bits;
    int command;
    int addr;
    int data;
    int checksum;
    bool phantom_register[8]={false};
    int gain_register[8];

    int cur_ad = 0x01;

    void decode(int code);

    void phantom(bool power, int chan);



};

#endif // YAM_CODE_H
