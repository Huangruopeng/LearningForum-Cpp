#-------------------------------------------------
#
# Project created by QtCreator 2018-11-28T21:35:41
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
        BoardWin.cpp \
    Board.cpp \
    Comment.cpp \
    Forum.cpp \
    Post.cpp \
    User.cpp \
    EnterWin.cpp \
    RegistAdminWin.cpp \
    RegistWin.cpp \
    PostWin.cpp \
    WritePostWin.cpp \
    DeletePostWin.cpp \
    AppointWin.cpp \
    UserInfoWin.cpp \
    UserGeneral.cpp \
    UserModerator.cpp \
    UserAdministrator.cpp \
    UserMyInfoWin.cpp \
    UserAnonymous.cpp \
    UserAnonymousWin.cpp

HEADERS += \
        BoardWin.h \
    Board.h \
    Comment.h \
    Forum.h \
    Post.h \
    User.h \
    EnterWin.h \
    RegistAdminWin.h \
    RegistWin.h \
    Globle.h \
    PostWin.h \
    WritePostWin.h \
    DeletePostWin.h \
    AppointWin.h \
    UserInfoWin.h \
    UserGeneral.h \
    UserModerator.h \
    UserAdministrator.h \
    UserMyInfoWin.h \
    UserAnonymous.h \
    UserAnonymousWin.h

FORMS += \
        BoardWin.ui \
    EnterWin.ui \
    RegistAdminWin.ui \
    RegistWin.ui \
    PostWin.ui \
    WritePostWin.ui \
    DeletePostWin.ui \
    AppointWin.ui \
    UserInfoWin.ui \
    UserMyInfoWin.ui \
    UserAnonymousWin.ui

RESOURCES += \
    picture.qrc \
    datafile.qrc

DISTFILES +=
