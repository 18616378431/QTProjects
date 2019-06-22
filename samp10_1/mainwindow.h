#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtDataVisualization>

using namespace QtDataVisualization;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QWidget *graphContainer;//图表的容器
    Q3DBars *graph3D;//图表
    QBar3DSeries *series;//图表序列
    void iniGraph3D();//创建图表
    void sliderChanged();//缩放响应函数
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_comboCamera_currentIndexChanged(int index);

    void on_sliderH_valueChanged(int value);


    void on_sliderV_valueChanged(int value);

    void on_slideZoom_valueChanged(int value);

    void on_cBoxTheme_currentIndexChanged(int index);

    void on_choBoxBackground_clicked(bool checked);

    void on_chkBoxGrid_clicked(bool checked);

    void on_chkBoxAxisBackground_clicked(bool checked);

    void on_cBoxSelectionMode_currentIndexChanged(int index);

    void on_cBoxBarStyle_currentIndexChanged(int index);

    void on_chkBoxItemLabel_clicked(bool checked);

    void on_chkBoxReverse_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
