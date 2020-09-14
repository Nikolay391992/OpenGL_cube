#include "widget.h"
#include <glut.h>
#include <QApplication>
#include<GL/gl.h>
#include<GL/glu.h>
#include<Glaux.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setFixedSize(600,600);
    w.show();

    return a.exec();




}
