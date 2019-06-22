#ifndef QWMAINWINDOW_H
#define QWMAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QFileDialog>
#include <QMdiSubWindow>

namespace Ui {
class QWMainWindow;
}

class QWMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QWMainWindow(QWidget *parent = 0);
    ~QWMainWindow();

private slots:
    void on_actDoc_New_triggered();

    void on_actDoc_Open_triggered();

    void on_actCascade_triggered();

    void on_actTile_triggered();

    void on_actCloseAll_triggered();

    void on_actViewMode_triggered(bool checked);

    void on_mdiArea_subWindowActivated(QMdiSubWindow *arg1);

    void on_actCut_triggered();

    void on_actFont_triggered();

    void on_actCopy_triggered();

    void on_actPaste_triggered();

private:
    Ui::QWMainWindow *ui;
};

#endif // QWMAINWINDOW_H
