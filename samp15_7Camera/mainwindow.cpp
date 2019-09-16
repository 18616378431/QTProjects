#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LabCameraState = new QLabel("摄像头State:");
    LabCameraState->setMinimumWidth(150);
    ui->statusBar->addWidget(LabCameraState);

    LabCameraMode = new QLabel("抓取模式:");
    LabCameraMode->setMinimumWidth(150);
    ui->statusBar->addWidget(LabCameraMode);

    LabInfo = new QLabel("");
    ui->statusBar->addPermanentWidget(LabInfo);

    //获取可用设备列表
    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();

    if(cameras.size() > 0)
    {
        iniCamera();//初始化摄像头
        iniImageCapture();//初始化静态抓图
        iniVideoRecorder();//初始化视频录制
        curCamera->start();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actQuit_triggered()
{
    //退出
    this->close();
}

void MainWindow::iniCamera()
{
    //创建Camera对象
    QCameraInfo curCameraInfo = QCameraInfo::defaultCamera();//获取缺省摄像头
    ui->comboCamera->addItem(curCameraInfo.description());
    ui->comboCamera->setCurrentIndex(0);

    curCamera = new QCamera(curCameraInfo,this);//创建摄像头对象
    QCameraViewfinderSettings viewFinderSettings;
    viewFinderSettings.setResolution(640,480);
    viewFinderSettings.setMinimumFrameRate(15.0);
    viewFinderSettings.setMaximumFrameRate(30.0);
    curCamera->setViewfinderSettings(viewFinderSettings);
    curCamera->setViewfinder(ui->viewFinder);//设置预览框
    curCamera->setCaptureMode(QCamera::CaptureViewfinder);

    //判断摄像头是否支持抓图、录像
    ui->checkStillImage->setChecked(curCamera->isCaptureModeSupported(QCamera::CaptureStillImage));
    ui->checkVideo->setChecked(curCamera->isCaptureModeSupported(QCamera::CaptureVideo));

    connect(curCamera,SIGNAL(stateChanged(QCamera::State)),
            this,SLOT(on_cameraStateChanged(QCamera::State)));
    //windows平台不支持captureModeChanged()信号
    connect(curCamera,SIGNAL(captureModeChanged(QCamera::CaptureModes)),
            this,SLOT(on_cameraCaptureModelChanged(QCamera::CaptureModes)));
}

void MainWindow::on_cameraStateChanged(QCamera::State state)
{
    //摄像头状态变化
    switch(state)
    {
        case QCamera::UnloadedState:
            LabCameraState->setText("摄像头 state:UnloadedState");
        break;
        case QCamera::LoadedState:
            LabCameraState->setText("摄像头 state:LoadedState");
        break;
        case QCamera::ActiveState:
            LabCameraState->setText("摄像头 state:ActiveState");
        break;
    }

    ui->actStartCamera->setEnabled(state != QCamera::ActiveState);
    ui->actStopCamera->setEnabled(state == QCamera::ActiveState);
}

void MainWindow::on_cameraCaptureModelChanged(QCamera::CaptureModes mode)
{
    if(mode == QCamera::CaptureStillImage)
    {
        LabCameraState->setText("抓取模式:StillImage");
    }
    else if(mode == QCamera::CaptureVideo)
    {
        LabCameraState->setText("抓取模式:Video");
    }
    else
    {
        LabCameraState->setText("抓取模式:viewFinder");
    }
}

void MainWindow::on_actStartCamera_triggered()
{
    //开启摄像头
    curCamera->start();
}

void MainWindow::on_actStopCamera_triggered()
{
    //关闭摄像头
    curCamera->stop();
}

void MainWindow::iniImageCapture()
{
    //创建QCameraImageCapture对象
    imageCapture = new QCameraImageCapture(curCamera,this);
    imageCapture->setBufferFormat(QVideoFrame::Format_Jpeg);//缓冲区格式
    imageCapture->setCaptureDestination(
                QCameraImageCapture::CaptureToFile);//保存目标

    connect(imageCapture,SIGNAL(readyForCaptureChanged(bool)),
            this,SLOT(on_imageReadyForCapture(bool)));
    connect(imageCapture,SIGNAL(imageCaptured(int,QImage)),
            this,SLOT(on_imageCaptured(int,QImage)));
    connect(imageCapture,SIGNAL(imageSaved(int,QString)),
            this,SLOT(on_imageSaved(int,QString)));
}

void MainWindow::on_imageReadyForCapture(bool ready)
{
    //可以抓图了
    ui->actCapture->setEnabled(ready);
}

void MainWindow::on_imageCaptured(int id, const QImage &preview)
{
    //抓取图片后显示
    Q_UNUSED(id)
    QImage scaledImaged = preview.scaled(
                ui->LabCapturedImage->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation);
    ui->LabCapturedImage->setPixmap(QPixmap::fromImage(scaledImaged));
}

void MainWindow::on_imageSaved(int id, const QString &fileName)
{
    //文件保存后显示保存的文件名
    Q_UNUSED(id)
    LabInfo->setText("图片保存为:" + fileName);
}

void MainWindow::on_actCapture_triggered()
{
    //抓图按钮
    if(curCamera->captureMode() != QCamera::CaptureStillImage)
    {
        curCamera->setCaptureMode(QCamera::CaptureStillImage);
    }
    imageCapture->capture();
}

void MainWindow::iniVideoRecorder()
{
    //创建QMediaRecorder对象
    mediaRecorder = new QMediaRecorder(curCamera,this);
    ui->chkMute->setChecked(mediaRecorder->isMuted());

    connect(mediaRecorder,SIGNAL(stateChanged(QMediaRecorder::State)),
            this,SLOT(on_videoStateChanged(QMediaRecorder::State)));
    connect(mediaRecorder,SIGNAL(durationChanged(qint64)),
            this,SLOT(on_videoDurationChanged(qint64)));
}

void MainWindow::on_videoStateChanged(QMediaRecorder::State state)
{
    //录像状态变化
    ui->actVideoRecord->setEnabled(state != QMediaRecorder::RecordingState);
    ui->actVideoStop->setEnabled(state == QMediaRecorder::RecordingState);
}

void MainWindow::on_videoDurationChanged(qint64 duration)
{
    ui->LabDuration->setText(QString("录制时间:%1 秒").arg(duration / 1000));
}


void MainWindow::on_actVideoRecord_triggered()
{
    //开始录像
    if(!mediaRecorder->isAvailable())
    {
        QMessageBox::critical(this,"错误","不支持视频录制!\nmediaRecorder->isAvailable() == false");
        return ;
    }

    if(curCamera->captureMode() != QCamera::CaptureVideo)
    {
        curCamera->setCaptureMode(QCamera::CaptureVideo);
    }

    QString selectedFile = ui->editOutputFile->text().trimmed();

    if(selectedFile.isEmpty())
    {
        QMessageBox::critical(this,"错误","请先设置录像输出文件");
        return ;
    }

    if(QFile::exists(selectedFile))
    {
        if(!QFile::remove(selectedFile))
        {
            QMessageBox::critical(this,"错误","所设置录像输出文件被占用,无法删除");
            return ;
        }
    }

    mediaRecorder->setOutputLocation(QUrl::fromLocalFile(selectedFile));
    mediaRecorder->record();
}

void MainWindow::on_actVideoStop_triggered()
{
    //停止录像
    mediaRecorder->stop();
}
