#-------------------------------------------------
#
# Project created by QtCreator 2016-11-30T06:15:38
#
#-------------------------------------------------

QT       += core gui serialport concurrent

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Human_Gait_Analysis_System
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += /usr/include/lpsensor

LIBS += /usr/lib/libLpSensor.so

RESOURCES += \
    images/Resources.qrc

OTHER_FILES += \
    images/connect.png
