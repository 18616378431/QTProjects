#include "qwmainwindow.h"
#include "ui_qwmainwindow.h"
#include "qformdoc.h"

QWMainWindow::QWMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QWMainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->mdiArea);
    this->setWindowState(Qt::WindowMaximized);
    ui->mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
}

QWMainWindow::~QWMainWindow()
{
    delete ui;
}

void QWMainWindow::on_actDoc_New_triggered()
{
    //新建文档
    QFormDoc *formDoc = new QFormDoc(this);
    ui->mdiArea->addSubWindow(formDoc);//文档窗口添加到mdi
    formDoc->show();

    ui->actCut->setEnabled(true);
    ui->actCopy->setEnabled(true);
    ui->actPaste->setEnabled(true);
    ui->actFont->setEnabled(true);
}

void QWMainWindow::on_actDoc_Open_triggered()
{
    //打开文件
    bool needNew = false;//是否需要打开新建子窗口
    QFormDoc *formDoc;
    if(ui->mdiArea->subWindowList().count() > 0)//获取活动窗口
    {
        formDoc = (QFormDoc *)ui->mdiArea->activeSubWindow()->widget();
        formDoc->isFileOpened();//文件已经打开,需要新建窗口
    }
    else
    {
        needNew = true;
    }

    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getOpenFileName(this,"打开一个文件",curPath,"C程序文件(*.h *.cpp);;所有文件(*.*)");

    if(aFileName.isEmpty())
    {
        return ;
    }

    if(needNew)//需要新建子窗口
    {
        formDoc = new QFormDoc(this);
        ui->mdiArea->addSubWindow(formDoc);
    }

    formDoc->loadFromFile(aFileName);//打开文件
    formDoc->show();
    ui->actCut->setEnabled(true);
    ui->actCopy->setEnabled(true);
    ui->actPaste->setEnabled(true);
    ui->actFont->setEnabled(true);
    ui->statusBar->showMessage(aFileName);
}

void QWMainWindow::on_actCascade_triggered()
{
    //窗口及联展开
    ui->mdiArea->cascadeSubWindows();
}

void QWMainWindow::on_actTile_triggered()
{
    //平铺展开
    ui->mdiArea->tileSubWindows();
}

void QWMainWindow::on_actCloseAll_triggered()
{
    //关闭全部窗口
    ui->mdiArea->closeAllSubWindows();
}

void QWMainWindow::on_actViewMode_triggered(bool checked)
{
    //MDI显示模式
    if(checked)//tab多页显示模式
    {
        ui->mdiArea->setViewMode(QMdiArea::TabbedView);//tab多页显示模式
        ui->mdiArea->setTabsClosable(true);//页面可关闭
        ui->actCascade->setEnabled(false);
        ui->actTile->setEnabled(false);
    }
    else//子窗口模式
    {
        ui->mdiArea->setViewMode(QMdiArea::SubWindowView);//子窗口模式
        ui->actCascade->setEnabled(true);
        ui->actTile->setEnabled(true);
    }
}

void QWMainWindow::on_mdiArea_subWindowActivated(QMdiSubWindow *arg1)
{
    Q_UNUSED(arg1);
    //当前活动自窗口切换时
    if(ui->mdiArea->subWindowList().count() == 0)
    {
        //子窗口个数为0
        ui->actCut->setEnabled(false);
        ui->actCopy->setEnabled(false);
        ui->actPaste->setEnabled(false);
        ui->actFont->setEnabled(false);
        ui->statusBar->clearMessage();
    }
    else
    {
//        QFormDoc *formDoc = static_cast<QFormDoc *>(ui->mdiArea->activeSubWindow()->widget());
//        QFormDoc *formDoc = (QFormDoc *)ui->mdiArea->activeSubWindow()->widget();
//        ui->statusBar->showMessage(formDoc->currentFileName());
    }
}

void QWMainWindow::on_actCut_triggered()
{
    //剪切
    QFormDoc *formDoc = (QFormDoc *)ui->mdiArea->activeSubWindow()->widget();
    formDoc->textCut();
}

void QWMainWindow::on_actFont_triggered()
{
    //font
    QFormDoc *formDoc = (QFormDoc *)ui->mdiArea->activeSubWindow()->widget();
    formDoc->setEditFont();
}

void QWMainWindow::on_actCopy_triggered()
{
    //copy
    QFormDoc *formDoc = (QFormDoc *)ui->mdiArea->activeSubWindow()->widget();
    formDoc->textCopy();
}

void QWMainWindow::on_actPaste_triggered()
{
    //paste
    QFormDoc *formDoc = (QFormDoc *)ui->mdiArea->activeSubWindow()->widget();
    formDoc->textPaste();
}
