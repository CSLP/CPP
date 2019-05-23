#-------------------------------------------------
#
# Project created by QtCreator 2019-05-23T19:40:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    signup.cpp

HEADERS  += mainwindow.h \
    login.h \
    signup.h

FORMS    += mainwindow.ui \
    login.ui \
    signup.ui
