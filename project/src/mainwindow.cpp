#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->g_ch_1, SIGNAL (valueChanged(int)), this, SLOT(test2(int)));
    QObject::connect(ui->p48_1, SIGNAL (stateChanged(int)), this, SLOT(p48_han_1(int)));
    QObject::connect(ui->p48_2, SIGNAL (stateChanged(int)), this, SLOT(p48_han_2(int)));
    QObject::connect(ui->p48_3, SIGNAL (stateChanged(int)), this, SLOT(p48_han_3(int)));
    QObject::connect(ui->p48_4, SIGNAL (stateChanged(int)), this, SLOT(p48_han_4(int)));
    QObject::connect(ui->p48_5, SIGNAL (stateChanged(int)), this, SLOT(p48_han_5(int)));
    QObject::connect(ui->p48_6, SIGNAL (stateChanged(int)), this, SLOT(p48_han_6(int)));
    QObject::connect(ui->p48_7, SIGNAL (stateChanged(int)), this, SLOT(p48_han_7(int)));
    QObject::connect(ui->p48_8, SIGNAL (stateChanged(int)), this, SLOT(p48_han_8(int)));

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


/*
 * Gain Handler
*/

void MainWindow::g_han_1(int i)
{
    con.gain(i,1);
}

void MainWindow::g_han_2(int i)
{
    con.gain(i,2);
}

void MainWindow::g_han_3(int i)
{
    con.gain(i,3);
}

void MainWindow::g_han_4(int i)
{
    con.gain(i,4);
}

void MainWindow::g_han_5(int i)
{
    con.gain(i,5);
}

void MainWindow::g_han_6(int i)
{
    con.gain(i,6);
}

void MainWindow::g_han_7(int i)
{
    con.gain(i,7);
}

void MainWindow::g_han_8(int i)
{
    con.gain(i,8);
}
