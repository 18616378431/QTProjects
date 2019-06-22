#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qwchartview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel *labXYValue;//状态栏显示文字标签
    void createChart();//创建图表
    void prepareData();//准备数据
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_LegendMarkerClicked();//图例单击槽函数
    void on_MouseMovePoint(QPoint point);//鼠标移动事件,自动移槽函数

//    void on_actZoomReset_triggered();//工具栏按钮,原始大小
//    void on_actZoomIn_triggered();//工具栏按钮,放大
//    void on_actZoomOut_triggered();//工具栏按钮,缩小
    void on_actReset_triggered();

    void on_actZoomIn_triggered();

    void on_actZoomOut_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
