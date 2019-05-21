#-------------------------------------------------
#
# Project created by QtCreator 2019-05-21T10:06:26
#
#-------------------------------------------------

QT       += core gui
QT+=network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = udpreceiver
TEMPLATE = app


SOURCES += main.cpp\
        receiver.cpp

HEADERS  += receiver.h

FORMS    += receiver.ui
