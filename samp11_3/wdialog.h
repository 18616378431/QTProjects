#ifndef WDIALOG_H
#define WDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QFileDialog>

namespace Ui {
class WDialog;
}

class WDialog : public QDialog
{
    Q_OBJECT
private:
    QSqlRecord mRecord;//保存一条记录的数据
public:
    explicit WDialog(QWidget *parent = 0);
    ~WDialog();
    void setUpdateRecord(QSqlRecord &recData);//更新记录
    void setInsertRecord(QSqlRecord &recData);//插入记录
    QSqlRecord getRecordData();//获取录入的数据
private slots:
    void on_btnClearPhoto_clicked();

    void on_btnSetPhoto_clicked();

private:
    Ui::WDialog *ui;
};

#endif // WDIALOG_H
