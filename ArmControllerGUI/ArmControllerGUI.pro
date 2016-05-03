#-------------------------------------------------
#
# Project created by QtCreator 2016-03-27T15:16:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ArmControllerGUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

unix:!macx: LIBS += -L$$PWD/../../ArmControllerLibrary/dist/Debug/GNU-Linux/ -larmcontrollerlibrary

INCLUDEPATH += $$PWD/../../ArmControllerLibrary/dist/Debug/GNU-Linux
DEPENDPATH += $$PWD/../../ArmControllerLibrary/dist/Debug/GNU-Linux

unix:!macx: PRE_TARGETDEPS += $$PWD/../../ArmControllerLibrary/dist/Debug/GNU-Linux/libarmcontrollerlibrary.a


unix:!macx: LIBS += -L$$PWD/../../InitializerLibrary/dist/Debug/GNU-Linux/ -linitializerlibrary

INCLUDEPATH += $$PWD/../../InitializerLibrary/dist/Debug/GNU-Linux
DEPENDPATH += $$PWD/../../InitializerLibrary/dist/Debug/GNU-Linux

unix:!macx: PRE_TARGETDEPS += $$PWD/../../InitializerLibrary/dist/Debug/GNU-Linux/libinitializerlibrary.a


unix:!macx: LIBS += -L$$PWD/../../PartContainerLibrary/dist/Debug/GNU-Linux/ -lpartcontainerlibrary

INCLUDEPATH += $$PWD/../../PartContainerLibrary/dist/Debug/GNU-Linux
DEPENDPATH += $$PWD/../../PartContainerLibrary/dist/Debug/GNU-Linux

unix:!macx: PRE_TARGETDEPS += $$PWD/../../PartContainerLibrary/dist/Debug/GNU-Linux/libpartcontainerlibrary.a

unix:!macx: LIBS += -L$$PWD/../../SocketServer/dist/Debug/GNU-Linux/ -lsocketserver

INCLUDEPATH += $$PWD/../../SocketServer/dist/Debug/GNU-Linux
DEPENDPATH += $$PWD/../../SocketServer/dist/Debug/GNU-Linux

unix:!macx: PRE_TARGETDEPS += $$PWD/../../SocketServer/dist/Debug/GNU-Linux/libsocketserver.a

unix:!macx: LIBS += -L$$PWD/../../RoboticArmPartLibrary/dist/Debug/GNU-Linux/ -lroboticarmpartlibrary

INCLUDEPATH += $$PWD/../../RoboticArmPartLibrary/dist/Debug/GNU-Linux
DEPENDPATH += $$PWD/../../RoboticArmPartLibrary/dist/Debug/GNU-Linux

unix:!macx: PRE_TARGETDEPS += $$PWD/../../RoboticArmPartLibrary/dist/Debug/GNU-Linux/libroboticarmpartlibrary.a

unix:!macx: LIBS += -L$$PWD/../../CustomLibraries/ -ljson

INCLUDEPATH += $$PWD/../../CustomLibraries
DEPENDPATH += $$PWD/../../CustomLibraries

unix:!macx: PRE_TARGETDEPS += $$PWD/../../CustomLibraries/libjson.a

unix:!macx: LIBS += -lzmq

unix:!macx: LIBS += -L$$PWD/../../CalculatorLibrary/dist/Debug/GNU-Linux/ -lcalculatorlibrary

INCLUDEPATH += $$PWD/../../CalculatorLibrary/dist/Debug/GNU-Linux
DEPENDPATH += $$PWD/../../CalculatorLibrary/dist/Debug/GNU-Linux

unix:!macx: PRE_TARGETDEPS += $$PWD/../../CalculatorLibrary/dist/Debug/GNU-Linux/libcalculatorlibrary.a

unix:!macx: LIBS += -larmadillo

unix:!macx: LIBS += -lpthread
