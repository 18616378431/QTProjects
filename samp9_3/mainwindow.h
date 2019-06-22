#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QtCharts>
#include <QTime>

//using namespace QtCharts;

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class MainWindow;
}

#define fixedColumnCount 5  //数据模型的列数
#define iniDataRowCount 40   //学生个数
#define colNoName 0         //姓名列的编号
#define colNoMath 1         //数学列的编号
#define colNoChinese 2      //语文列的编号
#define colNoEnglish 3      //英语列的编号
#define colNoAverage 4      //平均分列的编号

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QStandardItemModel *theModel;//数据模型
    void iniData();//初始化数据
    void survey();//统计数据

    void iniBarChart();//初始化柱状图
    void buildBarChart();//构建柱状图

    void iniPiewChart();//饼图
    void buildPieChart();

    void iniStackedBar();//堆叠图
    void buildStackedBar();

    void iniPercentBar();//百分比柱状图
    void buildPercentBar();

    void iniScatterChart();//散点图
    void buildScatterChart();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    //三个分数列数据发生变化,重新计算平均分
    void on_itemChanged(QStandardItem *item);
    void on_btnBuildBarChart_clicked();
    void on_PieSliceHighlight(bool b);
    void on_btnPie_clicked();
    void on_cBoxCourse_currentIndexChanged(int index);
    void on_btnStackedBar_clicked();
    void on_btnPercentBar_clicked();
    void on_btnScatter_clicked();
};

#endif // MAINWINDOW_H
