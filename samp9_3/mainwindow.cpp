#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    theModel = new QStandardItemModel(iniDataRowCount,fixedColumnCount,this);

    ui->tableView->setModel(theModel);

    this->setCentralWidget(ui->splitter_2);

    iniData();//初始化数据
    survey();//统计数据

    //数据模块的itemChanged信号与自定义槽函数关联,用于自动计算平均分
    QObject::connect(theModel,SIGNAL(itemChanged(QStandardItem*)),
                     this,SLOT(on_itemChanged(QStandardItem *)));

    iniBarChart();//初始化柱状图
    iniPiewChart();//初始化饼图
    iniStackedBar();//初始化堆叠图
    iniPercentBar();//初始化百分比柱状图
//    iniScatterChart();//初始化散点图
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::iniData()
{
    //初始化数据
    QStringList headerList;
    headerList << "姓名" << "数学" << "语文" << "英语" << "平均分";

    theModel->setHorizontalHeaderLabels(headerList);

    qsrand(QTime::currentTime().second());//随机数种子

    QStandardItem *aItem = nullptr;

    for(int i = 0;i < theModel->rowCount();i++)
    {
        QString studName = QString::asprintf("学生%2d",i + 1);
        aItem = new QStandardItem(studName);//创建item
        aItem->setTextAlignment(Qt::AlignHCenter);
        theModel->setItem(i,colNoName,aItem);//学生列,设置item
        qreal avgScore = 0;
        for(int j = colNoMath;j <= colNoEnglish;j++)//数学、语文、英语
        {
            //不包含最后一列
            qreal score = 50.0 + (qrand() % 50);//随机数
            avgScore += score;
            aItem = new QStandardItem(QString::asprintf("%.0f",score));
            aItem->setTextAlignment(Qt::AlignHCenter);
            theModel->setItem(i,j,aItem);//设置item
        }
        aItem = new QStandardItem(QString::asprintf("%.1f",avgScore / 3));//平均分
        aItem->setTextAlignment(Qt::AlignHCenter);
        aItem->setFlags(aItem->flags() & (!Qt::ItemIsEditable));//不允许编辑
        theModel->setItem(i,colNoAverage,aItem);
    }
}

void MainWindow::on_itemChanged(QStandardItem *item)
{
    //自动计算平均分
    if(item->column() < colNoMath || item->column() > colNoEnglish)
    {
        //修改的不是数学、语文、英语
        return ;
    }

    int rowNo = item->row();//获取数据的行编号
    qreal avg = 0;
    QStandardItem *aItem = nullptr;
    for(int i = colNoMath;i <= colNoEnglish;i++)
    {
        //获取三个分数的和
        aItem = theModel->item(rowNo,i);
        avg += aItem->text().toDouble();
    }

    avg = avg / 3;//计算平均分
    aItem = theModel->item(rowNo,colNoAverage);//获取平均分数的item
    aItem->setText(QString::asprintf("%.1f",avg));
}

