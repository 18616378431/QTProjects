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
    void on_redSlider_valueChanged(int value);

    void on_dial_valueChanged(int value);

    void on_rBtnDec_clicked();

    void on_rBtnBin_clicked();

    void on_rBtnOct_clicked();

    void on_rBtnHex_clicked();

    void on_hSlider_valueChanged(int value);

    void on_hScrollBar_valueChanged(int value);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
