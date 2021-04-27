QT       += core gui sql printsupport network
QT       += multimedia
QT       += core gui charts
QT       +=serialport


CONFIG += console
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    achats.cpp \
    arduino_a.cpp \
    client.cpp \
    clients_achats.cpp \
    connexion.cpp \
    main.cpp \
    secdialog.cpp \
    stats.cpp \
    stmp.cpp

HEADERS += \
    achats.h \
    arduino_a.h \
    client.h \
    clients_achats.h \
    connexion.h \
    secdialog.h \
    stats.h \
    stmp.h

FORMS += \
    clients_achats.ui \
    secdialog.ui \
    stats.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target








