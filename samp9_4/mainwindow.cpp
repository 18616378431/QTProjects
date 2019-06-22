#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLegendMarker>
#include <QXYLegendMarker>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->chartView);
    labXYValue = new QLabel("X=  ,Y=  ");//状态栏显示鼠标点的坐标
    labXYValue->setMinimumWidth(200);
    ui->statusBar->addWidget(labXYValue);
    createChart();//创建图表
    prepareData();//生成数据
    QObject::connect(ui->chartView,SIGNAL(mouseMovePoint(QPoint)),
                     this,SLOT(on_MouseMovePoint(QPoint)));//鼠标移动事件
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createChart()
{
    //创建图表
    QChart *chart = new QChart();
    chart->setTitle("图表演示");
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);
    ui->chartView->setCursor(Qt::CrossCursor);
}

void MainWindow::prepareData()
{
    //生成图表数据
    QChart *chart = ui->chartView->chart();
    QLineSeries *series0 = new QLineSeries();
    QLineSeries *series1 = new QLineSeries();

    series0->setName("Sin 曲线");
    series1->setName("Cos 曲线");
    chart->addSeries(series0);
    chart->addSeries(series1);

    //序列添加数值
    qreal t = 0,y1,y2,intv = 0.1;
    int cnt = 100;
    for(int i = 0;i < cnt;i++)
    {
        y1 = qSin(t);
        series0->append(t,y1);
        y2 = qCos(t);
        series1->append(t,y2);
        t += intv;
    }

    //创建坐标轴
    QValueAxis *axisX = new QValueAxis();
    axisX->setRange(0,10);
    axisX->setTitleText("time(sec)");

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(-2,2);
    axisY->setTitleText("value");

    chart->setAxisX(axisX,series0);
    chart->setAxisY(axisY,series0);
    chart->setAxisX(axisX,series1);
    chart->setAxisY(axisY,series1);

    foreach(QLegendMarker *marker,chart->legend()->markers())
    {
        connect(marker,SIGNAL(clicked()),this,SLOT(on_LegendMarkerClicked()));
    }
}

void MainWindow::on_MouseMovePoint(QPoint point)
{
    //鼠标移动槽函数
    QPointF pt = ui->chartView->chart()->mapToValue(point);//转换为图表的数值
    labXYValue->setText(QString::asprintf("X=%.1f,Y=%.2f",pt.x(),pt.y()));
}

void MainWindow::on_LegendMarkerClicked()
{
    //图例单击槽函数
    QLegendMarker *marker = qobject_cast<QLegendMarker *>(sender());
    switch(marker->type())
    {
    case QLegendMarker::LegendMarkerTypeXY:
        marker->series()->setVisible(!marker->series()->isVisible());
        marker->setVisible(true);
        break;
    }
}

void MainWindow::on_actReset_triggered()
{
    //原始大小
    ui->chartView->chart()->zoomReset();
}

void MainWindow::on_actZoomIn_triggered()
{
    //放大
    ui->chartView->chart()->zoom(1.2);
}

void MainWindow::on_actZoomOut_triggered()
{
    //缩小
    ui->chartView->chart()->zoom(0.8);
}
