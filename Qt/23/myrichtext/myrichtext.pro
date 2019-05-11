#-------------------------------------------------
#
# Project created by QtCreator 2019-05-11T11:21:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myrichtext
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mysyntaxhighlighter.cpp

HEADERS  += mainwindow.h \
    mysyntaxhighlighter.h

FORMS    += mainwindow.ui

RESOURCES += \
    image.qrc
