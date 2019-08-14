#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QPainter>
#include <QLibrary>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QPen mPen;
protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_Pen_triggered();

    void on_actExplicitLib_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
