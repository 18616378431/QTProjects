#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    iniList();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnListAppend_clicked()
{
    //添加一行
    theModel->insertRow(theModel->rowCount());//在尾部插入一空行
    QModelIndex index = theModel->index(theModel->rowCount() - 1,0);
    theModel->setData(index,"new item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);//设置当前选中的行

}

void Widget::on_btnListInsert_clicked()
{
    //插入项
    QModelIndex index = ui->listView->currentIndex();
    theModel->insertRow(index.row());
    theModel->setData(index,"inserted item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}

void Widget::on_btnListDelete_clicked()
{
    //删除当前行
    QModelIndex index = ui->listView->currentIndex();
    theModel->removeRow(index.row());
}


void Widget::on_btnListClear_clicked()
{
    //清除列表
    theModel->removeRows(0,theModel->rowCount());
}

void Widget::on_btnTextImport_clicked()
{
    //显示数据模型的StringList
    QStringList tmpList = theModel->stringList();
    ui->plainTextEdit->clear();
    for(int i = 0;i < tmpList.count();i++)
    {
        ui->plainTextEdit->appendPlainText(tmpList.at(i));
    }
}

void Widget::on_listView_clicked(const QModelIndex &index)
{
    //显示QModelIndex行列
    ui->LabInfo->setText(QString::asprintf("当前条目:row=%d,column=%d",index.row(),index.column()));
}

void Widget::iniList()
{
    QStringList theStrList;
    theStrList << "北京" << "上海" << "天津" << "河北" << "山东" << "四川" << "重庆";
    theModel = new QStringListModel(this);
    theModel->setStringList(theStrList);//导入theStrList内容
    ui->listView->setModel(theModel);//设置数据模型
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);
}

void Widget::on_btnResumeList_clicked()
{
    iniList();
}

void Widget::on_btnClearEdit_clicked()
{
    ui->plainTextEdit->clear();
}
