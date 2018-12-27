#-------------------------------------------------
#
# Project created by QtCreator 2018-11-28T21:35:41
#
#-------------------------------------------------

QT       += core gui
QT       += network
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
    Board.cpp \
    Comment.cpp \
    Forum.cpp \
    Post.cpp \
    User.cpp \
    PostWin.cpp \
    UserGeneral.cpp \
    UserModerator.cpp \
    UserAdministrator.cpp \
    ServerWin.cpp \
    server.cpp \
    tcpclientsocket.cpp \
    BoardWin1.cpp

HEADERS += \
    Board.h \
    Comment.h \
    Forum.h \
    Post.h \
    User.h \
    Globle.h \
    PostWin.h \
    UserGeneral.h \
    UserModerator.h \
    UserAdministrator.h \
    ServerWin.h \
    server.h \
    tcpclientsocket.h \
    BoardWin1.h

FORMS += \
    PostWin.ui \
    ServerWin.ui \
    BoardWin.ui

RESOURCES += \
    datafile.qrc

DISTFILES +=
