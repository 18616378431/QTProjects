#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSplitter>
#include <QLinearGradient>
#include <QDebug>
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //渐变颜色按钮
    QLinearGradient grBotY(0,0,100,0);//线性渐变
    grBotY.setColorAt(1.0,Qt::black);
    grBotY.setColorAt(0.67,Qt::blue);
    grBotY.setColorAt(0.33,Qt::red);
    grBotY.setColorAt(0,Qt::yellow);

    //图片
    QPixmap pm(160,20);
    QPainter pmp(&pm);
    pmp.setBrush(QBrush(grBotY));
    pmp.setPen(Qt::NoPen);
    pmp.drawRect(0,0,160,20);

    ui->btnGrad1->setIcon(QIcon(pm));//渐变颜色按钮1
    ui->btnGrad1->setIconSize(QSize(160,20));

    QLinearGradient grGtoR(0,0,100,0);//渐变颜色2
    grGtoR.setColorAt(1.0,Qt::darkGreen);
    grGtoR.setColorAt(0.5,Qt::yellow);
    grGtoR.setColorAt(0.2,Qt::red);
    grGtoR.setColorAt(0,Qt::darkRed);

    pmp.setBrush(QBrush(grGtoR));
    pmp.drawRect(0,0,160,20);

    ui->btnGrad2->setIcon(QIcon(pm));//渐变颜色按钮2
    ui->btnGrad2->setIconSize(QSize(160,20));

    iniGraph3D();

    QSplitter *splitter = new QSplitter(Qt::Horizontal);
    splitter->addWidget(ui->groupBox);
    splitter->addWidget(graphContainer);

    this->setCentralWidget(splitter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::iniGraph3D()
{
    graph3D = new Q3DSurface();
    graphContainer = QWidget::createWindowContainer(graph3D);
    //创建坐标轴
    QValue3DAxis *axisX = new QValue3DAxis();
    axisX->setTitle("Axis X");
    axisX->setTitleVisible(true);
    axisX->setRange(-11,11);
    graph3D->setAxisX(axisX);

    QValue3DAxis *axisY = new QValue3DAxis();
    axisY->setTitle("Axis Y");
    axisY->setTitleVisible(true);
    axisY->setAutoAdjustRange(true);
    graph3D->setAxisY(axisY);

    QValue3DAxis *axisZ = new QValue3DAxis();
    axisZ->setTitle("Axis Z");
    axisZ->setTitleVisible(true);
    axisZ->setRange(-11,11);
    graph3D->setAxisZ(axisZ);

    //创建数据代理
    proxy = new QSurfaceDataProxy();
    series = new QSurface3DSeries(proxy);
    graph3D->addSeries(series);
    series->setItemLabelFormat("(@xLabel,@yLabel,@zLabel)");
    series->setMeshSmooth(true);
    graph3D->activeTheme()->setLabelBackgroundEnabled(false);
    series->setDrawMode(QSurface3DSeries::DrawSurfaceAndWireframe);

    //创建数据,墨西哥草帽
    int N = 41;//-10:0.5:10 N个数据点
    QSurfaceDataArray *dataArray = new QSurfaceDataArray;//数组
    dataArray->reserve(N);
    float x = -10,y,z;
    int i,j;
    QSurfaceDataRow *newRow = nullptr;

    for(i = 1;i <= N;i++)
    {
        newRow = new QSurfaceDataRow(N);//一行的数据
        y = -10;
        int index = 0;
        for(j = 1;j <= N;j++)
        {
            z = qSqrt(x*x + y * y);

            if(z != 0)
            {
                z = 10 * qSin(z) / z;
            }
            else
            {
                z = 10;
            }
            (*newRow)[index++].setPosition(QVector3D(x,z,y));
            y = y + 0.5;
        }
        x = x + 0.5;
        *dataArray << newRow;
    }
    proxy->resetArray(dataArray);
}

void MainWindow::on_btnBarColor_clicked()
{
    //单一曲面颜色
    QColor color = series->baseColor();
    color = QColorDialog::getColor(color);
    if(color.isValid())
    {
        series->setBaseColor(color);
        series->setColorStyle(Q3DTheme::ColorStyleUniform);
    }
}

void MainWindow::on_btnGrad1_clicked()
{
    //渐变颜色
    QLinearGradient gr;
    gr.setColorAt(0.0,Qt::black);
    gr.setColorAt(0.33,Qt::blue);
    gr.setColorAt(0.67,Qt::red);
    gr.setColorAt(1.0,Qt::yellow);

    series->setBaseGradient(gr);
    series->setColorStyle(Q3DTheme::ColorStyleRangeGradient);
}
