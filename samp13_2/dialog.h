#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include "qdicethread.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
private:
    int mSeq,mDiceValue;
    QDiceThread threadA;
    QTimer mTimer;//定时器
protected:
    void closeEvent(QCloseEvent *event);
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
private slots:
    void onthreadA_started();
    void onthreadA_finished();
//    void onthreadA_newValue(int seq,int diceValue);
    void onTimeOut();//定时器处理槽函数

    void on_btnStartedThread_clicked();

    void on_btnStopThread_clicked();

    void on_btnDiceBegin_clicked();

    void on_btnDiceEnd_clicked();

    void on_btnClear_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
