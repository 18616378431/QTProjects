#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "qmythread.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

private:
    ThreadDAQ threadProducer;
    ThreadShow threadConsumer;
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
private slots:
    void onThreadB_newValue(int *data,int count,int bufNo);
    void on_btnStart_clicked();

    void on_btnStop_clicked();

    void onthreadA_started();
    void onthreadA_finished();
    void onthreadB_started();
    void onthreadB_finished();

    void on_btnClear_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
