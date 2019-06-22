#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSplitter>
#include <QtMath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    //初始化绘图
    graph3D = new Q3DScatter();
    graphContainer = QWidget::createWindowContainer(graph3D);

    QScatterDataProxy *proxy = new QScatterDataProxy();//数据代理
    series = new QScatter3DSeries(proxy);//创建序列
    series->setItemLabelFormat("(@xLabel @yLabel @zLabel)");
    series->setMeshSmooth(true);
    graph3D->addSeries(series);
    //创建坐标轴
    graph3D->axisX()->setTitle("axis X");
    graph3D->axisX()->setTitleVisible(true);
    graph3D->axisY()->setTitle("axis Y");
    graph3D->axisY()->setTitleVisible(true);
    graph3D->axisZ()->setTitle("axis Z");
    graph3D->axisZ()->setTitleVisible(true);
    graph3D->activeTheme()->setLabelBackgroundEnabled(false);

    series->setMesh(QAbstract3DSeries::MeshSphere);//数据点为圆球
    series->setItemSize(0.2);//取值范围0~1

    //墨西哥草帽,-10:0.5:10,N=41
    int N = 41;
    int itemCount = N * N;
    QScatterDataArray *dataArray = new QScatterDataArray();
    dataArray->resize(itemCount);
    QScatterDataItem *ptrToDataArray = &dataArray->first();
    float x,y,z;
    int i,j;
    x = -10;
    for(i = 1;i <= N;i++)
    {
        y = -10;
        for(j = 1;j <= N;j++)
        {
            z = qSqrt(x * x + y * y);

            if(z != 0)
            {
                z = 10 * qSin(z) / z;
            }
            else
            {
                z = 10;
            }

            ptrToDataArray->setPosition(QVector3D(x,z,y));
            ptrToDataArray++;
            y += 0.5;
        }
        x += 0.5;
    }
    series->dataProxy()->resetArray(dataArray);
}
