#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
//    this->setLayout(horizontalLayout);
    QObject::connect(ui->greenSlider,SIGNAL(valueChanged(int)),
                     this,SLOT(on_redSlider_valueChanged(int)));
    QObject::connect(ui->blueSlider,SIGNAL(valueChanged(int)),
                     this,SLOT(on_redSlider_valueChanged(int)));
    QObject::connect(ui->alphaSlider,SIGNAL(valueChanged(int)),
                     this,SLOT(on_redSlider_valueChanged(int)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_redSlider_valueChanged(int value)
{
    Q_UNUSED(value);
    QColor color;
    int R = ui->redSlider->value();
    int G = ui->greenSlider->value();
    int B = ui->blueSlider->value();
    int alpha = ui->alphaSlider->value();
    color.setRgb(R,G,B,alpha);
    QPalette pal = ui->editText->palette();
    pal.setColor(QPalette::Base,color);
    ui->editText->setPalette(pal);
}

void Widget::on_dial_valueChanged(int value)
{
    //设置LCD显示的值
    ui->lcdNumber->display(value);
}

void Widget::on_rBtnDec_clicked()
{
    //显示十进制
    ui->lcdNumber->setDigitCount(3);//设置位数
    ui->lcdNumber->setDecMode();
}

void Widget::on_rBtnBin_clicked()
{
    ui->lcdNumber->setDigitCount(8);
    ui->lcdNumber->setBinMode();
}

void Widget::on_rBtnOct_clicked()
{
    ui->lcdNumber->setDigitCount(4);
    ui->lcdNumber->setOctMode();
}

void Widget::on_rBtnHex_clicked()
{
    ui->lcdNumber->setDigitCount(3);
    ui->lcdNumber->setHexMode();
}

void Widget::on_hSlider_valueChanged(int value)
{
    ui->hProgressBar->setValue(value);
    ui->hScrollBar->setValue(value);
}


void Widget::on_hScrollBar_valueChanged(int value)
{
    ui->hProgressBar->setValue(value);
    ui->hSlider->setValue(value);
}
