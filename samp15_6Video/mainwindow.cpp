#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);//创建视频播放器
    player->setNotifyInterval(2000);//信息更新周期2000ms

    QGraphicsScene *scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    videoItem = new QGraphicsVideoItem;
    videoItem->setSize(QSizeF(360,240));
    videoItem->setFlags(QGraphicsItem::ItemIsMovable |
                        QGraphicsItem::ItemIsFocusable |
                        QGraphicsItem::ItemIsSelectable);
    scene->addItem(videoItem);
    player->setVideoOutput(videoItem);//设置视频显示图形组件

    connect(player,SIGNAL(stateChanged(QMediaPlayer::State)),
            this,SLOT(onStateChanged(QMediaPlayer::State)));
    connect(player,SIGNAL(durationChanged(qint64)),this,SLOT(onDurationChanged(qint64)));
    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(onPositionChanged(qint64)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onStateChanged(QMediaPlayer::State state)
{
    //播放器状态变化
    ui->btnPlay->setEnabled(!(state == QMediaPlayer::PlayingState));
    ui->btnPause->setEnabled(state == QMediaPlayer::PlayingState);
    ui->btnStop->setEnabled(state == QMediaPlayer::PlayingState);
}

void MainWindow::onDurationChanged(qint64 duration)
{
    //文件时长变化
    ui->sliderPosition->setMaximum(duration);
    int secs = duration / 1000;//秒
    int min = secs / 60;//分钟
    secs = secs % 60;//余秒
    durationTime = QString::asprintf("%d:%d",min,secs);
    ui->LabRatio->setText(positionTime + "/" + durationTime);
}

void MainWindow::onPositionChanged(qint64 position)
{
    //文件播放位置发生变化
    if(ui->sliderPosition->isSliderDown())
    {
        return ;//如果正在拖动进度条
    }

    ui->sliderPosition->setSliderPosition(position);
    int secs = position / 1000;
    int min = secs / 60;
    secs = secs % 60;
    positionTime = QString::asprintf("%d:%d",min,secs);
    ui->LabRatio->setText(positionTime + "/" + durationTime);
}

void MainWindow::on_btnAdd_clicked()
{
    //打开文件
    QString curPath = QDir::homePath();//系统当前目录
    QString dlgTitle = "选择视频文件";
    QString filter = "wmv文件(*.wmv);;mp4文件(*.mp4);;所有文件(*.*)";
    QString aFile = QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);

    if(aFile.isEmpty())
    {
        return ;
    }

    QFileInfo fileInfo(aFile);
    ui->LabCurMedia->setText(fileInfo.fileName());
    player->setMedia(QUrl::fromLocalFile(aFile));//设置播放文件
    player->play();
}

void MainWindow::on_btnPlay_clicked()
{
    //播放
    player->play();
}

void MainWindow::on_btnPause_clicked()
{
    //暂停
    player->pause();
}

void MainWindow::on_btnStop_clicked()
{
    //停止
    player->stop();
}

void MainWindow::on_sliderVolumn_valueChanged(int value)
{
    //调节音量
    player->setVolume(value);
}

void MainWindow::on_btnSound_clicked()
{
    //静音按钮
    bool mute = player->isMuted();
    player->setMuted(!mute);

    if(mute)
    {
        ui->btnSound->setText("静音");
    }
    else
    {
        ui->btnSound->setText("播放");
    }
}

void MainWindow::on_sliderPosition_valueChanged(int value)
{
    //播放位置发生变化
    player->setPosition(value);
}

void MainWindow::on_btnFullScreen_clicked()
{
    //全屏按钮
//    ui->videoWidget->setFullScreen(true);
}
