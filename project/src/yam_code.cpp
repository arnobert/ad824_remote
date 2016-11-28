#include "yam_code.h"

YamCode::YamCode()
{
    //    n_bits = 0;
    //    command = 0;
    //    addr = 0;
    //    data = 0;
    //    checksum = 0;

    serial = new QSerialPort(this);

}

YamCode::~YamCode()
{

}


void YamCode::test(void)
{

    this->phantom(1,1);

    this->phantom(1,2);
    this->phantom(1,5);

    this->phantom(0,2);
    return;
}

void YamCode::s_test(int XA, int XB)
{

}


void YamCode::transmit(QByteArray cmd, QByteArray ad, QByteArray dat)
{
    bool ok;
    QByteArray c_string;
    int chk_sum, chk_sum_dat, c;

    //c_ad = QByteArray::fromHex(int(ad));

    c_string = cmd + ad + dat;

    int m_length;

    // Checksum::

    m_length = c_string.length();

    chk_sum_dat = 0;

    for(c=0;c<dat.length();c++)
        chk_sum_dat += dat[c];

    chk_sum = 0xFF - (cmd[0] + ad[0] + chk_sum_dat);

    c_string.append(chk_sum);

    c_string = QByteArray::fromHex("0C") + c_string;

    // Transmit
    //c_string = QByteArray::fromHex("0C2101000101000000000000DB");



    serial->setBaudRate(serialPortBaudRate);
    serial->setPortName(serialPortName);
    serial->open(QIODevice::ReadWrite);
    serial->write(c_string);
}
void YamCode::phantom_on(int chan)
{
    phantom(1,chan);
}

void YamCode::phantom_off(int chan)
{
    phantom(0,chan);
}

void YamCode::phantom(bool power, int chan)
{
    int i = 0;
    //QByteArray MMA = QByteArray::fromHex("FA");

    QByteArray p_sig = {};

    if(chan<9)
        phantom_register[chan-1] = power;

    for(i=0;i<8;i++)
    {
        //p_sig.append(int(0));
        if (phantom_register[i])
            p_sig.append(int(1));
        else
            p_sig.append(int(0));
    }

    this->transmit(QByteArray::fromHex(CMD_P48),QByteArray::fromHex("0100"),p_sig);
}

void YamCode::gain(int g, int chan)
{
//    gain_register[chan-1] = g;
}


void YamCode::decode(int code)
{

}

