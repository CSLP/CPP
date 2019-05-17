#-------------------------------------------------
#
# Project created by QtCreator 2019-05-09T14:10:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mydialog2
TEMPLATE = app


SOURCES += main.cpp\
        mywidget.cpp

HEADERS  += mywidget.h

FORMS    += mywidget.ui
QMAKE_LFLAGS+= -no-pie
