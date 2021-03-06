#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QtWidgets/QWidget>
#include <QGLWidget>
#include <GL/gl.h>
#include <QPoint>
#include <QMouseEvent>
#include <QTimer>
#include <QGLWidget>
#include <QDebug>
#include <QEvent>

namespace Ui { class Widget; }


class Widget : public QGLWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    QPoint pressPosition;
    QPoint releasePosition;
    GLfloat xAxisRotation;
    GLfloat yAxisRotation;
    GLfloat currentWidth;
    GLfloat currentHeight;
private slots:
protected:

    void paintGL(); // функция прорисовки
    virtual void initializeGL();
    virtual void resizeGL(int nWidth,int nHeight);

    virtual void keyPressEvent(QKeyEvent* event);

     virtual void mousePressEvent(QMouseEvent* event);
    virtual  void mouseMoveEvent(QMouseEvent* event);


private:
    Ui::Widget *ui;



};
#endif // WIDGET_H
