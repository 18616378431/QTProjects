#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "qmybattery.h"

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
    void on_slider_valueChanged(int value);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
