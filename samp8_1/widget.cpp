#include "widget.h"
#include "ui_widget.h"

#include <QPainter>
#include <QRect>
#include <QPen>
#include <QRadialGradient>
#include <QLinearGradient>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setPalette(QPalette(Qt::white));//白色背景
    setAutoFillBackground(true);
}

Widget::~Widget()
{
    delete ui;
}

//继承自基类绘图事件
void Widget::paintEvent(QPaintEvent *event)
{
    //实体填充
//    QPainter painter(this);
//    painter.setRenderHint(QPainter::Antialiasing);
//    painter.setRenderHint(QPainter::TextAntialiasing);

//    int W = this->width();
//    int H = this->height();

//    QRect rect(W/4,H/4,W/2,H/2);

//    //设置画笔
//    QPen pen;
//    pen.setWidth(3);//线宽
//    pen.setColor(Qt::red);//划线颜色
//    pen.setStyle(Qt::SolidLine);//线的样式,实线、虚线等
//    pen.setCapStyle(Qt::FlatCap);//线端点样式
//    pen.setJoinStyle(Qt::BevelJoin);//线的连接点样式
//    painter.setPen(pen);

//    //设置画刷
//    QBrush brush;
//    brush.setColor(Qt::yellow);//画刷颜色
//    brush.setStyle(Qt::SolidPattern);//画刷填充样式
//    painter.setBrush(brush);

//    //绘图
//    painter.drawRect(rect);

    //====材质填充====
//    QPainter painter(this);

//    int W = this->width();
//    int H = this->height();

//    QRect rect(W/4,H/4,W/2,H/2);

//    //设置画笔
//    QPen pen;
//    pen.setWidth(3);
//    pen.setColor(Qt::red);
//    pen.setStyle(Qt::SolidLine);
//    painter.setPen(pen);

//    //设置画刷
//    QPixmap texturePixmap(":imgs/aaa.png");
//    QBrush brush;
//    brush.setStyle(Qt::TexturePattern);//画刷填充样式
//    brush.setTexture(texturePixmap);//设置材质图片
//    painter.setBrush(brush);

//    //绘图
//    painter.drawRect(rect);

    //渐变填充,辐射渐变,反射式重复渐变
//    QPainter painter(this);
//    int W = this->width();
//    int H = this->height();
//    //径向渐变
//    QRadialGradient radialGrad(W/2,H/2,qMax(W/8,H/8),W/2,H/2);
//    radialGrad.setColorAt(0,Qt::green);
//    radialGrad.setColorAt(1,Qt::blue);
//    radialGrad.setSpread(QGradient::ReflectSpread);
//    painter.setBrush(radialGrad);
//    //绘图
//    painter.drawRect(this->rect());

    //线性填充
//    QPainter painter(this);
//    QLinearGradient linearGrad(rect().left(),rect().top(),rect().right(),rect().bottom());//对角线
//    QLinearGradient linearGrad(rect().left(),rect().top(),rect().right(),rect().top());//从左到右

//    linearGrad.setColorAt(0,Qt::blue);//起点颜色
//    linearGrad.setColorAt(0.5,Qt::green);//中间点颜色
//    linearGrad.setColorAt(1,Qt::red);//终点颜色
//    linearGrad.setSpread(QGradient::ReflectSpread);//展布模式
//    painter.setBrush(linearGrad);

//    painter.drawRect(this->rect());

    //圆锥渐变
    QPainter painter(this);
    int W = this->width();
    int H = this->height();
    QConicalGradient coniGrad(W/2,H/2,45);
    coniGrad.setColorAt(0,Qt::yellow);
    coniGrad.setColorAt(0.5,Qt::blue);
    coniGrad.setColorAt(1,Qt::green);
    painter.setBrush(coniGrad);

    painter.drawRect(this->rect());
}
