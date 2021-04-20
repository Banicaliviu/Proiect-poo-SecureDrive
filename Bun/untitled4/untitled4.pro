QT       += core gui
QT       += sql
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TcpServer

CONFIG += c++11
CONFIG +=console
CONFIG -=app_bundle

TEMPLATE = app

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    app.cpp \
    client.cpp \
    login.cpp \
    main.cpp \
    mytcpserver.cpp \
    register.cpp \
    securedrive.cpp \
    server.cpp

HEADERS += \
    app.h \
    client.h \
    login.h \
    mytcpserver.h \
    register.h \
    securedrive.h \
    server.h

FORMS += \
    app.ui \
    login.ui \
    register.ui \
    securedrive.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc

DISTFILES +=
