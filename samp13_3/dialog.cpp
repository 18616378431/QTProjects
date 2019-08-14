#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(&threadA,SIGNAL(started()),this,SLOT(onthreadA_started()));
    connect(&threadA,SIGNAL(finished()),this,SLOT(onthreadA_finished()));
//    connect(&threadA,SIGNAL(newValue(int,int)),this,SLOT(onthreadA_newValue(int,int)));
    connect(&mTimer,SIGNAL(timeout()),this,SLOT(onTimeOut()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onthreadA_started()
{
    //线程started信号的响应槽函数
    ui->LabA->setText("Thread 状态:Thread started");
}

void Dialog::onthreadA_finished()
{
    //线程的finished信号槽函数
    ui->LabA->setText("Thread 状态:Thread finished");
}

//void Dialog::onthreadA_newValue(int seq, int diceValue)
//{
//    //线程newValue信号的槽函数,显示骰子点数和次数
//    QString str = QString::asprintf("第 %d 次掷骰子,点数为:%d",seq,diceValue);
//    ui->plainTextEdit->appendPlainText(str);
//    QPixmap pic;//图片显示
//    QString fileName = QString::asprintf(":/imgs/images/d%d.jpg",diceValue);
//    pic.load(fileName);
//    ui->LabPic->setPixmap(pic);
//}

void Dialog::closeEvent(QCloseEvent *event)
{
    //窗口关闭事件,结束线程
    if(threadA.isRunning())
    {
        threadA.stopThread();
        threadA.wait();
    }
    event->accept();
}


void Dialog::on_btnStartedThread_clicked()
{
    //启动线程
    mSeq = 0;
    threadA.start();
    ui->btnStartedThread->setEnabled(false);
    ui->btnStopThread->setEnabled(true);
    ui->btnDiceBegin->setEnabled(true);
    ui->btnDiceEnd->setEnabled(false);
}

void Dialog::on_btnStopThread_clicked()
{
    //结束线程
    threadA.stopThread();
    threadA.wait();
    ui->btnStartedThread->setEnabled(true);
    ui->btnStopThread->setEnabled(false);
    ui->btnDiceBegin->setEnabled(false);
    ui->btnDiceEnd->setEnabled(false);
}

void Dialog::on_btnDiceBegin_clicked()
{
    //开始掷骰子
    threadA.diceBegin();
    mTimer.start(100);//100ms
    ui->btnDiceBegin->setEnabled(false);
    ui->btnDiceEnd->setEnabled(true);
}

void Dialog::on_btnDiceEnd_clicked()
{
    //暂停掷骰子
    threadA.dicePause();
    mTimer.stop();
    ui->btnDiceBegin->setEnabled(true);
    ui->btnDiceEnd->setEnabled(false);
}

void Dialog::on_btnClear_clicked()
{
    //清空文本
    ui->plainTextEdit->clear();
}

void Dialog::onTimeOut()
{
    //定时器过期处理函数
    int tmpSeq = 0,tmpValue = 0;
    bool valid = threadA.readValue(&tmpSeq,&tmpValue);//读取数值

    if(valid && tmpSeq != mSeq)//新数据
    {
        mSeq = tmpSeq;
        mDiceValue = tmpValue;
        QString str = QString::asprintf("第 %d 次掷骰子,点数为:%d",mSeq,mDiceValue);
        ui->plainTextEdit->appendPlainText(str);
        QPixmap pic;
        QString fileName = QString::asprintf(":/imgs/images/d%d.jpg",mDiceValue);
        pic.load(fileName);
        ui->LabPic->setPixmap(pic);
    }
}
