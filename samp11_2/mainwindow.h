#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDataWidgetMapper>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QSqlDatabase DB;//数据库
    QSqlQueryModel *qryModel;//数据模型
    QItemSelectionModel *theSelection;//选择模型
    QDataWidgetMapper *dataMapper;//数据界面映射
    void openTable();//打开数据表
    void refreshTableView();//移动记录时刷新tableview当前行
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_currentRowChanged(const QModelIndex &current,const QModelIndex &previous);
    void on_actOpenDB_triggered();
    void on_actFirstRec_triggered();
    void on_actPrevRec_triggered();
    void on_actLastRec_triggered();
    void on_actNextRec_triggered();
};

#endif // MAINWINDOW_H
