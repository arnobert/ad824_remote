/*
Yamaha AD824 8-Channel Mic Preamp Remote Control - Main Window

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

#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->g_ch_1, SIGNAL (valueChanged(int)), this, SLOT(g_han_1(int)));
    QObject::connect(ui->g_ch_2, SIGNAL (valueChanged(int)), this, SLOT(g_han_2(int)));
    QObject::connect(ui->g_ch_3, SIGNAL (valueChanged(int)), this, SLOT(g_han_3(int)));
    QObject::connect(ui->g_ch_4, SIGNAL (valueChanged(int)), this, SLOT(g_han_4(int)));
    QObject::connect(ui->g_ch_5, SIGNAL (valueChanged(int)), this, SLOT(g_han_5(int)));
    QObject::connect(ui->g_ch_6, SIGNAL (valueChanged(int)), this, SLOT(g_han_6(int)));
    QObject::connect(ui->g_ch_7, SIGNAL (valueChanged(int)), this, SLOT(g_han_7(int)));
    QObject::connect(ui->g_ch_8, SIGNAL (valueChanged(int)), this, SLOT(g_han_8(int)));
    QObject::connect(ui->g_ch_9, SIGNAL (valueChanged(int)), this, SLOT(g_han_9(int)));
    QObject::connect(ui->g_ch_10, SIGNAL (valueChanged(int)), this, SLOT(g_han_10(int)));
    QObject::connect(ui->g_ch_11, SIGNAL (valueChanged(int)), this, SLOT(g_han_11(int)));
    QObject::connect(ui->g_ch_12, SIGNAL (valueChanged(int)), this, SLOT(g_han_12(int)));
    QObject::connect(ui->g_ch_13, SIGNAL (valueChanged(int)), this, SLOT(g_han_13(int)));
    QObject::connect(ui->g_ch_14, SIGNAL (valueChanged(int)), this, SLOT(g_han_14(int)));
    QObject::connect(ui->g_ch_15, SIGNAL (valueChanged(int)), this, SLOT(g_han_15(int)));
    QObject::connect(ui->g_ch_16, SIGNAL (valueChanged(int)), this, SLOT(g_han_16(int)));



    QObject::connect(ui->p48_1, SIGNAL (stateChanged(int)), this, SLOT(p48_han_1(int)));
    QObject::connect(ui->p48_2, SIGNAL (stateChanged(int)), this, SLOT(p48_han_2(int)));
    QObject::connect(ui->p48_3, SIGNAL (stateChanged(int)), this, SLOT(p48_han_3(int)));
    QObject::connect(ui->p48_4, SIGNAL (stateChanged(int)), this, SLOT(p48_han_4(int)));
    QObject::connect(ui->p48_5, SIGNAL (stateChanged(int)), this, SLOT(p48_han_5(int)));
    QObject::connect(ui->p48_6, SIGNAL (stateChanged(int)), this, SLOT(p48_han_6(int)));
    QObject::connect(ui->p48_7, SIGNAL (stateChanged(int)), this, SLOT(p48_han_7(int)));
    QObject::connect(ui->p48_8, SIGNAL (stateChanged(int)), this, SLOT(p48_han_8(int)));
    QObject::connect(ui->p48_9, SIGNAL (stateChanged(int)), this, SLOT(p48_han_9(int)));
    QObject::connect(ui->p48_10, SIGNAL (stateChanged(int)), this, SLOT(p48_han_10(int)));
    QObject::connect(ui->p48_11, SIGNAL (stateChanged(int)), this, SLOT(p48_han_11(int)));
    QObject::connect(ui->p48_12, SIGNAL (stateChanged(int)), this, SLOT(p48_han_12(int)));
    QObject::connect(ui->p48_13, SIGNAL (stateChanged(int)), this, SLOT(p48_han_13(int)));
    QObject::connect(ui->p48_14, SIGNAL (stateChanged(int)), this, SLOT(p48_han_14(int)));
    QObject::connect(ui->p48_15, SIGNAL (stateChanged(int)), this, SLOT(p48_han_15(int)));
    QObject::connect(ui->p48_16, SIGNAL (stateChanged(int)), this, SLOT(p48_han_16(int)));

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::test2(int XX)
{
    bool mm;

    ui->d_ch_1->setText(QString::number((XX*6)-10));


}

/*
 * This function connects to the preamp(s)
 */

void MainWindow::connect_box(int cmode)
{
    // Determine whether local USB/RS232 or TCP shall be used.
}

/*
 *  P48 Handler
*/

