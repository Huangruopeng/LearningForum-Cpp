#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T21:05:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LearningForum
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    Forum.cpp \
    User.cpp \
    Post.cpp \
    Comment.cpp \
    Board.cpp \
    Administrator.cpp \
    Generaluser.cpp \
    Moderatoruser.cpp

HEADERS += \
        mainwindow.h \
    Forum.h \
    User.h \
    Post.h \
    Moderatoruser.h \
    Generaluser.h \
    Comment.h \
    Administrator.h \
    Board.h \
    Globle.h

FORMS += \
        mainwindow.ui