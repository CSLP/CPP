QT += core
QT -= gui
QT+=xml

CONFIG += c++11

TARGET = myDOM1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

DISTFILES += \
    my.xml

RESOURCES += \
    resource.qrc
