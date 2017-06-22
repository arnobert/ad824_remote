#-------------------------------------------------
#
# Project created by QtCreator 2016-11-22T20:50:37
#
#-------------------------------------------------

QT       += core gui\
            serialport\
            network widgets\
            core
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Yamaha_Remote
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    yam_code.cpp

HEADERS  += mainwindow.h \
    yam_code.h

FORMS    += mainwindow.ui


