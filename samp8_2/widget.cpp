#include "widget.h"
#include "ui_widget.h"

#include <QPainter>
#include <cmath>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setPalette(QPalette(Qt::white));//设置窗口背景色
    setAutoFillBackground(true);
    resize(600,300);//固定初始化窗口大小
}

Widget::~Widget()
{
    delete ui;
}

//窗口绘图事件
void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    //生成五角星的五个顶点坐标,假设原点在五角星中心
    qreal R = 100;//半径
    const qreal Pi = 3.14159;
    qreal deg = Pi * 72 / 180;
    QPoint points[5] = {
        QPoint(R,0),
        QPoint(R * std::cos(deg),-R * std::sin(deg)),
        QPoint(R * std::cos(2 * deg),-R * std::sin(2 * deg)),
        QPoint(R * std::cos(3 * deg),-R * std::sin(3 * deg)),
        QPoint(R * std::cos(4 * deg),-R * std::sin(4 * deg)),
    };
    //设置字体
    QFont font;
    font.setPointSize(12);
    font.setBold(true);
    painter.setFont(font);
    //设置画笔
    QPen penLine;
    penLine.setWidth(2);//线宽
    penLine.setColor(Qt::blue);//划线颜色
    penLine.setStyle(Qt::SolidLine);//线类型
    penLine.setCapStyle(Qt::FlatCap);//线端点样式
    penLine.setJoinStyle(Qt::BevelJoin);//线的连接点样式
    painter.setPen(penLine);
    //设置画刷
    QBrush brush;
    brush.setColor(Qt::yellow);//画刷颜色
    brush.setStyle(Qt::SolidPattern);//画刷填充样式
    painter.setBrush(brush);
    //设计五角星的PainterPath,以便重复使用
    QPainterPath starPath;
    starPath.moveTo(points[0]);
    starPath.lineTo(points[2]);
    starPath.lineTo(points[4]);
    starPath.lineTo(points[1]);
    starPath.lineTo(points[3]);
    starPath.closeSubpath();//闭合路径,最后一个点与第一个点相连
    starPath.addText(points[0],font,"0");//显示端点编号
    starPath.addText(points[1],font,"1");
    starPath.addText(points[2],font,"2");
    starPath.addText(points[3],font,"3");
    starPath.addText(points[4],font,"4");
    //绘图,保存坐标状态,平移,绘图,恢复坐标状态
    painter.save();//保存坐标状态
    painter.translate(100,120);//平移
    painter.drawPath(starPath);//画星星
    painter.drawText(0,0,"S1");
    painter.restore();//恢复坐标状态

    //平移、缩放、旋转、绘图
    painter.translate(300,120);//平移
    painter.scale(0.8,0.8);//缩放
    painter.rotate(90);//顺时针旋转90度
    painter.drawPath(starPath);//画星星
    painter.drawText(0,0,"S2");

    //复位、平移、旋转、绘图
    painter.resetTransform();//复位坐标转换
    painter.translate(500,120);//平移
    painter.rotate(-145);//逆时针旋转145度
    painter.drawPath(starPath);//画星星
    painter.drawText(0,0,"S3");


}
