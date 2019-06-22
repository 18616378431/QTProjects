#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QTime>

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
    void on_btnReadDateTime_clicked();

    void on_btnSetDateTime_clicked();

    void on_btnSetDate_clicked();

    void on_btnSetTime_clicked();

    void on_calendarWidget_selectionChanged();

    void on_timer_timeout();//定时溢出处理函数

    void on_btnSetInterval_clicked();

    void on_btnTimerBegin_clicked();

    void on_btnTimerStop_clicked();

private:
    Ui::Widget *ui;
    QTimer *fTimer;//定时器
    QTime fTimeCounter;//计时器
};

#endif // WIDGET_H
