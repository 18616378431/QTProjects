#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCamera>
#include <QCameraImageCapture>
#include <QMediaRecorder>
#include <QLabel>
#include <QCameraInfo>
#include <QMessageBox>
#include <QFile>
#include <QUrl>

#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QCamera *curCamera = Q_NULLPTR;
    QCameraImageCapture *imageCapture;//抓图
    QMediaRecorder *mediaRecorder;//录像
    QLabel *LabCameraState;
    QLabel *LabInfo;
    QLabel *LabCameraMode;
    void iniCamera();//初始化
    void iniImageCapture();//初始化静态抓图
    void iniVideoRecorder();//初始化视频录制
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //自定义槽函数
    void on_cameraStateChanged(QCamera::State state);
    void on_cameraCaptureModelChanged(QCamera::CaptureModes mode);
    //QCameraImageCapture槽函数
    void on_imageReadyForCapture(bool ready);
    void on_imageCaptured(int id,const QImage &preview);
    void on_imageSaved(int id,const QString &fileName);
    //QMediaRecorder槽函数
    void on_videoStateChanged(QMediaRecorder::State state);
    void on_videoDurationChanged(qint64 duration);

    void on_actQuit_triggered();

    void on_actStartCamera_triggered();

    void on_actStopCamera_triggered();

    void on_actCapture_triggered();

    void on_actVideoRecord_triggered();

    void on_actVideoStop_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
