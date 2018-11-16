#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

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

void Widget::on_btnAppend_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    ui->editResult->setText(str1);
}

void Widget::on_btnPrepend_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.prepend(str2);

    ui->editResult->setText(str1);
}

void Widget::on_btnToupper_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    str1 = str1.toUpper();

    ui->editResult->setText(str1);
}

void Widget::on_btnTolower_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    str1 = str1.toLower();

    ui->editResult->setText(str1);
}

void Widget::on_btnCount_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    //count(),size(),length()
    int num = str1.count();
//    int num = str1.size();
//    int num = str1.length();

    ui->editCount->setText(QString("%1").arg(num));
}

void Widget::on_btnSize_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    //count(),size(),length()
//    int num = str1.count();
    int num = str1.size();
//    int num = str1.length();

    ui->editCount->setText(QString("%1").arg(num));
}

void Widget::on_btnTrimmed_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    str1 = str1.trimmed();//double ends

    ui->editResult->setText(str1);
}

void Widget::on_btnSimplified_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    str1 = str1.simplified();//dobule ends and middle space

    ui->editResult->setText(str1);
}

void Widget::on_btnIndexof_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    int pos = str1.indexOf("5.9",0,Qt::CaseSensitive);

    ui->editResult->setText(QString("%1").arg(pos));
}

void Widget::on_btnLastindexOf_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    int pos = str1.lastIndexOf("\\");

    ui->editResult->setText(QString("%1").arg(pos));
}

void Widget::on_btnIsnull_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    bool isNull = str1.isNull();//仅未赋值的字符串才返回true,"\0" = false
    //只要赋值就在字符串末尾添加\0

    ui->editResult->setText(QString("%1").arg(isNull));
}

void Widget::on_btnIsempty_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    bool isEmpty = str1.isEmpty();//空字符串和未赋值的字符串都返回true

    ui->editResult->setText(QString("%1").arg(isEmpty));
}

void Widget::on_btnContains_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    bool isContains;

//    isContains = str1.contains(".cpp",Qt::CaseInsensitive);//不区分大小写
    isContains = str1.contains(".CPP",Qt::CaseSensitive);//区分大小写

    ui->chkContains->setChecked(isContains);
}

void Widget::on_btnEndswith_clicked()
{
    QString str1 = ui->editStr1->text();

    bool  isEndsWith = str1.endsWith(".cpp",Qt::CaseSensitive);
//    str1.endsWith(".CPP",Qt::CaseInsensitive);

    ui->editResult->setText(QString("%1").arg(isEndsWith));
}

void Widget::on_btnStartswith_clicked()
{
    QString str1 = ui->editStr1->text();

    bool  isStartsWith = str1.startsWith(".cpp",Qt::CaseSensitive);
//    str1.endsWith(".CPP",Qt::CaseInsensitive);//in 不区分

    ui->editResult->setText(QString("%1").arg(isStartsWith));
}

void Widget::on_btnLeft_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    int pos = str1.indexOf(",");

    str1 = str1.left(pos);

    ui->editResult->setText(str1);
}


void Widget::on_btnRight_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    int pos = str1.lastIndexOf(",");
    str1 = str1.right(str1.size() - pos - 1);

    ui->editResult->setText(str1);
}

void Widget::on_btnSection_clicked()
{
    QString str1 = ui->editStr1->text();
    QString str2 = ui->editStr2->text();

    str1.append(str2);

    str2 = str2.append(str1.section(",",0,0));
    str2.append("|");

    str2 = str2.append(str1.section(",",1,1));
    str2.append("|");

    str2 = str2.append(str1.section(",",0,1));
    str2.append("|");

    str2 = str2.append(str1.section(",",4,4));

    ui->editResult->setText(str2);
}
