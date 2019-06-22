#include "qwgraphicsview.h"

#include <QPoint>
#include <QMouseEvent>

QWGraphicsView::QWGraphicsView(QWidget *parent):QGraphicsView(parent)
{

}

//鼠标移动事件
void QWGraphicsView::mouseMoveEvent(QMouseEvent *event)
{
    QPoint point = event->pos();//QWGraphicsView坐标
    emit mouseMovePoint(point);//发射信号
    QGraphicsView::mouseMoveEvent(event);
}
//鼠标按下事件
void QWGraphicsView::mousePressEvent(QMouseEvent *event)
{
    //鼠标左键按下
    if(event->button() == Qt::LeftButton)
    {
        QPoint point = event->pos();
        emit mouseClicked(point);
    }
    QGraphicsView::mousePressEvent(event);
}
