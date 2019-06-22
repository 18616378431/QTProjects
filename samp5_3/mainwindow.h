#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "qwintspindelegate.h"
#include "qwfloatdelegate.h"
#include "qwcomboboxdelegate.h"

#define FixedColumnCount 6//文件固定6列

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private:
    QLabel *LabCurFile;//当前文件
    QLabel *LabCellPos;//当前单元格行列号
    QLabel *LabCellText;//当前单元格内容
    QStandardItemModel *theModel;//数据模型
    QItemSelectionModel *theSelection;//选择模型

    //delegate
    QWIntSpinDelegate intSpinDelegate;
    //float,combox
    QWFloatDelegate floatSpinDelegate;
    QWComboBoxDelegate comboboxDelegate;

    void iniModelFromStringList(QStringList &);//从StringLsit初始化数据模型
private slots:
    //当前选择单元格发生变化
    void on_currentChanged(const QModelIndex &current,const QModelIndex &previous);
    void on_actOpen_triggered();
    void on_actAppend_triggered();
    void on_actInsert_triggered();
    void on_actDelete_triggered();
    void on_actAlignLeft_triggered();
    void on_actAlignCenter_triggered();
    void on_actAlignRight_triggered();
    void on_actFontBold_triggered(bool checked);
    void on_actSave_triggered();
    void on_actModelData_triggered();
};

#endif // MAINWINDOW_H
