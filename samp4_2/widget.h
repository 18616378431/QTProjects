#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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
    void on_btnAppend_clicked();

    void on_btnPrepend_clicked();

    void on_btnToupper_clicked();

    void on_btnTolower_clicked();

    void on_btnCount_clicked();

    void on_btnSize_clicked();

    void on_btnTrimmed_clicked();

    void on_btnSimplified_clicked();

    void on_btnIndexof_clicked();

    void on_btnLastindexOf_clicked();

    void on_btnIsnull_clicked();

    void on_btnIsempty_clicked();

    void on_btnContains_clicked();

    void on_btnEndswith_clicked();

    void on_btnStartswith_clicked();

    void on_btnLeft_clicked();

    void on_btnRight_clicked();

    void on_btnSection_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
