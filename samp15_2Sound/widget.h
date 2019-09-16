#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSoundEffect>
#include <QSound>
#include <QDebug>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
private:
    QSoundEffect *player;
    QString appPath;
    void defense(QString weapon);
    void attack(QString weapon);
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_btnAK47_clicked();

    void on_btnFire_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
