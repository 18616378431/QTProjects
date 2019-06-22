#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSplitter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    iniGraph3D();
    QSplitter *splitter = new QSplitter();
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
    QValue3DAxis *axisX = new QValue3DAxis;//X 东西
    axisX->setTitle("东--西");
    axisX->setTitleVisible(true);
    axisX->setLabelFormat("%.1f米");
    axisX->setRange(-5000,5000);
    graph3D->setAxisX(axisX);

    QValue3DAxis *axisY = new QValue3DAxis;//Y 深度
    axisY->setTitle("深度");
    axisY->setTitleVisible(true);
    axisY->setAutoAdjustRange(true);
    graph3D->setAxisY(axisY);

    QValue3DAxis *axisZ = new QValue3DAxis;//Z 南北
    axisZ->setTitle("南--北");
    axisZ->setTitleVisible(true);
    axisZ->setLabelFormat("%.1f米");
    axisZ->setRange(-5000,5000);
    graph3D->setAxisZ(axisZ);
    graph3D->activeTheme()->setLabelBackgroundEnabled(false);

    //创建数据代理
//    QImage heightMapImage(":/img/sea.png");
//    QImage heightMapImage(":/img/mountain.png");
    QImage heightMapImage(":/img/seagray.png");
    proxy = new QHeightMapSurfaceDataProxy(heightMapImage);
    proxy->setValueRanges(-5000,5000,-5000,5000);

    series = new QSurface3DSeries(proxy);
    series->setItemLabelFormat("(@xLabel @zLabel) : @yLabel");
    series->setFlatShadingEnabled(false);
    series->setMeshSmooth(true);
    series->setDrawMode(QSurface3DSeries::DrawSurface);

    graph3D->addSeries(series);
}

void MainWindow::on_cBoxSelectionMode_currentIndexChanged(int index)
{
    //选择模式
    switch(index)
    {
    case 0://none
        graph3D->setSelectionMode(QAbstract3DGraph::SelectionNone);
        break;
    case 1://item
        graph3D->setSelectionMode(QAbstract3DGraph::SelectionItem);
        break;
    case 2://Row Slice
        graph3D->setSelectionMode(QAbstract3DGraph::SelectionItemAndRow | QAbstract3DGraph::SelectionSlice);
        break;
    case 3://Column Slice
        graph3D->setSelectionMode(QAbstract3DGraph::SelectionItemAndColumn | QAbstract3DGraph::SelectionSlice);
        break;
    }
}
