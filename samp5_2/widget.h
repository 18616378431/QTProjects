#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStringListModel>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_btnListAppend_clicked();

    void on_btnListInsert_clicked();

    void on_btnListDelete_clicked();

    void on_btnListClear_clicked();

    void on_btnTextImport_clicked();

    void on_listView_clicked(const QModelIndex &index);

    void on_btnResumeList_clicked();

    void on_btnClearEdit_clicked();

private:
    Ui::Widget *ui;
    //QStringListModel
    QStringListModel *theModel;

    void iniList();
};

#endif // WIDGET_H
