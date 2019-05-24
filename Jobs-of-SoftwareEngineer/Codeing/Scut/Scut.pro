#-------------------------------------------------
#
# Project created by QtCreator 2019-05-23T20:05:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Scut
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    signup.cpp \
    student.cpp \
    teacher.cpp \
    interface.cpp \
    course.cpp \
    sendfile.cpp

HEADERS  += login.h \
    signup.h \
    student.h \
    teacher.h \
    interface.h \
    course.h \
    sendfile.h

FORMS    += login.ui \
    signup.ui \
    student.ui \
    teacher.ui \
    course.ui \
    sendfile.ui

RESOURCES += \
    resource.qrc
