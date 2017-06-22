/*
Yamaha AD824 8-Channel Mic Preamp Remote Control - Remote Control Library
Copyright (C) 2016, 2017 Arno Daeuper - arno.daeuper@mykolab.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see http://www.gnu.org/licenses/.

*/

#include "yam_code.h"

/*
 * Constructor
 */

YamCode::YamCode()
{
    serial = new QSerialPort(this);

    // TODO: Network connection

}

YamCode::~YamCode()
{

}

/*
 * Legacy testing funtion
 */

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

/*
 * Calculate the string to be sent
 */

QByteArray YamCode::prepare_string(QByteArray cmd, QByteArray ad, QByteArray dat)
{
    QByteArray c_string, length={};
    int chk_sum, chk_sum_dat, chk_sum_ad, c;

    //c_ad = QByteArray::fromHex(int(ad));

    c_string = cmd + ad + dat;

    int m_length;

    // Checksum::

    m_length = c_string.length() + 1;
    length.append(m_length);

    chk_sum_dat = 0;
    chk_sum_ad = 0;

    for(c=0;c<ad.length();c++)
        chk_sum_ad += ad[c];

    for(c=0;c<dat.length();c++)
        chk_sum_dat += dat[c];

    chk_sum = 0xFF - (cmd[0] + chk_sum_ad + chk_sum_dat);

    c_string.append(chk_sum);
    chk_sum = 0;

    c_string = length + c_string;
    return c_string;
}

/*
 * Send the data via network
 */

void YamCode::send_over_network(QByteArray cmd, QByteArray ad, QByteArray dat, QChar IP)
{
    QByteArray c_string;
    c_string = prepare_string(cmd, ad, dat);

    /*
     * TODO: Send via network
     */
}

/*
 * Send the data via serial port
 */

void YamCode::transmit(QByteArray cmd, QByteArray ad, QByteArray dat)
{

    QByteArray c_string;
    c_string = prepare_string(cmd, ad, dat);


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

/*
 * Set Gain. TODO: Pick the correct address.
 */

void YamCode::gain(int g, int chan)
{
    QByteArray abs_gain = {}, g_addr = {};
    abs_gain.append(g*6);
    g_addr = QByteArray::fromHex("01");
    g_addr.append(chan-1);

    this->transmit(QByteArray::fromHex(CMD_GAIN),g_addr,abs_gain);
}


/*
 * TODO:Function to decode any received data from the Preamp.
 */

void YamCode::decode(int code)
{

}

