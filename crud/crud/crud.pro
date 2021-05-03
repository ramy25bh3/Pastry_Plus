QT       += core gui sql
QT       += core network
QT       += multimedia multimediawidgets charts
CONFIG += console
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11
CONFIG += resources_big


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
    comm_achats.cpp \
    connexion.cpp \
    exportexcelobject.cpp \
    fournisseur.cpp \
    main.cpp \
    mainwindow.cpp \
    stats.cpp

HEADERS += \
    comm_achats.h \
    connexion.h \
    exportexcelobject.h \
    fournisseur.h \
    mainwindow.h \
    stats.h

FORMS += \
    ../achats.ui \
    mainwindow.ui \
    stats.ui

QMAKE_CXXFLAGS += -std=gnu++14

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Ressources.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/build-SMTPEmail-Desktop_Qt_5_9_9_MinGW_32bit-Debug/release/ -lSMTPEmail
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/build-SMTPEmail-Desktop_Qt_5_9_9_MinGW_32bit-Debug/debug/ -lSMTPEmail
else:unix: LIBS += -L$$PWD/build-SMTPEmail-Desktop_Qt_5_9_9_MinGW_32bit-Debug/ -lSMTPEmail

INCLUDEPATH += $$PWD/build-SMTPEmail-Desktop_Qt_5_9_9_MinGW_32bit-Debug/debug
DEPENDPATH += $$PWD/build-SMTPEmail-Desktop_Qt_5_9_9_MinGW_32bit-Debug/debug
