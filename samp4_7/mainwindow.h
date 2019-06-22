#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>

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
    void on_actListIni_triggered();

    void on_actListInsert_triggered();

    void on_actListDelete_triggered();

    void on_actListClear_triggered();


    void on_btnSelAll_clicked();

    void on_btnSelNone_clicked();

    void on_btnSelInvs_clicked();

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_actListAppend_triggered();

//    void on_chkBoxListEditable_clicked(bool checked);

//    void on_actSelALL_triggered();

//    void on_actSelNone_triggered();

//    void on_actSelInvs_triggered();

    void on_actSelAll_triggered();

    void on_actSelNone_triggered();

    void on_actSelInvs_triggered();

    void on_listWidget_customContextMenuRequested(const QPoint &pos);

//    void on_listWidget_clicked(const QModelIndex &index);


    void on_toolBox_currentChanged(int index);

private:
    Ui::MainWindow *ui;
    void setActionsForButton();
//    void createSelectionPopmenu();
    void createSelectionPopmenu();
};

#endif // MAINWINDOW_H
