#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>

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
    void on_actOpen_IODevice_triggered();

    void on_actSave_IODevice_triggered();

    void on_actOpen_Stream_triggered();

    void on_actSave_Stream_triggered();

private:
    Ui::MainWindow *ui;
    bool openTextByIODevice(const QString &aFileName);
    bool saveTextByIODevice(const QString &aFileName);

    bool openTextByStream(const QString &aFileName);
    bool saveTextByStream(const QString &aFileName);

    QTextEdit *textEditIODevice;
    QTextEdit *textEditStream;
};

#endif // MAINWINDOW_H
