#-------------------------------------------------
#
# Project created by QtCreator 2013-10-29T11:19:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = stuEx
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        signin.cpp \
    searchoffer.cpp \
    postoffer.cpp

HEADERS  += mainwindow.h \
			signin.h \
    searchoffer.h \
    postoffer.h

FORMS    += mainwindow.ui \
			signin.ui \
    searchoffer.ui \
    postoffer.ui
