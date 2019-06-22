#include <QMessageBox>
#include "qformtable.h"
#include "qwdialoglocate.h"
#include "ui_qwdialoglocate.h"

QWDialogLocate::QWDialogLocate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QWDialogLocate)
{
    ui->setupUi(this);
}

QWDialogLocate::~QWDialogLocate()
{
    QMessageBox::information(this,"提示","模态对话框删除");
    delete ui;
}

void QWDialogLocate::setSpinRange(int rowCount, int colCount)
{
    ui->rowSpinBox->setMaximum(rowCount);
    ui->colSpinBox->setMaximum(colCount);
}

void QWDialogLocate::setSpinValue(int rowNo, int colNo)
{
    //响应信号
    ui->rowSpinBox->setValue(rowNo);
    ui->colSpinBox->setValue(colNo);
}

void QWDialogLocate::closeEvent(QCloseEvent *event)
{
//    Q_UNUSED(event);
//    //窗口关闭event
//    MainWindow *parWind = (MainWindow *)parentWidget();//获取父窗口指针
//    parWind->setActLocateEnable(true);//使能actTab_Locate
//    parWind->setDlgLocateNull();//窗口指针设置为NULL

    Q_UNUSED(event);
    //窗口关闭,发射信号使能actTab_Locate
    emit changeActionEnable(true);
}

void QWDialogLocate::on_btnSetText_clicked()
{
    //定位到主窗口单元格并设置文字
    int row = ui->rowSpinBox->value();//行号
    int col = ui->colSpinBox->value();//列号
//    MainWindow *parWind = (MainWindow *)parentWidget();//获取父窗口
//    parWind->setACellText(row,col,ui->edtCaption->text());//调用主窗口函数
    QString text = ui->edtCaption->text();
    emit changeCellText(row,col,text);

    if(ui->rowCheckBox->isChecked())//行增
    {
        ui->rowSpinBox->setValue(1 + ui->rowSpinBox->value());
    }
    if(ui->colCheckBox->isChecked())//列增
    {
        ui->colSpinBox->setValue(1 + ui->colSpinBox->value());
    }
}

void QWDialogLocate::showEvent(QShowEvent *event)
{
    Q_UNUSED(event);
    //显示窗口事件,发射信号使actTab_Locate不能用
    emit changeActionEnable(false);
}
