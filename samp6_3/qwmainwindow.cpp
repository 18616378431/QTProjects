#include "qwmainwindow.h"
#include "ui_qwmainwindow.h"

QWMainWindow::QWMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QWMainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setVisible(false);
    ui->tabWidget->clear();//清除所有页面
    ui->tabWidget->tabsClosable();//Page有关闭按钮,可以关闭
    this->setCentralWidget(ui->tabWidget);
    this->setWindowState(Qt::WindowMaximized);//窗口最大化显示
    this->setAutoFillBackground(true);
}

QWMainWindow::~QWMainWindow()
{
    delete ui;
}

void QWMainWindow::paintEvent(QPaintEvent *event)
{
    //绘制窗口背景图片
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0,ui->mainToolBar->height(),
                       this->width(),this->height() - ui->mainToolBar->height() - ui->statusBar->height(),
                       QPixmap(":/img/com.png"));
}

void QWMainWindow::on_actWidgetInsite_triggered()
{
    //创建QFormDoc窗体,并在tabWidget显示
    QFormDoc *formDoc = new QFormDoc(this);
    formDoc->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    int cur = ui->tabWidget->addTab(formDoc,QString::asprintf("Doc %d",ui->tabWidget->count()));
    ui->tabWidget->setCurrentIndex(cur);
    ui->tabWidget->setVisible(true);
}

void QWMainWindow::on_actWidget_triggered()
{
    //独立widget窗体显示
    QFormDoc *formDoc = new QFormDoc();
    formDoc->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    formDoc->setWindowTitle("基于QWidget的窗体,无父窗体,关闭时删除");
    formDoc->setWindowFlag(Qt::Window,true);

//    formDoc->setWindowFlag(Qt::CustomizeWindowHint,true);//关闭缺省的窗口标题栏
//    formDoc->setWindowFlag(Qt::WindowMinMaxButtonsHint,false);//有最小化、最大化按钮
//    formDoc->setWindowFlag(Qt::WindowCloseButtonHint,true);//有关闭按钮
//    formDoc->setWindowFlag(Qt::WindowStaysOnTopHint,true);//窗口总是处于最上层

    formDoc->setWindowOpacity(0.9);

//    formDoc->setWindowModality(Qt::WindowModal);//模态显示窗口

    formDoc->show();//在单独的窗体显示
}

void QWMainWindow::on_actWindowInsite_triggered()
{
    //嵌入式table窗体
    QFormTable *formTable = new QFormTable(this);
    formTable->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    int cur = ui->tabWidget->addTab(formTable,QString::asprintf("Table %d",ui->tabWidget->count()));
    ui->tabWidget->setCurrentIndex(cur);
    ui->tabWidget->setVisible(true);
}



void QWMainWindow::on_actWindow_triggered()
{
    //独立的MainWindow窗口
    QFormTable *formTable = new QFormTable(this);//指定父窗口,关闭时释放
    formTable->setAttribute(Qt::WA_DeleteOnClose);
    formTable->setWindowTitle("基于QMainWindow的窗口,指定父窗口,关闭时删除");
    formTable->show();
}

void QWMainWindow::on_tabWidget_tabCloseRequested(int index)
{
    //关闭tab,单击分页的关闭图标时发射,index为页面的编号
    if(index < 0)
    {
        return ;
    }
    QWidget *aForm = ui->tabWidget->widget(index);//tab页面的窗体组件
    aForm->close();
}

void QWMainWindow::on_tabWidget_currentChanged(int index)
{
    //删除或切换分页时发射
    Q_UNUSED(index);
    bool en = ui->tabWidget->count() > 0;//再无分页
    ui->tabWidget->setVisible(en);
}
