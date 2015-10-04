TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    queue.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    queue.h

