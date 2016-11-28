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
