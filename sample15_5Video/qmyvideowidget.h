#ifndef QMYVIDEOWIDGET_H
#define QMYVIDEOWIDGET_H

#include <QWidget>
#include <QVideoWidget>
#include <QMediaPlayer>
#include <QKeyEvent>

class QmyVideoWidget : public QVideoWidget
{
    Q_OBJECT
private:
    QMediaPlayer *thePlayer;
protected:
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
public:
    explicit QmyVideoWidget(QWidget *parent = nullptr);
    void setMediaPlayer(QMediaPlayer *player);
signals:

public slots:
};

#endif // QMYVIDEOWIDGET_H
