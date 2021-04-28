QT       += core gui sql
CONFIG   += console
QT       += core gui charts
QT       += core gui sql printsupport
QT       += multimedia
CONFIG   += resources_big
QT       += core gui multimedia multimediawidgets

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
    add_evenement.cpp \
    add_ticket.cpp \
    connexion.cpp \
    evenement.cpp \
    eventicket.cpp \
    gestion_eventicket.cpp \
    main.cpp \
    stats.cpp \
    ticket.cpp

HEADERS += \
    add_evenement.h \
    add_ticket.h \
    connexion.h \
    evenement.h \
    eventicket.h \
    gestion_eventicket.h \
    stats.h \
    ticket.h

FORMS += \
    add_evenement.ui \
    add_ticket.ui \
    eventicket.ui \
    gestion_eventicket.ui \
    stats.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
