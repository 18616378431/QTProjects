#ifndef QWCHARTVIEW_H
#define QWCHARTVIEW_H

#include <QWidget>
#include <QMouseEvent>
#include <QtCharts>
#include <QChartView>

QT_CHARTS_USE_NAMESPACE

class QWChartView : public QChartView
{
    Q_OBJECT
private:
    //矩形框的起始和终点
    QPoint beginPoint;
    QPoint endPoint;
protected:
    void mousePressEvent(QMouseEvent *event);//鼠标左键按下
    void mouseMoveEvent(QMouseEvent *event);//鼠标移动
    void mouseReleaseEvent(QMouseEvent *event);//鼠标释放事件
    void keyPressEvent(QKeyEvent *event);
public:
    explicit QWChartView(QWidget *parent = 0);
    ~QWChartView();
signals:
    void mouseMovePoint(QPoint point);//鼠标移动信号
};

#endif // QWCHARTVIEW_H
