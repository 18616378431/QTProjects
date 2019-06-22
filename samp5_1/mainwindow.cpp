#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QFileSystemModel(this);
    model->setRootPath(QDir::currentPath());//设置根目录
    ui->treeView->setModel(model);//设置数据模型
    ui->listView->setModel(model);
    ui->tableView->setModel(model);
    //信号与槽的关联,treeView单击时,其目录设置为listView和tableView的根节点
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),ui->listView,SLOT(setRootIndex(QModelIndex)));
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),ui->tableView,SLOT(setRootIndex(QModelIndex)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    ui->chkIsDir->setChecked(model->isDir(index));//是否是目录
    ui->LabPath->setText(model->filePath(index));
    ui->LabType->setText(model->type(index));
    ui->LabFileName->setText(model->fileName(index));
    int sz = model->size(index);
    if(sz < 1024)
    {
        ui->LabFileSize->setText(QString::asprintf("%d KB",sz));
    }
    else
    {
        ui->LabFileSize->setText(QString("%1 MB").arg(sz / 1024.0));
    }
}
