#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    playList = new QMediaPlaylist(this);
    playList->setPlaybackMode(QMediaPlaylist::Loop);//循环模式
    player->setPlaylist(playList);

    connect(player,SIGNAL(stateChanged(QMediaPlayer::State)),this,SLOT(onStateChanged(QMediaPlayer::State)));
    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(onPositionChanged(qint64)));
    connect(player,SIGNAL(durationChanged(qint64)),this,SLOT(onDurationChanged(qint64)));
    connect(playList,SIGNAL(currentIndexChanged(int)),this,SLOT(onPlaylistChanged(int)));
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

void MainWindow::onPlaylistChanged(int position)
{
    //播放器列表变化,更新当前播放文件名显示
    ui->listWidget->setCurrentRow(position);
    QListWidgetItem *item = ui->listWidget->currentItem();

    if(item)
    {
        ui->LabCurMedia->setText(item->text());
    }
}

void MainWindow::onDurationChanged(qint64 duration)
{
    //文件时长变化,更新进度显示
    ui->sliderPosition->setMaximum(duration);
    int secs = duration / 1000;//秒
    int mins = secs / 60;//分钟
    secs = secs % 60;//余秒
    durationTime = QString::asprintf("%d:%d",mins,secs);
    ui->LabRatio->setText(durationTime);
}

void MainWindow::onPositionChanged(qint64 position)
{
    //文件播放位置变化,更新进度显示
    if(ui->sliderPosition->isSliderDown())//手动调整,不处理
    {
        return ;
    }

    ui->sliderPosition->setSliderPosition(position);
    int secs = position / 1000;
    int mins = secs / 60;
    secs = secs % 60;
    positionTime = QString::asprintf("%d:%d",mins,secs);
    ui->LabRatio->setText(positionTime);
}

void MainWindow::on_btnAdd_clicked()
{
    //添加文件
    QString curPath = QDir::homePath();
    QString dlgTitle = "选择音频文件";
    QString filter = "音频文件(*.mp3 *.wav *.wma);;mp3文件(*.mp3);;wav文件(*.wav);;wma文件(*.wma);;所有文件(*.*)";
    QStringList fileList = QFileDialog::getOpenFileNames(this,dlgTitle,curPath,filter);

    if(fileList.count() < 1)
    {
        return ;
    }

    for(int i = 0;i < fileList.count();i++)
    {
        QString aFile = fileList.at(i);
        playList->addMedia(QUrl::fromLocalFile(aFile));//添加文件
        QFileInfo fileInfo(aFile);
        ui->listWidget->addItem(fileInfo.fileName());//添加到界面文件列表
    }

    if(player->state() == !QMediaPlayer::PlayingState)
    {
        playList->setCurrentIndex(0);
        player->play();
    }
}

void MainWindow::on_btnRemove_clicked()
{
    //移除文件
    int pos = ui->listWidget->currentRow();
    QListWidgetItem *item = ui->listWidget->takeItem(pos);
    delete item;//从listwidget里删除
    playList->removeMedia(pos);//从playlist里删除
}

void MainWindow::on_btnClear_clicked()
{
    //清空列表
    playList->clear();
    ui->listWidget->clear();
    player->stop();
}

void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    //双击切换播放文件
    int rowNo = index.row();
    playList->setCurrentIndex(rowNo);
    player->play();
}

void MainWindow::on_btnPlay_clicked()
{
    //播放按钮
    if(playList->currentIndex() < 0)
    {
        playList->setCurrentIndex(0);
    }
    player->play();
}

void MainWindow::on_btnPause_clicked()
{
    //暂停
    player->pause();
}

void MainWindow::on_btnStop_clicked()
{
    //停止播放
    player->stop();
}

void MainWindow::on_btnSound_clicked()
{
    //静音
    bool mute = player->isMuted();
    player->setMuted(!mute);

    if(mute)
    {
        ui->btnSound->setText("静音");
//        ui->btnSound->setIcon(QIcon(":/images/volumn | mute.bmp"));
    }
    else
    {
        ui->btnSound->setText("播放");
    }
}

void MainWindow::on_sliderPosition_valueChanged(int value)
{
    //文件进度调控
    player->setPosition(value);
}


void MainWindow::on_sliderVolumn_valueChanged(int value)
{
    //调整音量
    player->setVolume(value);
}

void MainWindow::on_btnLast_clicked()
{
    //上一首
    playList->previous();
}

void MainWindow::on_btnNext_clicked()
{
    //下一首
    playList->next();
}
