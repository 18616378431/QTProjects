#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDataWidgetMapper>

#include "qwcomboboxdelegate.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QSqlDatabase DB;//数据库连接
    QSqlTableModel *tabModel;//数据模型
    QItemSelectionModel *theSelection;//选择模型
    QDataWidgetMapper *dataMapper;//数据映射
    QWComboBoxDelegate delegateSex;//自定义数据代理,sex
    QWComboBoxDelegate delegateDepart;//自定义数据代理,depart
    void openTable();//打开数据表
    void getFieldNames();//获取字段名称,填充排序字段的comboBox
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void on_currentChanged(const QModelIndex &current,const QModelIndex &previous);
    void on_currentRowChanged(const QModelIndex &current,const QModelIndex &previous);
    void on_actOpenDB_triggered();
    void on_actRecAppend_triggered();
    void on_actRecInsert_triggered();
    void on_actRecDelete_triggered();
    void on_actSubmit_triggered();
    void on_actRevert_triggered();
};

#endif // MAINWINDOW_H
