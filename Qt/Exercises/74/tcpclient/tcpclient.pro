#-------------------------------------------------
#
# Project created by QtCreator 2019-05-21T11:20:06
#
#-------------------------------------------------

QT       += core gui
QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tcpclient
TEMPLATE = app


SOURCES += main.cpp\
        client.cpp

HEADERS  += client.h

FORMS    += client.ui
