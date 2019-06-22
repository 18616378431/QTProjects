#include "widget.h"
#include "ui_widget.h"

#include <QPainter>
#include <QLinearGradient>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(800,600);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    QPainter painter(this);
    int W = this->width();
    int H = this->height();
    int side = qMin(W,H);//取长和宽较小值
    QRect rect((W - side) / 2,(H -side) / 2,side,side);//viewport矩形区
    painter.drawRect(rect);//viewport的矩形区域
    painter.setViewport(rect);//设置viewport
    painter.setWindow(-100,-100,200,200);//设置窗口大小,逻辑坐标
    painter.setRenderHint(QPainter::Antialiasing);
    //设置画笔
    QPen pen;
    pen.setWidth(1);//线宽
    pen.setColor(Qt::red);//划线颜色
    pen.setStyle(Qt::SolidLine);//线的类型
    painter.setPen(pen);

    //添加线性渐变
    QLinearGradient linearGrad(0,0,100,0);//从左到右
    linearGrad.setColorAt(0,Qt::yellow);//起点颜色
    linearGrad.setColorAt(1,Qt::green);//终点颜色
    linearGrad.setSpread(QGradient::PadSpread);//展布模式
    painter.setBrush(linearGrad);

    //设置复合模式
//    painter.setCompositionMode(QPainter::RasterOp_NotSourceXorDestination);
//    painter.setCompositionMode(QPainter::CompositionMode_Difference);
    painter.setCompositionMode(QPainter::CompositionMode_Exclusion);

    for(int i = 0;i < 36;i++)
    {
        painter.drawEllipse(QPoint(50,0),50,50);
        painter.rotate(10);
    }
}
