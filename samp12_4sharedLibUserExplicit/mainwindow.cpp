#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::paintEvent(QPaintEvent *event)
{
    //绘图
//    Q_UNUSED(event);
//    QPainter painter(this);
//    QRect rect(0,0,width(),height());//viewport矩形区
//    painter.setViewport(rect);
//    painter.setWindow(0,0,100,50);//设置窗口大小,逻辑坐标
//    painter.setPen(mPen);
//    painter.drawRect(10,10,80,30);
}

void MainWindow::on_action_Pen_triggered()
{
    //设置Pen
//    bool ok = false;
//    QPen pen = QWDialog::getPen(mPen,ok);

//    if(ok)
//    {
//        mPen = pen;
//        this->repaint();
//    }
}

void MainWindow::on_actExplicitLib_triggered()
{
    //显式共享库,仅在首次调用共享库中的函数时才会载入
    QLibrary myLib("libsamp12_4shareLibFunc.1.0.0.dylib");

    if(myLib.isLoaded())
    {
        QMessageBox::information(this,"信息","共享库已载入,1");
    }

    typedef int (*pFunc)(int);
    pFunc myTripe = (pFunc)myLib.resolve("tripe");//解析动态库中的函数

    int x = 10;
    qDebug() << "初始值" << x << ":" << myTripe;

//    int V = myTripe(x);//调用函数

//    qDebug() << "调用函数" <<  V;

    if(myLib.isLoaded())
    {
        QMessageBox::information(this,"信息","共享库已载入,2");
    }
}
