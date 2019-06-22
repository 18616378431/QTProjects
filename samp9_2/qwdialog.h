#ifndef QWDIALOG_H
#define QWDIALOG_H

#include <QDialog>
#include <QPen>

namespace Ui {
class QWDialog;
}

class QWDialog : public QDialog
{
    //QPen属性设置对话框
    Q_OBJECT
private:
    QPen m_pen;//成员变量
public:
    explicit QWDialog(QWidget *parent = 0);
    ~QWDialog();
    void setPen(QPen pen);//设置QPen,用于对话框的界面显示
    QPen getPen();//获取对话框设置的QPen属性
    static QPen getPen(QPen iniPen,bool &ok);//静态函数
private:
    Ui::QWDialog *ui;
};

#endif // QWDIALOG_H
