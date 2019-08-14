#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(&threadProducer,SIGNAL(started()),this,SLOT(onthreadA_started()));
    connect(&threadProducer,SIGNAL(finished()),this,SLOT(onthreadA_finished()));
    connect(&threadConsumer,SIGNAL(started()),this,SLOT(onthreadB_started()));
    connect(&threadConsumer,SIGNAL(finished()),this,SLOT(onthreadB_finished()));
    connect(&threadConsumer,SIGNAL(newValue(int,int)),this,SLOT(onthreadB_newValue(int,int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onthreadA_started()
{
    //线程started信号的响应槽函数
    ui->LabA->setText("ThreadA 状态:ThreadA started");
}

void Dialog::onthreadA_finished()
{
    //线程的finished信号槽函数
    ui->LabA->setText("ThreadA 状态:ThreadA finished");
}

void Dialog::onthreadB_started()
{
    //线程started信号的响应槽函数
    ui->LabB->setText("ThreadB 状态:ThreadB started");
}

void Dialog::onthreadB_finished()
{
    //线程的finished信号槽函数
    ui->LabB->setText("ThreadB 状态:ThreadB finished");
}

void Dialog::onthreadB_newValue(int seq, int diceValue)
{
    //线程newValue信号的槽函数,显示骰子点数和次数
    QString str = QString::asprintf("第 %d 次掷骰子,点数为:%d",seq,diceValue);
    ui->plainTextEdit->appendPlainText(str);
    QPixmap pic;//图片显示
    QString fileName = QString::asprintf(":/imgs/images/d%d.jpg",diceValue);
    pic.load(fileName);
    ui->LabPic->setPixmap(pic);
}

void Dialog::closeEvent(QCloseEvent *event)
{
    //窗口关闭事件,结束线程
    if(threadProducer.isRunning())
    {
        threadProducer.stopThread();
        threadProducer.wait();
        threadConsumer.terminate();//可能处于等待状态,强制终止
        threadConsumer.wait();
    }
    event->accept();
}


void Dialog::on_btnStartedThread_clicked()
{
    //启动线程
    threadConsumer.start();
    threadProducer.start();
    ui->btnStartedThread->setEnabled(false);
    ui->btnStopThread->setEnabled(true);
}

void Dialog::on_btnStopThread_clicked()
{
    //结束线程
    threadProducer.stopThread();
    threadProducer.wait();
    threadConsumer.terminate();//可能处于等待状态,强制终止
    threadConsumer.wait();

    ui->btnStartedThread->setEnabled(true);
    ui->btnStopThread->setEnabled(false);
}

void Dialog::on_btnClear_clicked()
{
    //清空文本
    ui->plainTextEdit->clear();
}
