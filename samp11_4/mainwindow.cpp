#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tableView);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openTable()
{
    tabModel = new QSqlRelationalTableModel(this,DB);
    tabModel->setTable("studInfo");//设置数据表
    tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tabModel->setSort(0,Qt::AscendingOrder);

    tabModel->setHeaderData(0,Qt::Horizontal,"学号");
    tabModel->setHeaderData(1,Qt::Horizontal,"姓名");
    tabModel->setHeaderData(2,Qt::Horizontal,"性别");
    tabModel->setHeaderData(3,Qt::Horizontal,"学院");
    tabModel->setHeaderData(4,Qt::Horizontal,"专业");

    //设置代码字段的查询关系数据表
    tabModel->setRelation(3,QSqlRelation("departments","departID","department"));
    tabModel->setRelation(4,QSqlRelation("majors","majorID","major"));

    theSelection = new QItemSelectionModel(tabModel);
    connect(theSelection,SIGNAL(currentChanged(QModelIndex,QModelIndex)),
            this,SLOT(on_currentChanged(QModelIndex,QModelIndex)));

    ui->tableView->setModel(tabModel);
    ui->tableView->setSelectionModel(theSelection);
    //为关系型字段设置缺省代理组件
    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));
    tabModel->select();//打开数据表

    ui->actOpen->setEnabled(false);
    ui->actInsert->setEnabled(true);
    ui->actAdd->setEnabled(true);
    ui->actDelete->setEnabled(true);

}

void MainWindow::on_actFieldList_triggered()
{
    //字段列表
    QSqlRecord emptyRec = tabModel->record();//获取空记录,只有字段信息
    QString str;
    for(int i = 0;i < emptyRec.count();i++)
    {
        str = str + emptyRec.fieldName(i) + "\n";
    }

    QMessageBox::information(this,"所有字段名",str,QMessageBox::Ok,QMessageBox::NoButton);
}

void MainWindow::on_currentChanged(const QModelIndex &current,const QModelIndex &previous)
{
    Q_UNUSED(current);
    Q_UNUSED(previous);

    ui->actSave->setEnabled(tabModel->isDirty());
    ui->actCancel->setEnabled(tabModel->isDirty());
}

void MainWindow::on_actOpen_triggered()
{
    //打开数据表
    QString aFile = "/Users/wangjiankang/Documents/QTProjects/sqlite/demodb.db3";

    if(aFile.isEmpty())
    {
        QMessageBox::warning(this,"错误","打开数据库文件出错!",QMessageBox::Ok,QMessageBox::NoButton);
        return ;
    }

    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);

    if(!DB.open())
    {
        QMessageBox::information(this,"错误","打开数据库失败!",QMessageBox::Ok,QMessageBox::NoButton);
        return ;
    }

    openTable();
}

void MainWindow::on_actAdd_triggered()
{
    //添加记录
    tabModel->insertRow(tabModel->rowCount(),QModelIndex());
    QModelIndex curIndex = tabModel->index(tabModel->rowCount() - 1,1);
    theSelection->clearSelection();//清空选择
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    int currow = curIndex.row();//获得当前行号
    tabModel->setData(tabModel->index(currow,0),2000 + tabModel->rowCount());
    tabModel->setData(tabModel->index(currow,1),"新记录");
}

void MainWindow::on_actInsert_triggered()
{
    //插入记录
    QModelIndex curIndex = ui->tableView->currentIndex();
    tabModel->insertRow(curIndex.row(),QModelIndex());
    theSelection->clearSelection();
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}

void MainWindow::on_actDelete_triggered()
{
    //删除当前记录
    QModelIndex curIndex = theSelection->currentIndex();//获取当前模型索引
    tabModel->removeRow(curIndex.row());//删除一行
}

void MainWindow::on_actSave_triggered()
{
    //保存修改
    bool res = tabModel->submitAll();

    if(!res)
    {
        QMessageBox::information(this,"消息","数据保存错误,错误信息\n" +
                                 tabModel->lastError().text(),QMessageBox::Ok,QMessageBox::NoButton);
    }
    else
    {
        ui->actSave->setEnabled(false);
        ui->actCancel->setEnabled(false);
    }
}

void MainWindow::on_actCancel_triggered()
{
    //取消修改
    tabModel->revertAll();
    ui->actSave->setEnabled(false);
    ui->actCancel->setEnabled(false);
}
