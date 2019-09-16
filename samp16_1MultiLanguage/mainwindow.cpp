#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

extern QTranslator *trans;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->tableView);
    theModel = new QStandardItemModel(5,FixedColumnCount,this);
    theSelection = new QItemSelectionModel(theModel);

    LabInfo = new QLabel(tr("当前单元格:1行,1列"));
    LabInfo->setMinimumWidth(150);
    ui->statusBar->addWidget(LabInfo);

    ui->tableView->setModel(theModel);
    ui->tableView->setSelectionModel(theSelection);
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);

    ui->retranslateUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actTab_SetSize_triggered()
{
    //模态对话框,动态创建,用后删除
    QWDialogSize *dlgTableSize = new QWDialogSize(this);
    Qt::WindowFlags flags = dlgTableSize->windowFlags();
    dlgTableSize->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint);
    dlgTableSize->setRowColumn(theModel->rowCount(),theModel->columnCount());
    int ret = dlgTableSize->exec();//以模态方式显示对话框
    if(ret == QDialog::Accepted)
    {
        //OK 获取对话框的行列,设置tableview行列数
        int cols = dlgTableSize->columnCount();
        theModel->setColumnCount(cols);
        int rows = dlgTableSize->rowCount();
        theModel->setRowCount(rows);
    }
}

void MainWindow::on_actTab_SetHeader_triggered()
{
    //设置表头标题,一次创建多次调用,对话框关闭时只是隐藏
    if(dlgSetHeaders == NULL)
    {
        dlgSetHeaders = new QWDialogHeaders(this);
    }
    if(dlgSetHeaders->headerList().count() != theModel->columnCount())
    {
        //如果表头列数变化,重新初始化
        QStringList strList;
        for(int i = 0;i < theModel->columnCount();i++)//获取现有表头标题
        {
            strList.append(theModel->headerData(i,Qt::Horizontal,Qt::DisplayRole).toString());
            dlgSetHeaders->setHeaderList(strList);//对话框初始化显示
        }
    }

    int ret = dlgSetHeaders->exec();//以模态方式显示对话框
    if(ret == QDialog::Accepted)//OK
    {
        QStringList strList = dlgSetHeaders->headerList();
        theModel->setHorizontalHeaderLabels(strList);//设置模型的表头标题
    }

}

void MainWindow::on_actTab_Locate_triggered()
{
    //创建StayOnTop对话框,对话框关闭时自动删除
//    ui->actTab_Locate->setEnabled(false);
//    dlgLocate = new QWDialogLocate(this);
//    dlgLocate->setAttribute(Qt::WA_DeleteOnClose);//对话框关闭时自动删除
//    Qt::WindowFlags flags = dlgLocate->windowFlags();//获取已有flags
//    dlgLocate->setWindowFlags(flags | Qt::WindowStaysOnTopHint);//stayontop

//    dlgLocate->setSpinRange(theModel->rowCount(),theModel->columnCount());
//    QModelIndex curIndex = theSelection->currentIndex();
//    if(curIndex.isValid())
//    {
//        dlgLocate->setSpinValue(curIndex.row(),curIndex.column());
//    }
//    dlgLocate->show();//显示非模态对话框

    //创建SatyOnTop对话框,对话框关闭时自动删除
    QWDialogLocate *dlgLocate = new QWDialogLocate(this);
    dlgLocate->setAttribute(Qt::WA_DeleteOnClose);
    Qt::WindowFlags flags = dlgLocate->windowFlags();
    dlgLocate->setWindowFlags(flags | Qt::WindowStaysOnTopHint);
    dlgLocate->setSpinRange(theModel->rowCount(),theModel->columnCount());
    QModelIndex curIndex = theSelection->currentIndex();
    if(curIndex.isValid())
    {
        dlgLocate->setSpinValue(curIndex.row(),curIndex.column());
    }
    //对话框发射信号,单元格文字
    connect(dlgLocate,SIGNAL(changeCellText(int,int,QString&)),
            this,SLOT(setACellText(int,int,QString &)));
    //对话框发射信号,设置actTab_locate属性
    connect(dlgLocate,SIGNAL(changeActionEnable(bool)),
            this,SLOT(setActLocateEnable(bool)));
    //主窗口发射信号,修改对话框上的spinBox值
    connect(this,SIGNAL(cellIndexChanged(int,int)),
            dlgLocate,SLOT(setSpinValue(int,int)));
    dlgLocate->show();
}

void MainWindow::setACellText(int row, int col, QString &text)
{
    //定位到单元格并设置字符串
    QModelIndex index = theModel->index(row,col);//获取模型索引
    theSelection->clearSelection();
    theSelection->setCurrentIndex(index,QItemSelectionModel::Select);
    theModel->setData(index,text,Qt::DisplayRole);//设置单元格字符串
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    //单击单元格时,将单元格的行号、列号更新到对话框上
//    if(dlgLocate != NULL)
//    {
//        dlgLocate->setSpinValue(index.row(),index.column());
//    }

    //单击单元格时发射信号,传递单元格行号和列号
    emit cellIndexChanged(index.row(),index.column());
}

void MainWindow::setActLocateEnable(bool enabled)
{
    ui->actTab_Locate->setEnabled(enabled);
}

void MainWindow::setDlgLocateNull()
{
//    dlgLocate = NULL;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    //窗口关闭时询问是否退出
    QMessageBox::StandardButton result = QMessageBox::question(this,tr("确定"),tr("确定要退出本程序吗?"),QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel,QMessageBox::No);
    if(result == QMessageBox::Yes)
    {
        event->accept();
    }
    else
    {
        event->ignore();
    }
}

void MainWindow::on_actCN_triggered()
{
    qApp->removeTranslator(trans);
    delete trans;
    trans = new QTranslator;
    trans->load("samp16_1_cn.qm");
    qApp->installTranslator(trans);
    ui->retranslateUi(this);
    QSettings settings("WWB-Qt","samp16_1");
    settings.setValue("Language","CN");
}

void MainWindow::on_actEN_triggered()
{
    qApp->removeTranslator(trans);
    delete trans;
    trans = new QTranslator;
    trans->load("samp16_1_en.qm");
    qApp->installTranslator(trans);
    ui->retranslateUi(this);
    QSettings settings("WWB-Qt","samp16_1");
    settings.setValue("Language","CN");
}
