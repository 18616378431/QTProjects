#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMenu>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitter);
    setActionsForButton();
    createSelectionPopmenu();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actListIni_triggered()
{
    //初始化列表
    QListWidgetItem *aItem;//每行是一个QListWidgetItem
    QIcon aIcon;
    aIcon.addFile(":/imgs/AppIcon.icns");
    bool chk = ui->chkBoxListEditable->isChecked();//是否可编辑
    ui->listWidget->clear();
    for(int i = 0;i < 10;i++)
    {
        QString str = QString::asprintf("Item %d",i);
        aItem = new QListWidgetItem();
        aItem->setText(str);//设置文字标签
        aItem->setIcon(aIcon);//设置图标
        aItem->setCheckState(Qt::Checked);//设置为选中状态
        if(chk)//可编辑,设置flags
        {
            aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable |
                            Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
        }
        else//不可编辑,设置flags
        {
            aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable |
                            Qt::ItemIsEnabled);
        }
        ui->listWidget->addItem(aItem);//增加一个项
    }
}

void MainWindow::on_actListInsert_triggered()
{
    //插入一个项
    QIcon aIcon;
    aIcon.addFile(":/imgs/AppIcon.icns");
    bool chk = ui->chkBoxListEditable->isChecked();

    QListWidgetItem *aItem = new QListWidgetItem("New Inserted Item");
    aItem->setIcon(aIcon);
    aItem->setCheckState(Qt::Checked);
    if(chk)
    {
        aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable |
                        Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    }
    else
    {
        aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable |
                        Qt::ItemIsEnabled);
    }
    ui->listWidget->insertItem(ui->listWidget->currentRow(),aItem);
}



void MainWindow::on_actListDelete_triggered()
{
    //删除当前项
    int row = ui->listWidget->currentRow();
    QListWidgetItem *aItem = ui->listWidget->takeItem(row);
    delete aItem;
}

void MainWindow::on_actListClear_triggered()
{
    ui->listWidget->clear();
}

void MainWindow::on_btnSelAll_clicked()
{
    //全选
    int cnt = ui->listWidget->count();//个数
    for(int i = 0;i < cnt;i++)
    {
        QListWidgetItem *aItem = ui->listWidget->item(i);//获取一个项
        aItem->setCheckState(Qt::Checked);//设置为选中
    }
}

void MainWindow::on_btnSelNone_clicked()
{
    //全不选
    int cnt = ui->listWidget->count();//个数
    for(int i = 0;i < cnt;i++)
    {
        QListWidgetItem *aItem = ui->listWidget->item(i);//获取一个项
        aItem->setCheckState(Qt::Unchecked);//设置为不选中
    }
}

void MainWindow::on_btnSelInvs_clicked()
{
    //反选
    int cnt = ui->listWidget->count();//个数
    for(int i = 0;i < cnt;i++)
    {
        QListWidgetItem *aItem = ui->listWidget->item(i);//获取一个项

        if(aItem->checkState() == Qt::Checked)//已被选中
        {
            aItem->setCheckState(Qt::Unchecked);//设置为不选中
        }
        else//未选中
        {
            aItem->setCheckState(Qt::Checked);//设置为选中
        }

    }
}

void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    //QListWidget当前选中项发生变化
    QString str;
    if(current != NULL)
    {
        if(previous == NULL)
        {
            str = "当前项:" + current->text();
        }
        else
        {
            str = "前一项:" + previous->text() + ";当前项:" + current->text();
        }
        ui->lineEdit->setText(str);
    }
}

void MainWindow::setActionsForButton()
{
    //为QTtoolButton按钮设置关联Action
    ui->tBtnListIni->setDefaultAction(ui->actListIni);
    ui->tBtnListClear->setDefaultAction(ui->actListClear);
    ui->tBtnListInsert->setDefaultAction(ui->actListInsert);
    ui->tBtnListAppend->setDefaultAction(ui->actListAppend);
    ui->tBtnListDelete->setDefaultAction(ui->actListDelete);

    ui->btnSelAll->setDefaultAction(ui->actSelAll);
    ui->btnSelNone->setDefaultAction(ui->actSelNone);
    ui->btnSelInvs->setDefaultAction(ui->actSelInvs);

//    ui->tBtnSelALL->setDefaultAction(ui->actSelALL);
//    ui->tBtnSelNone->setDefaultAction(ui->actSelNone);
//    ui->tBtnSelInvs->setDefaultAction(ui->actSelInvs);
}

