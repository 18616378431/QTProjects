#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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

void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    QMenu *menuList = new QMenu(this);//创建菜单
    QAction *actListIni = new QAction("ini");
    QAction *actSelAll = new QAction("all");

    //添加Actions创建菜单项
    menuList->addAction(actListIni);
    menuList->addSeparator();
    menuList->addAction(actSelAll);

    menuList->exec(QCursor::pos());//在鼠标光标位置显示右键快捷菜单
    delete menuList;
}

void MainWindow::on_listWidget_clicked(const QModelIndex &index)
{
    Q_UNUSED(index);
    qDebug() << "a";
}
