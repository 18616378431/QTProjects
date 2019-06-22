#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    fTimer = new QTimer(this);
    fTimer->stop();
    fTimer->setInterval(1000);//定时周期、单位毫秒
    QObject::connect(fTimer,SIGNAL(timeout()),this,SLOT(on_timer_timeout()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnReadDateTime_clicked()
{
    //获取当前日期时间,并转换为字符串
    QDateTime curDateTime = QDateTime::currentDateTime();

    ui->timeEdit->setTime(curDateTime.time());
    ui->timeLineEdit->setText(curDateTime.toString("hh:mm:ss"));

    ui->dateEdit->setDate(curDateTime.date());
    ui->dateLineEdit->setText(curDateTime.toString("yyyy-MM-dd"));

    ui->dateTimeEdit->setDateTime(curDateTime);
    ui->datetimeLineEdit->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));
}

void Widget::on_btnSetDateTime_clicked()
{
    QString str = ui->datetimeLineEdit->text();
    str = str.trimmed();

    if(!str.isEmpty())
    {
        QDateTime curDateTime = QDateTime::fromString(str,"yyyy-MM-dd hh:mm:ss");
        ui->dateTimeEdit->setDateTime(curDateTime);
    }
}

void Widget::on_btnSetDate_clicked()
{
    QString str = ui->dateLineEdit->text();
    str = str.trimmed();

    if(!str.isEmpty())
    {
        QDateTime datetime = QDateTime::fromString(str,"yyyy-MM-dd");
        ui->dateEdit->setDate(datetime.date());
    }
}

void Widget::on_btnSetTime_clicked()
{
    QString str = ui->timeLineEdit->text();
    str = str.trimmed();

    if(!str.isEmpty())
    {
        QDateTime datetime = QDateTime::fromString(str,"hh:mm:ss");
        ui->timeEdit->setTime(datetime.time());
    }
}

void Widget::on_calendarWidget_selectionChanged()
{
    //在日历上选择日期
    QDate dt = ui->calendarWidget->selectedDate();
    QString str = dt.toString("yyyy年M月d日");
    ui->calLineEdit->setText(str);
}

void Widget::on_timer_timeout()
{
    //定时器中断响应
    QTime curTime = QTime::currentTime();
    ui->lcdNumberHour->display(curTime.hour());
    ui->lcdNumberMinute->display(curTime.minute());
    ui->lcdNumberSecond->display(curTime.second());
    int va = ui->progressBar->value();
    va++;
    if(va > 100)
    {
        va = 0;
    }

    qDebug() << va;

    ui->progressBar->setValue(va);
}

void Widget::on_btnSetInterval_clicked()
{
    int msec = ui->timerInterval->value();
    fTimer->setInterval(msec);
}

void Widget::on_btnTimerBegin_clicked()
{
    fTimer->start();//定时器开始工作
    fTimeCounter.start();//计时器开始工作
    ui->btnTimerBegin->setEnabled(false);
    ui->btnTimerStop->setEnabled(true);
    ui->btnSetInterval->setEnabled(false);
}


void Widget::on_btnTimerStop_clicked()
{
    fTimer->stop();
    int tmMsec = fTimeCounter.elapsed();//毫秒数
    int ms = tmMsec % 1000;
    int sec = tmMsec / 1000;
    QString str = QString::asprintf("流逝时间:%d秒,%d毫秒",sec,ms);
    ui->LabElapsTime->setText(str);
    ui->btnTimerBegin->setEnabled(true);
    ui->btnTimerStop->setEnabled(false);
    ui->btnSetInterval->setEnabled(true);
}
