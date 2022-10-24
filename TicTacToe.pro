QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    computerAI.cpp \
    gameLogic.cpp \
    main.cpp \
    board.cpp \
    optionsdialogue.cpp \
    popup.cpp \
    teampick.cpp \
    utilityFunctions.cpp

HEADERS += \
    board.h \
    optionsdialogue.h \
    player.h \
    popup.h \
    teampick.h

FORMS += \
    board.ui \
    optionsdialogue.ui \
    popup.ui \
    teampick.ui

OTHER_FILES += \
    android-sources/AndroidManifest.xml
ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android-sources

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    android-sources/AndroidManifest.xml \
    logoTicTacToe.ico

RESOURCES += \
    Resources.qrc

RC_ICONS = logoTicTacToe.ico
