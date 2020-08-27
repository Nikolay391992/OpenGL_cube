#pragma comment (lib,"glaux.lib")
#pragma comment (lib,"glu32.lib")
#pragma comment (lib,"opengl32.lib")

LIBS += -lopengl32
LIBS+=-lglut32
LIBS+=-lopengl32
LIBS+=-lglu32
LIBS +=-IGLU
QT += core gui
QT += opengl
QT += widgets
QT += core gui opengl
QT += core gui widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
TARGET = cube

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    main.cpp \
    widget.cpp

HEADERS += \
    ../../../glaux/Glaux.h \
    ../../../glut-3.7.6-bin/glut.h \
    widget.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



win32: LIBS += -L$$PWD/../../../glut-3.7.6-bin/ -lglut32

INCLUDEPATH += $$PWD/../../../glut-3.7.6-bin
DEPENDPATH += $$PWD/../../../glut-3.7.6-bin

DISTFILES +=

win32: LIBS += -L$$PWD/../../../glaux/ -lGlaux

INCLUDEPATH += $$PWD/../../../glaux
DEPENDPATH += $$PWD/../../../glaux

INCLUDEPATH += $$PWD../../../glaux/Glaux.h
