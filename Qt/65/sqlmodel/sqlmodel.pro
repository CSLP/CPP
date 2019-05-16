#-------------------------------------------------
#
# Project created by QtCreator 2019-05-16T10:20:03
#
#-------------------------------------------------

QT       += core gui
QT  	+=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sqlmodel
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    connection.h

FORMS    += mainwindow.ui
