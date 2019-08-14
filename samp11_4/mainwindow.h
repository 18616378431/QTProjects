#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QSqlDatabase DB;//数据库连接
    QSqlRelationalTableModel *tabModel;//数据模型
    QItemSelectionModel *theSelection;//选择模型
    void openTable();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void on_currentChanged(const QModelIndex &current,const QModelIndex &previous);
    void on_actFieldList_triggered();
    void on_actOpen_triggered();
    void on_actAdd_triggered();
    void on_actInsert_triggered();
    void on_actDelete_triggered();
    void on_actSave_triggered();
    void on_actCancel_triggered();
};

#endif // MAINWINDOW_H