void MainWindow::p48_han_1(int i)
{
    if(i)
        con.phantom_on(1);
    else
        con.phantom_off(1);

}

void MainWindow::p48_han_2(int i)
{
    if(i)
        con.phantom_on(2);
    else
        con.phantom_off(2);
}

void MainWindow::p48_han_3(int i)
{
    if(i)
        con.phantom_on(3);
    else
        con.phantom_off(3);
}

void MainWindow::p48_han_4(int i)
{
    if(i)
        con.phantom_on(4);
    else
        con.phantom_off(4);
}

void MainWindow::p48_han_5(int i)
{
    if(i)
        con.phantom_on(5);
    else
        con.phantom_off(5);
}

void MainWindow::p48_han_6(int i)
{
    if(i)
        con.phantom_on(6);
    else
        con.phantom_off(6);
}

void MainWindow::p48_han_7(int i)
{
    if(i)
        con.phantom_on(7);
    else
        con.phantom_off(7);
}

void MainWindow::p48_han_8(int i)
{
    if(i)
        con.phantom_on(8);
    else
        con.phantom_off(8);
}

void MainWindow::p48_han_9(int i)
{
    if(i)
        con.phantom_on(9);
    else
        con.phantom_off(9);

}

void MainWindow::p48_han_10(int i)
{
    if(i)
        con.phantom_on(10);
    else
        con.phantom_off(10);
}

void MainWindow::p48_han_11(int i)
{
    if(i)
        con.phantom_on(11);
    else
        con.phantom_off(11);
}

void MainWindow::p48_han_12(int i)
{
    if(i)
        con.phantom_on(12);
    else
        con.phantom_off(12);
}

void MainWindow::p48_han_13(int i)
{
    if(i)
        con.phantom_on(13);
    else
        con.phantom_off(13);
}

void MainWindow::p48_han_14(int i)
{
    if(i)
        con.phantom_on(14);
    else
        con.phantom_off(14);
}

void MainWindow::p48_han_15(int i)
{
    if(i)
        con.phantom_on(15);
    else
        con.phantom_off(15);
}

void MainWindow::p48_han_16(int i)
{
    if(i)
        con.phantom_on(16);
    else
        con.phantom_off(16);
}


/*
 * Gain Handler
*/

void MainWindow::g_han_1(int i)
{
    ui->d_ch_1->setText(QString::number((i*6)-10));
    con.gain(i,1);
}

void MainWindow::g_han_2(int i)
{
    ui->d_ch_2->setText(QString::number((i*6)-10));
    con.gain(i,2);
}

void MainWindow::g_han_3(int i)
{
    ui->d_ch_3->setText(QString::number((i*6)-10));
    con.gain(i,3);
}

void MainWindow::g_han_4(int i)
{
    ui->d_ch_4->setText(QString::number((i*6)-10));
    con.gain(i,4);
}

void MainWindow::g_han_5(int i)
{
    ui->d_ch_5->setText(QString::number((i*6)-10));
    con.gain(i,5);
}

void MainWindow::g_han_6(int i)
{
    ui->d_ch_6->setText(QString::number((i*6)-10));
    con.gain(i,6);
}

void MainWindow::g_han_7(int i)
{
    ui->d_ch_7->setText(QString::number((i*6)-10));
    con.gain(i,7);
}

void MainWindow::g_han_8(int i)
{
    ui->d_ch_8->setText(QString::number((i*6)-10));
    con.gain(i,8);
}

void MainWindow::g_han_9(int i)
{
    ui->d_ch_9->setText(QString::number((i*6)-10));
    con.gain(i,9);
}

void MainWindow::g_han_10(int i)
{
    ui->d_ch_10->setText(QString::number((i*6)-10));
    con.gain(i,10);
}

void MainWindow::g_han_11(int i)
{
    ui->d_ch_11->setText(QString::number((i*6)-10));
    con.gain(i,11);
}

void MainWindow::g_han_12(int i)
{
    ui->d_ch_12->setText(QString::number((i*6)-10));
    con.gain(i,12);
}

void MainWindow::g_han_13(int i)
{
    ui->d_ch_13->setText(QString::number((i*6)-10));
    con.gain(i,13);
}

void MainWindow::g_han_14(int i)
{
    ui->d_ch_14->setText(QString::number((i*6)-10));
    con.gain(i,14);
}

void MainWindow::g_han_15(int i)
{
    ui->d_ch_15->setText(QString::number((i*6)-10));
    con.gain(i,15);
}

void MainWindow::g_han_16(int i)
{
    ui->d_ch_16->setText(QString::number((i*6)-10));
    con.gain(i,16);
}
