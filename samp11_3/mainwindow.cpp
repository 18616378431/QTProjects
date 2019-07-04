#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actOpenDB_triggered()
{
    //打开数据库
//    QString aFile = QFileDialog::getOpenFileName(this,"打开数据库","","选择数据库(*.db3)");
    QString aFile = "/Users/wangjiankang/Documents/QTProjects/sqlite/demodb.db3";

    if(aFile.isEmpty())
    {
        QMessageBox::warning(this,"错误","打开文件出错",QMessageBox::Ok,QMessageBox::NoButton);
        return ;
    }

    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);

    if(!DB.open())
    {
        QMessageBox::information(this,"错误","数据库打开失败",QMessageBox::Ok,QMessageBox::NoButton);
        return ;
    }

    openTable();
}

void MainWindow::openTable()
{
    //打开数据表
    qryModel = new QSqlQueryModel(this);
    theSelection = new QItemSelectionModel(qryModel);
    qryModel->setQuery("select EmpNo,Name,Gender,Height,Birthday,Mobile,Province,City,Department,Education,Salary from employee order by EmpNo");

    if(qryModel->lastError().isValid())
    {
        QMessageBox::information(this,"错误","数据表查询错误,错误信息" + qryModel->lastError().text(),QMessageBox::Ok,QMessageBox::NoButton);
        return ;
    }

    qryModel->setHeaderData(0,Qt::Horizontal,"工号");
    qryModel->setHeaderData(1,Qt::Horizontal,"姓名");
    qryModel->setHeaderData(2,Qt::Horizontal,"性别");
    qryModel->setHeaderData(3,Qt::Horizontal,"身高");
    qryModel->setHeaderData(4,Qt::Horizontal,"出生日期");
    qryModel->setHeaderData(5,Qt::Horizontal,"手机");
    qryModel->setHeaderData(6,Qt::Horizontal,"省份");
    qryModel->setHeaderData(7,Qt::Horizontal,"城市");
    qryModel->setHeaderData(8,Qt::Horizontal,"部门");
    qryModel->setHeaderData(9,Qt::Horizontal,"学历");
    qryModel->setHeaderData(10,Qt::Horizontal,"工资");

    ui->tableView->setModel(qryModel);
    ui->tableView->setSelectionModel(theSelection);

    ui->actOpenDB->setEnabled(true);
    ui->actInsertRec->setEnabled(true);
    ui->actEditRec->setEnabled(true);
    ui->actDeleteRec->setEnabled(true);
    ui->actScan->setEnabled(true);
}