void MainWindow::iniBarChart()
{
    //初始化柱状图
    QChart *chart = new QChart();

    chart->setTitle("BarChart 演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->chartViewBar->setChart(chart);
    ui->chartViewBar->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::buildBarChart()
{
    //构造柱状图
    QChart *chart = ui->chartViewBar->chart();//获取chartview关联的chart
    chart->removeAllSeries();//删除所有序列
    chart->removeAxis(chart->axisX());//删除坐标轴
    chart->removeAxis(chart->axisY());

    //创建三个Barset,从数据模型表头获取name
    QBarSet *setMath = new QBarSet(theModel->horizontalHeaderItem(colNoMath)->text());
    QBarSet *setChinese = new QBarSet(theModel->horizontalHeaderItem(colNoChinese)->text());
    QBarSet *setEnglish = new QBarSet(theModel->horizontalHeaderItem(colNoEnglish)->text());
    QLineSeries *Line = new QLineSeries();//显示平均分

    Line->setName(theModel->horizontalHeaderItem(colNoAverage)->text());

    QPen pen;
    pen.setColor(Qt::red);
    pen.setWidth(2);
    Line->setPen(pen);

    for(int i = 0;i < theModel->rowCount();i++)
    {
        //从数据模型获取数据
        setMath->append(theModel->item(i,colNoMath)->text().toInt());
        setChinese->append(theModel->item(i,colNoChinese)->text().toInt());
        setEnglish->append(theModel->item(i,colNoEnglish)->text().toInt());
        Line->append(QPointF(i,theModel->item(i,colNoAverage)->text().toFloat()));
    }

    //创建柱状图序列,并添加三个数据集
    QBarSeries *series = new QBarSeries();
    series->append(setMath);
    series->append(setChinese);
    series->append(setEnglish);

    chart->addSeries(series);//添加柱状图序列
    chart->addSeries(Line);//添加折线序列

    //用于横坐标的字符串列表
    QStringList categories;
    for(int i = 0;i < theModel->rowCount();i++)
    {
        categories << theModel->item(i,colNoName)->text();
    }

    //用于柱状图的横坐标轴
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);//添加横坐标文字列表

    chart->setAxisX(axisX,series);//设置横坐标
    chart->setAxisX(axisX,Line);
    axisX->setRange(categories.at(0),categories.at(categories.count() - 1));

    //数值型坐标为纵坐标
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,100);
    axisY->setTitleText("分数");
    axisY->setTickCount(6);
    axisY->setLabelFormat("%.0f");

    chart->setAxisY(axisY,series);
    chart->setAxisY(axisY,Line);

    chart->legend()->setVisible(true);//显示图例
    chart->legend()->setAlignment(Qt::AlignBottom);//图例显示在下方
}

void MainWindow::on_btnBuildBarChart_clicked()
{
    //刷新柱状图
    this->buildBarChart();
}