void MainWindow::createSelectionPopmenu()
{
//    //创建下拉菜单
    QMenu *menuSelection = new QMenu(this);//创建弹出式菜单
    menuSelection->addAction(ui->actSelAll);
    menuSelection->addAction(ui->actSelNone);
    menuSelection->addAction(ui->actSelInvs);
    //ListWidget上方的tBtnSelectItem按钮
    ui->tBtnSelectItem->setPopupMode(QToolButton::MenuButtonPopup);
    ui->tBtnSelectItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    ui->tBtnSelectItem->setDefaultAction(ui->actSelPopMenu);//关联action
    ui->tBtnSelectItem->setMenu(menuSelection);//设置下拉菜单
    //工具栏上的下拉按钮
    QToolButton *aBtn = new QToolButton(this);
    aBtn->setPopupMode(QToolButton::InstantPopup);
    aBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);//按钮样式
    aBtn->setDefaultAction(ui->actSelPopMenu);
    aBtn->setMenu(menuSelection);//设置下拉菜单
    ui->mainToolBar->addWidget(aBtn);//工具栏添加按钮
    //工具栏添加分割按钮和退出按钮
    ui->mainToolBar->addSeparator();
    ui->mainToolBar->addAction(ui->actQuit);


    //==========================
//    //创建下拉菜单
//        QMenu* menuSelection=new QMenu(this); //创建选择弹出式菜单
////        menuSelection->addAction(ui->actSelAll);
//        menuSelection->addAction(ui->actSelAll);

//        menuSelection->addAction(ui->actSelNone);
//        menuSelection->addAction(ui->actSelInvs);

//    //listWidget上方的tBtnSelectItem按钮
//        ui->tBtnSelectItem->setPopupMode(QToolButton::MenuButtonPopup);//菜单弹出模式，执行按钮的Action
//        ui->tBtnSelectItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //按钮样式
//        ui->tBtnSelectItem->setDefaultAction(ui->actSelPopMenu);//关联Action
//        ui->tBtnSelectItem->setMenu(menuSelection); //设置下拉菜单

//    //工具栏上的 下拉式菜单按钮
//        QToolButton  *aBtn=new QToolButton(this);
//        aBtn->setPopupMode(QToolButton::InstantPopup);//button's own action is not triggered.
//        aBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);//按钮样式
//        aBtn->setDefaultAction(ui->actSelPopMenu); //设置Action,获取图标、标题等设置
//        aBtn->setMenu(menuSelection);//设置下拉菜单
//        ui->mainToolBar->addWidget(aBtn); //工具栏添加按钮

//    //工具栏添加分隔条，和“退出”按钮
//        ui->mainToolBar->addSeparator();
//        ui->mainToolBar->addAction(ui->actQuit);


}

void MainWindow::on_actListAppend_triggered()
{
    //插入一个项
    QIcon aIcon;
    aIcon.addFile(":/imgs/AppIcon.icns");
    bool chk = ui->chkBoxListEditable->isChecked();

    QListWidgetItem *aItem = new QListWidgetItem("New Appended Item");
    aItem->setIcon(aIcon);
    aItem->setCheckState(Qt::Checked);
    if(chk)
    {
        aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable |
                        Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    }
    else
    {
        aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable |
                        Qt::ItemIsEnabled);
    }
    ui->listWidget->addItem(aItem);
}

void MainWindow::on_actSelAll_triggered()
{
    on_btnSelAll_clicked();
}

void MainWindow::on_actSelNone_triggered()
{
    on_btnSelNone_clicked();
}

void MainWindow::on_actSelInvs_triggered()
{
    on_btnSelInvs_clicked();
}

void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    QMenu *menuList = new QMenu(this);//创建菜单
    //添加Actions创建菜单项
    menuList->addAction(ui->actListIni);
    menuList->addAction(ui->actListClear);
    menuList->addAction(ui->actListInsert);
    menuList->addAction(ui->actListAppend);
    menuList->addAction(ui->actListDelete);
    menuList->addSeparator();
    menuList->addAction(ui->actSelAll);
//    menuList->addAction(ui->actSelALL);

    menuList->addAction(ui->actSelNone);
    menuList->addAction(ui->actSelInvs);
    menuList->exec(QCursor::pos());//在鼠标光标位置显示右键快捷菜单
    delete menuList;
}

//void MainWindow::on_listWidget_clicked(const QModelIndex &index)
//{
//    qDebug() << "a";
//}

//void MainWindow::on_tBtnSelALL_clicked()
//{
//     on_btnSelAll_clicked();
//}

void MainWindow::on_toolBox_currentChanged(int index)
{
    ui->tabWidget->setCurrentIndex(index);
}
