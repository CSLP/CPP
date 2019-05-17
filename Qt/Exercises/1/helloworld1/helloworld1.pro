#-------------------------------------------------
#
# Project created by QtCreator 2019-05-08T22:22:14
#
#-------------------------------------------------

QT       += core gui
QMAKE_LFLAGS+=-no-pie

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = helloworld1
TEMPLATE = app


SOURCES += main.cpp\
        hellodialog.cpp

HEADERS  += hellodialog.h

FORMS    += hellodialog.ui
