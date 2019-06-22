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
    QWidget *graphContainer;
    Q3DSurface *graph3D;//图表
    QSurface3DSeries *series;//序列
    QSurfaceDataProxy *proxy;//代理
    void iniGraph3D();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnBarColor_clicked();

    void on_btnGrad1_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
