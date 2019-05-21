#-------------------------------------------------
#
# Project created by QtCreator 2019-05-21T09:59:09
#
#-------------------------------------------------

QT       += core gui
QT  +=network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = udpsender
TEMPLATE = app


SOURCES += main.cpp\
        sender.cpp

HEADERS  += sender.h

FORMS    += sender.ui
