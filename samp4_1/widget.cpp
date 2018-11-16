#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnCal_clicked()
{
    QString str = ui->editNum->text();//数量
    int num = str.toInt();
    str = ui->editPrice->text();//单价
    float price = str.toFloat();
    float total = num * price;
    str = str.sprintf("%.2f",total);
    //convert
//    str = QString::number(total,'f',2);
//    str = QString::asprintf("%.2f",total);
//    str = str.setNum(total,'f',2);
    ui->editTotal->setText(str);
}

void Widget::on_btnDec_clicked()
{
    //读取十进制数转换为其他进制
    QString str = ui->editDec->text();
    int val = str.toInt();
//    str = QString::number(val,16);//转换为十六进制
    str = str.setNum(val,16);
    str = str.toUpper();
    ui->editHex->setText(str);

    //二进制
    str = str.setNum(val,2);
//    str = QString::number(val,2);
    ui->editBin->setText(str);
}

void Widget::on_btnBin_clicked()
{
    //读取二进制,转换为其他进制
    QString str = ui->editBin->text();
    bool ok;
    int val = str.toInt(&ok,2);//以二进制读入
    str = str.setNum(val,10);
    ui->editDec->setText(str);

    //转换为16进制
    str = str.setNum(val,16);
    str = str.toUpper();
    ui->editHex->setText(str);
}

void Widget::on_btnHex_clicked()
{
    QString str = ui->editHex->text();
    bool ok;
    int val = str.toInt(&ok,16);
    str = str.setNum(val,10);
    ui->editDec->setText(str);

    str = str.setNum(val,2);
    ui->editBin->setText(str);
}
