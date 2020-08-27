#include "widget.h"
#include "ui_widget.h"
#include <glut.h>
#include <QGLWidget>
#include<Glaux.h>
#include <QKeyEvent>

Widget::Widget(QWidget *parent)
    : QGLWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
     glEnable(GL_DEPTH_TEST);

     glBegin(GL_QUADS);

     glColor3d(1.0,0.0,0.0);

     glVertex3d(-0.5,-0.5,0.5);
     glVertex3d(0.5,-0.5,0.5);
     glVertex3d(0.5,0.5,0.5);
     glVertex3d(-0.5,0.5,0.5);

     glColor3d(0.0,1.0,0.0);

     glVertex3d(0.5,-0.5,-0.5);
     glVertex3d(0.5,0.5,-0.5);
     glVertex3d(0.5,0.5,0.5);
     glVertex3d(0.5,-0.5,0.5);

     glColor3d(0.0,0.0,1.0);

     glVertex3d(0.5,0.5,-0.5);
     glVertex3d(0.5,0.5,0.5);
     glVertex3d(-0.5,0.5,0.5);
     glVertex3d(-0.5,0.5,-0.5);

     glColor3d(1.0,1.0,0.0);

     glVertex3d(-0.5,-0.5,-0.5);
     glVertex3d(-0.5,0.5,-0.5);
     glVertex3d(-0.5,0.5,0.5);
     glVertex3d(-0.5,-0.5,0.5);

     glColor3d(0.0,1.0,1.0);

     glVertex3d(0.5,-0.5,-0.5);
     glVertex3d(0.5,-0.5,0.5);
     glVertex3d(-0.5,-0.5,0.5);
     glVertex3d(-0.5,-0.5,-0.5);

     glColor3d(1.0,0.0,1.0);

     glVertex3d(-0.5,-0.5,-0.5);
     glVertex3d(-0.5,0.5,-0.5);
     glVertex3d(0.5,0.5,-0.5);
     glVertex3d(0.5,-0.5,-0.5);

     glEnd();

     glDisable(GL_DEPTH_TEST);


}

void Widget::initializeGL()
{

      glClearColor(1.0,1.0,1.0,0.0);

}

void Widget::resizeGL(int nWidth,int nHeight)
{

    glViewport(0,0,(GLint)nWidth,(GLint)nHeight);
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     glOrtho(-1.0,1.0,-1.0,1.0,-10.0,10.0);
     glMatrixMode(GL_MODELVIEW);
     glLoadIdentity();
}
void Widget::keyPressEvent(QKeyEvent* event)
{
    switch(event->key())
      {
       case Qt::Key_Up:
        glRotated(5.0,1.0,0.0,0.0);
        break;

       case Qt::Key_Down:
        glRotated(-5.0,1.0,0.0,0.0);
        break;

       case Qt::Key_Left:
        glRotated(5.0,0.0,1.0,0.0);
        break;

       case Qt::Key_Right:
        glRotated(-5.0,0.0,1.0,0.0);
        break;

       case Qt::Key_Plus:
        glScaled(1.1,1.1,1.1);
        break;

       case Qt::Key_Minus:
        glScaled(0.9,0.9,0.9);
        break;

       case Qt::Key_W:
        glTranslated(0.0,0.1,0.0);
        break;

       case Qt::Key_Z:
        glTranslated(0.0,-0.1,0.0);
        break;

       case Qt::Key_A:
        glTranslated(-0.1,0.0,0.0);
        break;

       case Qt::Key_S:
        glTranslated(0.1,0.0,0.0);
        break;

       case Qt::Key_Space:
        glLoadIdentity();
      }
       //sdfdsfdfdfd
      updateGL();

}

