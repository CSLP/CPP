#-------------------------------------------------
#
# Project created by QtCreator 2019-05-21T10:35:22
#
#-------------------------------------------------

QT       += core gui
QT +=network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tcpserver
TEMPLATE = app


SOURCES += main.cpp\
        server.cpp

HEADERS  += server.h

FORMS    += server.ui
