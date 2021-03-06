#ifndef QWBATTERY_H
#define QWBATTERY_H

#include <QtUiPlugin/QDesignerExportWidget>
#include <QWidget>
#include <QPainter>
#include <QSize>


class QDESIGNER_WIDGET_EXPORT QwBattery : public QWidget
{
    Q_OBJECT
    //自定义属性
    Q_PROPERTY(int powerLevel READ powerLevel WRITE setPowerLevel
               NOTIFY powerLevelChanged DESIGNABLE true)
private:
    QColor mColorBack = Qt::white;//背景颜色
    QColor mColorBorder = Qt::black;//电池边框颜色
    QColor mColorPower = Qt::green;//电池柱颜色
    QColor mColorWarning = Qt::red;//电量短缺时的颜色
    int mPowerLevel = 60;//电量0-100
    int mWarnLevel = 20;//电量低警示阀值
protected:
    void paintEvent(QPaintEvent *event);
public:
    QwBattery(QWidget *parent = 0);
    void setPowerLevel(int pow);//设置当前电量
    int powerLevel();
    void setWarnLevel(int warn);//设置电量低阀值
    int warnLevel();
    QSize sizeHint() const;//缺省大小
signals:
    void powerLevelChanged(int );
public slots:
};

#endif
