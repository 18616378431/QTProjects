#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegExp>
#include <QStyle>
#include <QStyleFactory>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actQuit_triggered();

    void on_comboSysStyle_currentIndexChanged(const QString &arg1);

    void on_btnNormal_clicked();

    void on_btnStyleSheet_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
