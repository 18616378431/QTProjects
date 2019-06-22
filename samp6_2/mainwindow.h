#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "qwdialogheaders.h"
#include "qwdialoglocate.h"
#include "qwdialogsize.h"

namespace Ui {
class MainWindow;
}

const int FixedColumnCount = 6;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setDlgLocateNull();

    void closeEvent(QCloseEvent *event);

private slots:

    void on_actTab_SetSize_triggered();

    void on_actTab_SetHeader_triggered();

    void on_actTab_Locate_triggered();

    void on_tableView_clicked(const QModelIndex &index);

public slots:
    void setACellText(int row,int col,QString &text);

    void setActLocateEnable(bool enabled);

signals:

    void cellIndexChanged(int rowNo,int colNo);//当前单元格发生变化

private:
    Ui::MainWindow *ui;
    QStandardItemModel *theModel;
    QItemSelectionModel *theSelection;
    QWDialogHeaders *dlgSetHeaders = NULL;
//    QWDialogLocate *dlgLocate = NULL;
};

#endif // MAINWINDOW_H
