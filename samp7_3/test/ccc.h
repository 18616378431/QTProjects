#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QFileSystemWatcher>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;

private:
    QFileSystemWatcher fileWatcher;

    void on_pushButton_30_clicked();//pushbutton enter
    void showBtnInfo(QObject *btn);//show info
    void on_pushButton_51_clicked();//file exists
    void on_pushButton_50_clicked();//rename file
    void on_pushButton_11_clicked();//list dir's dirs
    void on_pushButton_17_clicked();//list dir's files
    void on_pushButton_46_clicked();//addPath()
    void on_pushButton_47_clicked();//removePath()

private slots:
    void on_directoryChanged(const QString path);
    void on_fileChanged(const QString path);
    void on_openFile_clicked();
};

#endif // DIALOG_H
