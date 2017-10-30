#-------------------------------------------------
#
# Project created by QtCreator 2017-09-07T11:53:26
#
#-------------------------------------------------



TARGET = i686-w64-mingw32


QT       += core gui
QT += network

INCLUDEPATH += /usr/include/qjson/
INCLUDEPATH += /usr/include/bitcoin/
LIBS += -L/usr/local/lib -lqjson -ljsoncpp
LIBS += -lqrencode
#LIBS += -L/home/penny/cpp-ethereum/build/libwebthree -lwebthree

#LIBS += -lpthread
#INCLUDEPATH += /home/penny/cpp-ethereum/

#TARGET = exchange
TEMPLATE = app

LIBS += -L/home/penny/Downloads/bitcoin-api-cpp-master/build/src/bitcoinapi -lbitcoinapi

SOURCES += main.cpp\
        mainwindow.cpp \
    conn.cpp \
    bitcoin.cpp \
    litecoin.cpp \
    dogecoin.cpp \
    shapshift.cpp \
    sendbitcoin.cpp \
    sendlitecoin.cpp \
    senddogecoin.cpp \
    recievebitcoin.cpp \
    recivelitecoin.cpp \
    recievedogecoin.cpp \
    bitcoincash.cpp \
    sendbitcoincash.cpp \
    recievebitcoincash.cpp \
    ethereum.cpp

HEADERS  += mainwindow.h \
    conn.h \
    bitcoin.h \
    litecoin.h \
    dogecoin.h \
    shapshift.h \
    sendbitcoin.h \
    sendlitecoin.h \
    senddogecoin.h \
    recievebitcoin.h \
    recivelitecoin.h \
    recievedogecoin.h \
    bitcoincash.h \
    sendbitcoincash.h \
    recievebitcoincash.h \
    ethereum.h

FORMS    += mainwindow.ui \
    sendbitcoin.ui \
    sendlitecoin.ui \
    senddogecoin.ui \
    recievebitcoin.ui \
    recivelitecoin.ui \
    recievedogecoin.ui \
    sendbitcoincash.ui \
    recievebitcoincash.ui

RESOURCES += \
    images/gradient.qrc

OTHER_FILES += \
    images/gradient-wallpaper-1.jpg
