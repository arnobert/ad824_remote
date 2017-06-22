#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "yam_code.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void test2(int XX);
    void connect_box(int cmode);

    void p48_han_1(int i);
    void p48_han_2(int i);
    void p48_han_3(int i);
    void p48_han_4(int i);
    void p48_han_5(int i);
    void p48_han_6(int i);
    void p48_han_7(int i);
    void p48_han_8(int i);
    void p48_han_9(int i);
    void p48_han_10(int i);
    void p48_han_11(int i);
    void p48_han_12(int i);
    void p48_han_13(int i);
    void p48_han_14(int i);
    void p48_han_15(int i);
    void p48_han_16(int i);

    void g_han_1(int i);
    void g_han_2(int i);
    void g_han_3(int i);
    void g_han_4(int i);
    void g_han_5(int i);
    void g_han_6(int i);
    void g_han_7(int i);
    void g_han_8(int i);
    void g_han_9(int i);
    void g_han_10(int i);
    void g_han_11(int i);
    void g_han_12(int i);
    void g_han_13(int i);
    void g_han_14(int i);
    void g_han_15(int i);
    void g_han_16(int i);

signals:

    void doit();

private:
    Ui::MainWindow *ui;
    YamCode con;

};

#endif // MAINWINDOW_H
