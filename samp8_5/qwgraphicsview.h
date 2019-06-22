#ifndef QWGRAPHICSVIEW_H
#define QWGRAPHICSVIEW_H

#include <QGraphicsView>
#include <QMouseEvent>

class QWGraphicsView : public QGraphicsView
{
    Q_OBJECT
protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
public:
    QWGraphicsView(QWidget *parent = 0);
signals:
    void mouseMovePoint(QPoint point);//鼠标移动
    void mouseClicked(QPoint point);//鼠标单击
    void mouseDoubleClick(QPoint point);//鼠标双击
    void keyPress(QKeyEvent *event);//按键事件
};

#endif // QWGRAPHICSVIEW_H
