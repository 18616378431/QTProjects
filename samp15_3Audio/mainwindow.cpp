#include "mainwindow.h"
#include "ui_mainwindow.h"

//Users/wangjiankang/Documents/QTProjects/samp15_3Audio/test.wav

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    recorder = new QAudioRecorder(this);
    connect(recorder,SIGNAL(stateChanged(QMediaRecorder::State)),this,SLOT(onStateChanged(QMediaRecorder::State)));
    connect(recorder,SIGNAL(durationChanged(qint64)),this,SLOT(onDurationChanged(qint64)));

    probe = new QAudioProbe(this);//探测器
    connect(probe,SIGNAL(audioBufferProbed(QAudioBuffer)),this,SLOT(processBuffer(QAudioBuffer)));
    probe->setSource(recorder);

    if(recorder->defaultAudioInput().isEmpty())
    {
        return ;//无音频输入设备
    }

    //音频输入设备列表
    foreach(const QString &device,recorder->audioInputs())
    {
        ui->comboDevices->addItem(device);
    }

    //支持的音频编码
    foreach(const QString &codecName,recorder->supportedAudioCodecs())
    {
        ui->comboCodec->addItem(codecName);
    }

    //采样率
    foreach(int sampleRate,recorder->supportedAudioSampleRates())
    {
        ui->comboSampleRate->addItem(QString::number(sampleRate));
    }

    //channels
    ui->comboChannels->addItem("1");
    ui->comboChannels->addItem("2");
    ui->comboChannels->addItem("4");

    //quality
    ui->sliderQuality->setRange(0,int(QMultimedia::VeryHighQuality));
    ui->sliderQuality->setValue(int(QMultimedia::NormalQuality));

    //bitrates
    ui->comboBitrate->addItem("32000");
    ui->comboBitrate->addItem("64000");
    ui->comboBitrate->addItem("96000");
    ui->comboBitrate->addItem("128000");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actQuit_triggered()
{
    this->close();
}

void MainWindow::onStateChanged(QMediaRecorder::State state)
{
    //录音状态发生变化
    ui->actRecord->setEnabled(state != QMediaRecorder::RecordingState);
    ui->actPause->setEnabled(state == QMediaRecorder::RecordingState);
    ui->actStop->setEnabled(state == QMediaRecorder::RecordingState);

    ui->btnGetFile->setEnabled(state == QMediaRecorder::RecordingState);
    ui->editOutputFile->setEnabled(state == QMediaRecorder::RecordingState);
}

void MainWindow::onDurationChanged(qint64 duration)
{
    //录音时长发生变化
    ui->LabPassTime->setText(QString("已录制%1秒").arg(duration / 1000));
}

void MainWindow::on_actRecord_triggered()
{
    //录音
    if(recorder->state() == QMediaRecorder::StoppedState)//已停止,重新设置
    {
        QString selectedFile = ui->editOutputFile->text().trimmed();

        if(selectedFile.isEmpty())
        {
            QMessageBox::critical(this,"错误","请先设置录音输出文件");
            return ;
        }

        if(QFile::exists(selectedFile))
        {
            if(!QFile::remove(selectedFile))
            {
                QMessageBox::critical(this,"错误","所设置录音输出文件无法删除");
                return ;
            }
        }

        recorder->setOutputLocation(QUrl::fromLocalFile(selectedFile));
        recorder->setAudioInput(ui->comboDevices->currentText());//输入设备

        QAudioEncoderSettings settings;
        settings.setCodec(ui->comboCodec->currentText());//编码
        settings.setSampleRate(ui->comboSampleRate->currentText().toInt());
        settings.setBitRate(ui->comboBitrate->currentText().toInt());//比特率
        settings.setChannelCount(ui->comboChannels->currentText().toInt());
        settings.setQuality(QMultimedia::EncodingQuality(ui->sliderQuality->value()));

        if(ui->radioQuality->isChecked())//固定品质
        {
            settings.setEncodingMode(QMultimedia::ConstantQualityEncoding);
        }
        else
        {
            settings.setEncodingMode(QMultimedia::ConstantBitRateEncoding);
        }

        recorder->setAudioSettings(settings);//音频设置
    }

    recorder->record();
}

void MainWindow::on_actPause_triggered()
{
    //暂停
    recorder->pause();
}

void MainWindow::on_actStop_triggered()
{
    //停止
    recorder->stop();
}

void MainWindow::processBuffer(const QAudioBuffer &buffer)
{
    //缓冲区探测
    ui->spin_byteCount->setValue(buffer.byteCount());//缓冲区字节数
    ui->spin_duration->setValue(buffer.duration() / 1000);//缓冲区时长
    ui->spin_frameCount->setValue(buffer.frameCount());//缓冲区帧数
    ui->spin_sampleCount->setValue(buffer.sampleCount());//缓冲区采样数

    QAudioFormat audioFormat = buffer.format();//缓冲区格式
    ui->spin_channelCount->setValue(audioFormat.channelCount());//通道数
    ui->spin_sampleSize->setValue(audioFormat.sampleSize());//采样大小
    ui->spin_sampleRate->setValue(audioFormat.sampleRate());//采样率
    ui->spin_bytesPerFrame->setValue(audioFormat.bytesPerFrame());//每帧大小
    //大小端
    if(audioFormat.byteOrder() == QAudioFormat::LittleEndian)
    {
        ui->edit_byteOrder->setText("LittleEndian");
    }
    else
    {
        ui->edit_byteOrder->setText("BigEndian");
    }

    ui->edit_codec->setText(audioFormat.codec());//编码格式

    if(audioFormat.sampleType() == QAudioFormat::SignedInt)
    {
        ui->edit_sampleType->setText("SignedInt");
    }
    else if(audioFormat.sampleType() == QAudioFormat::UnSignedInt)
    {
        ui->edit_sampleType->setText("UnSignedInt");
    }
    else if(audioFormat.sampleType() == QAudioFormat::Float)
    {
        ui->edit_sampleType->setText("Float");
    }
    else
    {
        ui->edit_sampleType->setText("Unknown");
    }
}
