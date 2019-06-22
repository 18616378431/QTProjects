#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

#include "qwintspindelegate.h"
#include "qwfloatspindelegate.h"
#include "qwcomboboxdelegate.h"

#include <QStandardItemModel>
#include <QItemSelectionModel>

namespace Ui {
class MainWindow;
}

#define FixedColumnCount 6

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_actSaveStm_triggered();

    void on_actOpenStm_triggered();

    void on_actReset_triggered();

    void on_actSaveBin_triggered();

    void on_actiOpenBin_triggered();

    void on_actAppend_triggered();

    void on_actInsert_triggered();

    void on_actDelete_triggered();

public slots:
    void on_currentChanged(const QModelIndex &current,const QModelIndex &previous);

private:
    Ui::MainWindow *ui;
private:
    QLabel *LabCellPos;//当前单元格行列号
    QLabel *LabCellText;//当前单元格内容
    QWIntSpinDelegate intSpinDelegate;//整形数,代理组件
    QWFloatSpinDelegate floatSpinDelegate;//浮点数,代理组件
    QWComboBoxDelegate comboBoxDelegate;//列表选择,代理组件
    QStandardItemModel *theModel;//数据模型
    QItemSelectionModel *theSelection;//选择模型

    void resetTable(int aRowCount);//表格复位,设定行数
    bool saveDataAsStream(QString &aFileName);//保存为stm文件
    bool openDataAsStream(QString &aFileName);//打开stm文件
    bool saveBinaryFile(QString &aFileName);//保存dat文件
    bool openBinaryFile(QString &aFileName);//打开dat文件
};

#endif // MAINWINDOW_H
