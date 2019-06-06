#-------------------------------------------------
#
# Project created by QtCreator 2019-05-23T20:05:52
#
#-------------------------------------------------

QT       += core gui
QMAKE_LFLAGS += -no-pie
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
    sendfile.cpp \
    updateinfo.cpp \
    topic.cpp \
    message.cpp \
    comment.cpp \
    myclock.cpp \
    courseinfo.cpp \
    studentinfo.cpp

HEADERS  += login.h \
    signup.h \
    student.h \
    teacher.h \
    interface.h \
    course.h \
    sendfile.h \
    updateinfo.h \
    topic.h \
    message.h \
    comment.h \
    myclock.h \
    courseinfo.h \
    studentinfo.h

FORMS    += login.ui \
    signup.ui \
    student.ui \
    teacher.ui \
    course.ui \
    sendfile.ui \
    updateinfo.ui \
    topic.ui \
    comment.ui \
    myclock.ui

RESOURCES += \
    resource.qrc
