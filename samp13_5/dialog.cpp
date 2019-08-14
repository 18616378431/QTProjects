#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(&threadConsumer,SIGNAL(newValue(int*,int,int)),
            this,SLOT(onThreadB_newValue(int*,int,int)));

    connect(&threadProducer,SIGNAL(started()),this,SLOT(onthreadA_started()));
    connect(&threadProducer,SIGNAL(finished()),this,SLOT(onthreadA_finished()));
    connect(&threadConsumer,SIGNAL(started()),this,SLOT(onthreadB_started()));
    connect(&threadConsumer,SIGNAL(finished()),this,SLOT(onthreadB_finished()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onThreadB_newValue(int *data, int count, int bufNo)
{
    //读取threadConsumer传递的缓冲区的数据
    QString str = QString::asprintf("第 %d 个缓冲区:",bufNo);

    for(int i = 0;i < count;i++)
    {
        str = str + QString::asprintf("%d,",*data);
        data++;
    }

    str = str + "\n";
    ui->plainTextEdit->appendPlainText(str);
}

void Dialog::on_btnStart_clicked()
{
    //启动线程
    threadConsumer.start();
    threadProducer.start();
    ui->btnStart->setEnabled(false);
    ui->btnStop->setEnabled(true);
}

void Dialog::on_btnStop_clicked()
{
    //结束线程
    threadConsumer.terminate();
    threadConsumer.wait();
    threadProducer.terminate();
    threadProducer.wait();
    ui->btnStart->setEnabled(true);
    ui->btnStop->setEnabled(false);
}

void Dialog::onthreadA_started()
{
    //线程started信号的响应槽函数
    ui->LabTA->setText("ThreadA 状态:ThreadA started");
}

void Dialog::onthreadA_finished()
{
    //线程的finished信号槽函数
    ui->LabTA->setText("ThreadA 状态:ThreadA finished");
}

void Dialog::onthreadB_started()
{
    //线程started信号的响应槽函数
    ui->LabTB->setText("ThreadB 状态:ThreadB started");
}

void Dialog::onthreadB_finished()
{
    //线程的finished信号槽函数
    ui->LabTB->setText("ThreadB 状态:ThreadB finished");
}

void Dialog::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}
