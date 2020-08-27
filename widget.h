#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QtWidgets/QWidget>
#include <QGLWidget>
#include <GL/gl.h>




namespace Ui { class Widget; }


class Widget : public QGLWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
    GLint iVertex[20][2];
protected:

    void paintGL(); // функция прорисовки
    virtual void initializeGL();
    virtual void resizeGL(int nWidth,int nHeight);

    virtual void keyPressEvent(QKeyEvent* event);

private:
    Ui::Widget *ui;



};
#endif // WIDGET_H
