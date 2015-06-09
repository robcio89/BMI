#-------------------------------------------------
#
# Project created by QtCreator 2015-06-08T15:26:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BMIcalculator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    person.cpp \
    logger.cpp

HEADERS  += mainwindow.h \
    person.h \
    Sex.h \
    logger.h

FORMS    += mainwindow.ui

CONFIG += c++11
