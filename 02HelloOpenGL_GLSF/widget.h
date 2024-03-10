#ifndef WIDGET_H
#define WIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLExtraFunctions>
#include <QOpenGLShaderProgram>
class Widget : public QOpenGLWidget,protected QOpenGLExtraFunctions
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
protected:
    virtual void initializeGL();
    virtual void paintGL();
    virtual void resizeGL(int w,int h);

private:
    QOpenGLShaderProgram shaderProgram;
};

#endif // WIDGET_H
