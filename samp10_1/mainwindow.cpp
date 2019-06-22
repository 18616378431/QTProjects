#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSplitter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setMinimumWidth(800);
    this->setMinimumHeight(600);

    iniGraph3D();//创建三维图表
    QSplitter *splitter  = new QSplitter(Qt::Horizontal);
    splitter->addWidget(ui->groupBox);//左侧面板
    splitter->addWidget(graphContainer);//右侧面板

    this->setCentralWidget(splitter);

    ui->groupBox->setMinimumHeight(600);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::iniGraph3D()
{
    //创建图表
    graph3D = new Q3DBars();
    graphContainer = QWidget::createWindowContainer(graph3D);
    //创建坐标轴
    QStringList rowLabs;
    QStringList colLabs;
    rowLabs << "row1" << "row2" << "row3";
    colLabs << "col1" << "col2" << "col3" << "col4" << "col5";

    QValue3DAxis *axisV = new QValue3DAxis;//数值坐标轴
    axisV->setTitle("value");
    axisV->setTitleVisible(true);

    QCategory3DAxis *axisRow = new QCategory3DAxis;//行坐标轴
    axisRow->setTitle("row axis");
    axisRow->setLabels(rowLabs);
    axisRow->setTitleVisible(true);

    QCategory3DAxis *axisCol = new QCategory3DAxis;//列坐标轴
    axisCol->setTitle("column axis");
    axisCol->setLabels(colLabs);
    axisCol->setTitleVisible(true);

    graph3D->setValueAxis(axisV);
    graph3D->setRowAxis(axisRow);
    graph3D->setColumnAxis(axisCol);

    //创建序列
    series = new QBar3DSeries;
    series->setMesh(QAbstract3DSeries::MeshCylinder);//棒图形状
    series->setItemLabelFormat("(@rowLabel,@colLabel):%.1f");//标签格式

    graph3D->addSeries(series);

    //添加数据
    QBarDataArray *dataSet = new QBarDataArray;//数据数组
    dataSet->reserve(rowLabs.count());

    QBarDataRow *dataRow = new QBarDataRow;
    *dataRow << 1 << 2 << 3 << 4 << 5;
    dataSet->append(dataRow);

    QBarDataRow *dataRow1 = new QBarDataRow;
    *dataRow1 << 5 << 5 << 5 << 5 << 5;
    dataSet->append(dataRow1);

    QBarDataRow *dataRow2 = new QBarDataRow;
    *dataRow2 << 1 << 5 << 9 << 5 << 1;
    dataSet->append(dataRow2);

    series->dataProxy()->resetArray(dataSet);
}

void MainWindow::on_comboCamera_currentIndexChanged(int index)
{
    //预设视角槽函数
    Q3DCamera::CameraPreset cameraPos = Q3DCamera::CameraPreset(index);
    graph3D->scene()->activeCamera()->setCameraPreset(cameraPos);
}

void MainWindow::sliderChanged()
{
    //缩放通用函数
    int xRot = ui->sliderH->value();//水平
    int yRot = ui->sliderV->value();//垂直
    int zoom = ui->slideZoom->value();//缩放
    graph3D->scene()->activeCamera()->setCameraPosition(xRot,yRot,zoom);
}

void MainWindow::on_sliderH_valueChanged(int value)
{
    Q_UNUSED(value)
    this->sliderChanged();
}


void MainWindow::on_sliderV_valueChanged(int value)
{
    Q_UNUSED(value)
    this->sliderChanged();
}

void MainWindow::on_slideZoom_valueChanged(int value)
{
    Q_UNUSED(value)
    this->sliderChanged();
}

void MainWindow::on_cBoxTheme_currentIndexChanged(int index)
{
    //切换主题
    Q3DTheme *currentTheme = graph3D->activeTheme();
    currentTheme->setType(Q3DTheme::Theme(index));
}

void MainWindow::on_choBoxBackground_clicked(bool checked)
{
    //显示背景
    graph3D->activeTheme()->setBackgroundEnabled(checked);
}

void MainWindow::on_chkBoxGrid_clicked(bool checked)
{
    //图表的网格
    graph3D->activeTheme()->setGridEnabled(checked);
}

void MainWindow::on_chkBoxAxisBackground_clicked(bool checked)
{
    //坐标轴标签背景可见
    graph3D->activeTheme()->setLabelBackgroundEnabled(checked);
}

void MainWindow::on_cBoxSelectionMode_currentIndexChanged(int index)
{
    //选择模式
    graph3D->setSelectionMode(QAbstract3DGraph::SelectionFlags(index));
}

void MainWindow::on_cBoxBarStyle_currentIndexChanged(int index)
{
    //棒图样式
    QAbstract3DSeries::Mesh aMesh;
    aMesh = QAbstract3DSeries::Mesh(index + 1);
    series->setMesh(aMesh);
}

void MainWindow::on_chkBoxItemLabel_clicked(bool checked)
{
    //项的标签可见
    series->setItemLabelFormat("value at (@rowLabel,@colLabel):%.1f");
    series->setItemLabelVisible(checked);
}

void MainWindow::on_chkBoxReverse_clicked(bool checked)
{
    //数值坐标轴反向
    graph3D->valueAxis()->setReversed(checked);
}
