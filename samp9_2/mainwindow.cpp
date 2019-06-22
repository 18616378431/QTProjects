#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtMath>

#include "qwdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createChart();//创建图表
    prepareData();//生成数据
    updateFromChart();//将图表数据更新到界面

    this->setCentralWidget(ui->splitter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createChart()
{
    //创建图表
    QChart *chart = new QChart();
    chart->setTitle("简单函数曲线");
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);

    QLineSeries *series0 = new QLineSeries();
    QLineSeries *series1 = new QLineSeries();
    series0->setName("Sin 曲线");
    series1->setName("Cos 曲线");

    curSeries = series0;//当前序列

    QPen pen;
    pen.setStyle(Qt::DotLine);
    pen.setWidth(2);
    pen.setColor(Qt::red);
    series0->setPen(pen);//折线序列的线条设置

    pen.setStyle(Qt::SolidLine);
    pen.setColor(Qt::blue);
    series1->setPen(pen);

    chart->addSeries(series0);
    chart->addSeries(series1);

    //坐标轴
    QValueAxis *axisX = new QValueAxis();
    axisX->setRange(0,10);//设置坐标轴范围
    axisX->setLabelFormat("%.1f");//标签格式
    axisX->setTickCount(11);//主分隔个数
    axisX->setMinorTickCount(4);
    axisX->setTitleText("time(sec)");//标题

    curAxis = axisX;//当前坐标轴

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(-2,2);
    axisY->setTitleText("value");
    axisY->setTickCount(5);
    axisY->setLabelFormat("%.2f");
    axisY->setMinorTickCount(4);

    chart->setAxisX(axisX,series0);
    chart->setAxisX(axisX,series1);
    chart->setAxisY(axisY,series0);
    chart->setAxisY(axisY,series1);
}

void MainWindow::prepareData()
{
    //为序列生成数据
    QLineSeries *series0 = (QLineSeries *)ui->chartView->chart()->series().at(0);
    QLineSeries *series1 = (QLineSeries *)ui->chartView->chart()->series().at(1);
    series0->clear();//清除数据
    series1->clear();

    qsrand(QTime::currentTime().second());//随机数初始化
    qreal t = 0,y1,y2,intv = 0.1;
    qreal rd;
    int cnt = 100;
    for(int i = 0;i < cnt;i++)
    {
        rd = (qrand() % 10) - 5;//-5~+5
        y1 = qSin(t) + rd / 50;
        series0->append(t,y1);//序列添加数据点

        rd = (qrand() % 10) - 5;//-5~+5
        y2 = qCos(t) + rd / 50;
        series1->append(t,y2);

        t += intv;
    }
}

void MainWindow::updateFromChart()
{
    //从图表更新数据到toolbox
    QChart *aChart = ui->chartView->chart();//获取chart
    ui->editTitle->setText(aChart->title());//图表标题

    QMargins mg = aChart->margins();//边距
    ui->spinMarginLeft->setValue(mg.left());
    ui->spinMarginTop->setValue(mg.top());
    ui->spinMarginRight->setValue(mg.right());
    ui->spinMarginBottom->setValue(mg.bottom());
}

void MainWindow::on_btnLegendFont_clicked()
{
    //图例字体设置
    QFont font = ui->chartView->chart()->legend()->font();
    bool ok = false;
    font = QFontDialog::getFont(&ok,font);

    if(ok)
    {
        ui->chartView->chart()->legend()->setFont(font);
    }
}

void MainWindow::on_btnSetChartTitle_clicked()
{
    //设置图表标题
    QChart *chart = ui->chartView->chart();
    chart->setTitle(ui->editTitle->text());
}

//曲线设置
void MainWindow::on_radioSeries0_clicked()
{
    //获取当前数据序列
    if(ui->radioSeries0->isChecked())
    {
        curSeries = (QLineSeries *)ui->chartView->chart()->series().at(0);
    }
    else
    {
        curSeries = (QLineSeries *)ui->chartView->chart()->series().at(1);
    }

    //获取序列的属性并显示到界面上
    ui->editSeriesName->setText(curSeries->name());
    ui->chkSeriesVisible->setChecked(curSeries->isVisible());
    ui->chkPointVisible->setChecked(curSeries->pointsVisible());
    ui->sliderSeriesOpacity->setValue(curSeries->opacity() * 10);
    ui->chkPointLabelVisible->setChecked(curSeries->pointLabelsVisible());
}

void MainWindow::on_radioSeries1_clicked()
{
    //获取当前数据序列
    if(ui->radioSeries0->isChecked())
    {
        curSeries = (QLineSeries *)ui->chartView->chart()->series().at(0);
    }
    else
    {
        curSeries = (QLineSeries *)ui->chartView->chart()->series().at(1);
    }

    //获取序列的属性并显示到界面上
    ui->editSeriesName->setText(curSeries->name());
    ui->chkSeriesVisible->setChecked(curSeries->isVisible());
    ui->chkPointVisible->setChecked(curSeries->pointsVisible());
    ui->sliderSeriesOpacity->setValue(curSeries->opacity() * 10);
    ui->chkPointLabelVisible->setChecked(curSeries->pointLabelsVisible());
}

void MainWindow::on_radiox_clicked()
{
    //获取当前坐标轴
    if(ui->radioX->isChecked())
    {
        curAxis = (QValueAxis *)ui->chartView->chart()->axisX();
    }
    else
    {
        curAxis = (QValueAxis *)ui->chartView->chart()->axisY();
    }

    //获取坐标轴的各种属性显示到界面上
    ui->spinAxisMin->setValue(curAxis->min());
    ui->spinAxisMax->setValue(curAxis->max());
    ui->editAxisTitle->setText(curAxis->titleText());
    ui->chkBoxAxisTitle->setChecked(curAxis->isTitleVisible());
    ui->editAxisLabelFormat->setText(curAxis->labelFormat());
    ui->chkBoxLabelsVisible->setChecked(curAxis->labelsVisible());
    ui->chkGridLineVisible->setChecked(curAxis->isGridLineVisible());
    ui->chkAxisLineVisible->setChecked(curAxis->isLineVisible());
    ui->spinTickCount->setValue(curAxis->tickCount());
    ui->chkAxisTickVisible->setChecked(curAxis->isLineVisible());
    ui->spinMinorTickCount->setValue(curAxis->minorTickCount());
    ui->chkMinorTickVisible->setChecked(curAxis->isMinorGridLineVisible());
}

void MainWindow::on_radioX_clicked()
{
    this->on_radiox_clicked();
}

void MainWindow::on_radioY_clicked()
{
    this->on_radiox_clicked();
}