void MainWindow::survey()
{
    //数据统计
    int cnt50,cnt60,cnt70,cnt80,cnt90;
    qreal sumV,minV,maxV;
    qreal val;
    QTreeWidgetItem *item = nullptr;//节点

    int i,j;
    for(i = colNoMath;i <= colNoAverage;i++)
    {
        sumV = cnt50 = cnt60 = cnt70 = cnt80 = cnt90 = 0;

        for(j = 0;j < theModel->rowCount();j++)
        {
            val = theModel->item(j,i)->text().toDouble();
            //最大值、最小值
            if(j == 0)
            {
                minV = maxV = val;
            }

            if(val < minV)
            {
                minV = val;
            }

            if(val > maxV)
            {
                maxV = val;
            }
            //总分数
            sumV += val;

            //统计各分段人数
            if(val < 60)
            {
                cnt50++;
            }
            else if(val >= 60 && val < 70)
            {
                cnt60++;
            }
            else if(val >= 70 && val < 80)
            {
                cnt70++;
            }
            else if(val >= 80 && val < 90)
            {
                cnt80++;
            }
            else
            {
                cnt90++;
            }
        }
        //将数据显示到treewidget
        item = ui->treeWidget->topLevelItem(0);//<60
        item->setText(i,QString::number(cnt50));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item = ui->treeWidget->topLevelItem(1);//60
        item->setText(i,QString::number(cnt60));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item = ui->treeWidget->topLevelItem(2);//70
        item->setText(i,QString::number(cnt70));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item = ui->treeWidget->topLevelItem(3);//80
        item->setText(i,QString::number(cnt80));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item = ui->treeWidget->topLevelItem(4);//90
        item->setText(i,QString::number(cnt90));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item = ui->treeWidget->topLevelItem(5);//average
        item->setText(i,QString::number(sumV / theModel->rowCount()));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item = ui->treeWidget->topLevelItem(6);//max
        item->setText(i,QString::number(maxV));
        item->setTextAlignment(i,Qt::AlignHCenter);

        item = ui->treeWidget->topLevelItem(7);//min
        item->setText(i,QString::number(minV));
        item->setTextAlignment(i,Qt::AlignHCenter);

    }
}
//Pie
void MainWindow::iniPiewChart()
{
    //初始化饼图
    QChart *chart = new QChart();
    chart->setTitle("PieChart 演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->chartViewPie->setChart(chart);
    ui->chartViewPie->setRenderHint(QPainter::Antialiasing);
}


void MainWindow::buildPieChart()
{
    //构造饼图
    QChart *chart = ui->chartViewPie->chart();//获取chart对象
    chart->removeAllSeries();
    int colNo = 1 + ui->cBoxCourse->currentIndex();//获取分析对象
    QPieSeries *series = new QPieSeries();//创建饼图序列
    series->setHoleSize(ui->spinHoleSize->value());//饼图中间空心的大小
    series->setPieSize(ui->spinPieSize->value());//饼图大小

    QTreeWidgetItem *item = nullptr;
    for(int i = 0;i <= 4;i++)//添加分块数据
    {
        item = ui->treeWidget->topLevelItem(i);
        series->append(item->text(0),item->text(colNo).toFloat());
    }

    QPieSlice *slice = nullptr;//饼图分块
    for(int i = 0;i <= 4;i++)
    {
        slice = series->slices().at(i);//获取分块
        slice->setLabel(slice->label() +
                        QString::asprintf(":%.0f人,%.1f%%",slice->value(),slice->percentage() * 100));
        connect(slice,SIGNAL(hovered(bool)),this,SLOT(on_PieSliceHighlight(bool)));
    }

    slice->setExploded(true);//最后一个slice设置为exploded
    series->setLabelsVisible(true);//必须添加完slice再设置
    chart->addSeries(series);//添加饼图序列
    chart->setTitle("PieChart----" + ui->cBoxCourse->currentText());
    chart->legend()->setVisible(true);//图例
    chart->legend()->setAlignment(Qt::AlignRight);
}
//饼图响应事件
void MainWindow::on_PieSliceHighlight(bool b)
{
    //移除其他分块的弹出效果
    QPieSlice *slice = nullptr;

    QPieSeries *series = (QPieSeries *)ui->chartViewPie->chart()->series().at(0);

//    qDebug() << series->slices().count();

    for(int i = 0;i < series->slices().count();i++)
    {
        slice = series->slices().at(i);
        slice->setExploded(false);
    }

    //鼠标移入、移出时发射hovered信号,动态设置exploded效果
    slice = (QPieSlice *)sender();
    slice->setExploded(b);
}

void MainWindow::on_btnPie_clicked()
{
    //刷新饼图
    this->buildPieChart();
}

void MainWindow::on_cBoxCourse_currentIndexChanged(int index)
{
    //切换分类
    Q_UNUSED(index)
    this->buildPieChart();
}

//堆叠柱状图
void MainWindow::iniStackedBar()
{
    //初始化堆叠柱状图
    QChart *chart = new QChart();
    chart->setTitle("StackedBar 演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->chartViewStackedBar->setChart(chart);
    ui->chartViewStackedBar->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::buildStackedBar()
{
    //刷新堆叠柱状图
    QChart *chart = ui->chartViewStackedBar->chart();
    chart->removeAllSeries();
    chart->removeAxis(chart->axisX());
    chart->removeAxis(chart->axisY());
    //创建三门课程的数据集
    QBarSet *setMath = new QBarSet(theModel->horizontalHeaderItem(colNoMath)->text());
    QBarSet *setChinese = new QBarSet(theModel->horizontalHeaderItem(colNoChinese)->text());
    QBarSet *setEnglish = new QBarSet(theModel->horizontalHeaderItem(colNoEnglish)->text());

    for(int i = 0;i < theModel->rowCount();i++)
    {
        setMath->append(theModel->item(i,colNoMath)->text().toInt());
        setChinese->append(theModel->item(i,colNoChinese)->text().toInt());
        setEnglish->append(theModel->item(i,colNoEnglish)->text().toInt());
    }

    //创建QStackedBarSeries对象并添加数据集
    QStackedBarSeries *series = new QStackedBarSeries();
    series->append(setMath);
    series->append(setChinese);
    series->append(setEnglish);
    series->setLabelsVisible(true);//显示每段的标签
    chart->addSeries(series);//添加序列到图表

    //创建横轴
    QStringList categories;
    for(int i = 0;i < theModel->rowCount();i++)
    {
        categories << theModel->item(i,colNoName)->text();
    }

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->setAxisX(axisX,series);
    axisX->setRange(categories.at(0),categories.at(categories.count() - 1));

    //数值坐标作为纵轴
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,300);
    axisY->setTitleText("总分");
    axisY->setTickCount(6);
    axisY->setLabelFormat("%.0f");
    chart->setAxisY(axisY,series);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);
}

void MainWindow::on_btnStackedBar_clicked()
{
    //刷新堆叠柱状图
    this->buildStackedBar();
}

void MainWindow::iniPercentBar()
{
    //初始化百分比柱状图
    QChart *chart = new QChart();
    chart->setTitle("PercentBar 演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->chartViewPercentBar->setChart(chart);
    ui->chartViewPercentBar->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::buildPercentBar()
{
    //绘制百分比柱状图
    QChart *chart = ui->chartViewPercentBar->chart();
    chart->removeAllSeries();
    chart->removeAxis(chart->axisX());
    chart->removeAxis(chart->axisY());

    //创建数据集
    QBarSet *setMath = new QBarSet(theModel->horizontalHeaderItem(colNoMath)->text());
    QBarSet *setChinese = new QBarSet(theModel->horizontalHeaderItem(colNoChinese)->text());
    QBarSet *setEnglish = new QBarSet(theModel->horizontalHeaderItem(colNoEnglish)->text());

    QTreeWidgetItem *item = nullptr;
    QStringList categories;

    for(int i = 0;i <= 4;i++)
    {
        //从统计表获取数据,添加到数据集
        item = ui->treeWidget->topLevelItem(i);
        categories << item->text(0);//横坐标的标签
        setMath->append(item->text(colNoMath).toFloat());
        setChinese->append(item->text(colNoChinese).toFloat());
        setEnglish->append(item->text(colNoEnglish).toFloat());
    }

    //创建百分比序列
    QPercentBarSeries *series = new QPercentBarSeries();
    series->append(setMath);
    series->append(setChinese);
    series->append(setEnglish);
    series->setLabelsVisible(true);//显示百分比
    chart->addSeries(series);

    //横坐标
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setRange(categories.at(0),categories.at(categories.count() - 1));
    chart->setAxisX(axisX,series);

    //纵坐标
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,100);
    axisY->setTitleText("百分比");
    axisY->setTickCount(6);
    axisY->setLabelFormat("%.1f");

    chart->setAxisY(axisY,series);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);
}

void MainWindow::on_btnPercentBar_clicked()
{
    //刷新百分比柱状图
    this->buildPercentBar();
}

void MainWindow::iniScatterChart()
{
    //初始化散点图
    QChart *chart = new QChart();
    chart->setTitle("ScatterChart 演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->chartViewScatter->setChart(chart);
    ui->chartViewScatter->setAlignment(Qt::AlignBottom);
}

void MainWindow::buildScatterChart()
{
    //绘制散点图
    QChart *chart = ui->chartViewScatter->chart();
    chart->removeAllSeries();
    chart->removeAxis(chart->axisX());
    chart->removeAxis(chart->axisY());

    //光滑曲线
    QSplineSeries *seriesLine = new QSplineSeries();
    seriesLine->setName("spline");

    QPen pen;
    pen.setColor(Qt::blue);
    pen.setWidth(2);
    seriesLine->setPen(pen);

    QScatterSeries *series = new QScatterSeries();//散点序列
    series->setName("散点");
    series->setMarkerShape(QScatterSeries::MarkerShapeCircle);//散点形状
    series->setBorderColor(Qt::black);//散点边框颜色
    series->setBrush(Qt::red);//填充颜色
    series->setMarkerSize(12);//散点大小

    qsrand(QTime::currentTime().second());
    int x,y;

    for(int i = 0;i < 10;i++)
    {
        x = (qrand() % 20);
        y = (qrand() % 20);
        series->append(x,y);
        seriesLine->append(x,y);
    }

    chart->addSeries(series);
    chart->addSeries(seriesLine);

    chart->createDefaultAxes();//创建缺省坐标轴

    chart->axisX()->setTitleText("X 轴");
    chart->axisX()->setRange(-2,22);

    chart->axisY()->setTitleText("Y 轴");
    chart->axisY()->setRange(-2,22);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);
}

void MainWindow::on_btnScatter_clicked()
{
    this->buildScatterChart();
}
