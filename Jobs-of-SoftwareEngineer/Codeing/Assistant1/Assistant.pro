#-------------------------------------------------
#
# Project created by QtCreator 2019-05-23T15:22:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Assistant
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    signup.cpp

HEADERS  += \
    login.h \
    signup.h \
    student1.h

FORMS    += mainwindow.ui \
    login.ui \
    signup.ui
