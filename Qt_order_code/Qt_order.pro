#-------------------------------------------------
#
# Project created by QtCreator 2017-09-06T15:20:20
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt_order
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    customer.cpp \
    absuser1.cpp \
    registerwindow.cpp \
    loginwindow.cpp \
    waiter.cpp \
    manager.cpp \
    admin.cpp \
    cook.cpp \
    table.cpp \
    dish.cpp \
    dcomment.cpp \
    adminwindow.cpp \
    waiterwindow.cpp \
    cookwindow.cpp \
    editdish.cpp \
    adddish.cpp \
    editpassword1.cpp \
    addid.cpp \
    addtable.cpp \
    mydatabase.cpp \
    wcomment.cpp \
    datawindow.cpp

HEADERS  += mainwindow.h \
    absuser1.h \
    customer.h \
    admin.h \
    dish.h \
    table.h \
    enum.h \
    registerwindow.h \
    loginwindow.h \
    waiter.h \
    manager.h \
    cook.h \
    dcomment.h \
    adminwindow.h \
    waiterwindow.h \
    cookwindow.h \
    editdish.h \
    adddish.h \
    editpassword1.h \
    addid.h \
    addtable.h \
    mydatabase.h \
    wcomment.h \
    datawindow.h

FORMS    += mainwindow.ui \
    registerwindow.ui \
    loginwindow.ui \
    dcomment.ui \
    adminwindow.ui \
    waiterwindow.ui \
    cookwindow.ui \
    editdish.ui \
    adddish.ui \
    editpassword1.ui \
    addid.ui \
    addtable.ui \
    wcomment.ui \
    datawindow.ui

RESOURCES += \
    welcome.qrc
