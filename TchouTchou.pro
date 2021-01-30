QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Case.cpp \
    caserail.cpp \
    casevide.cpp \
    feu.cpp \
    grille.cpp \
    main.cpp \
    mainwindow.cpp \
    partie.cpp \
    point.cpp \
    repere.cpp \
    train.cpp

HEADERS += \
    Case.h \
    caserail.h \
    casevide.h \
    feu.h \
    grille.h \
    mainwindow.h \
    partie.h \
    point.h \
    repere.h \
    train.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    TchouTchou_fr_FR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
