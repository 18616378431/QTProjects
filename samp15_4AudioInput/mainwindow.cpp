#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->splitter_2);

    //创建显示图表
    QChart *chart = new QChart;
    chart->setTitle("音频输入原始信号");
    ui->chartView->setChart(chart);
    lineSeries = new QLineSeries();//序列
    chart->addSeries(lineSeries);

    QValueAxis *axisX = new QValueAxis;//X轴
    axisX->setRange(0,displayPointsCount);//chart显示4000个采样点数据
    axisX->setLabelFormat("%g");
    axisX->setTitleText("Samples");

    QValueAxis *axisY = new QValueAxis;//Y轴
    axisY->setRange(0,256);//UnSigned int 采样数据 0-255
    axisY->setTitleText("Audio level");

    chart->setAxisX(axisX,lineSeries);
    chart->setAxisY(axisY,lineSeries);
    chart->legend()->hide();

    ui->comboDevices->clear();
    deviceList = QAudioDeviceInfo::availableDevices(QAudio::AudioInput);

    for(int i = 0;i < deviceList.count();i++)
    {
        QAudioDeviceInfo device = deviceList.at(i);
        ui->comboDevices->addItem(device.deviceName());
    }

    if(deviceList.size() > 0)
    {
        ui->comboDevices->setCurrentIndex(0);
        curDevice = deviceList.at(0);
    }
    else
    {
        ui->actStart->setEnabled(false);
        ui->actDeviceTest->setEnabled(false);
        ui->groupBoxDevice->setTitle("支持的音频输入设置(无设备)");
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

void MainWindow::on_comboDevices_currentIndexChanged(int index)
{
    //选择音频输入设备
    curDevice = deviceList.at(index);//当前音频设备

    ui->comboCodec->clear();//支持的音频编码
    QStringList codecs = curDevice.supportedCodecs();
    for(int i = 0;i < codecs.size();i++)
    {
        ui->comboCodec->addItem(codecs.at(i));
    }

    ui->comboSampleRate->clear();//支持的采样率
    QList<int> sampleRate = curDevice.supportedSampleRates();
    for(int i = 0;i < sampleRate.size();i++)
    {
        ui->comboSampleRate->addItem(QString("%1").arg(sampleRate.at(i)));
    }

    ui->comboChannels->clear();//支持的通道数
    QList<int> Channels = curDevice.supportedChannelCounts();
    for(int i = 0;i < Channels.size();i++)
    {
        ui->comboChannels->addItem(QString("%1").arg(Channels.at(i)));
    }

    ui->comboSampleTypes->clear();//支持的采样点类型
    QList<QAudioFormat::SampleType> sampleTypes = curDevice.supportedSampleTypes();
    for(int i = 0;i < sampleTypes.size();i++)
    {
        ui->comboSampleTypes->addItem(SampleTypeString(sampleTypes.at(i)),QVariant(sampleTypes.at(i)));
    }

    ui->comboSampleSize->clear();//采样点大小
    QList<int> sampleSizes = curDevice.supportedSampleSizes();
    for(int i = 0;i < sampleSizes.size();i++)
    {
        ui->comboSampleSize->addItem(QString("%1").arg(sampleSizes.at(i)));
    }

    ui->comboByteOrder->clear();//字节序
    QList<QAudioFormat::Endian> endians = curDevice.supportedByteOrders();
    for(int i = 0;i < endians.size();i++)
    {
        ui->comboByteOrder->addItem(ByteOrderString(endians.at(i)));
    }
}

QString MainWindow::SampleTypeString(QAudioFormat::SampleType sampleType)
{
    //将QAduioFormat::SampleType转换为字符串
    QString result("UnKonwn");

    switch(sampleType)
    {
    case QAudioFormat::SignedInt:
        result = "SignedInt";
        break;
    case QAudioFormat::UnSignedInt:
        result = "UnSignedInt";
        break;
    case QAudioFormat::Float:
        result = "Float";
        break;
    case QAudioFormat::Unknown:
        result = "Unknown";
        break;
    }

    return result;
}

QString MainWindow::ByteOrderString(QAudioFormat::Endian endian)
{
    //将字节序QAudioFormat::Endian转换为字符串
    if(endian == QAudioFormat::LittleEndian)
    {
        return "LittleEndian";
    }
    else if(endian == QAudioFormat::BigEndian)
    {
        return "BigEndian";
    }
    else
    {
        return "Unknown";
    }
}

void MainWindow::on_actDeviceTest_triggered()
{
    //测试音频输入设备是否支持选择的配置
    QAudioFormat settings;
    settings.setCodec(ui->comboCodec->currentText());
    settings.setSampleRate(ui->comboSampleRate->currentText().toInt());
    settings.setChannelCount(ui->comboChannels->currentText().toInt());
    settings.setSampleType(QAudioFormat::SampleType(ui->comboSampleTypes->currentData().toInt()));
    settings.setSampleSize(ui->comboSampleSize->currentText().toInt());
    if(ui->comboByteOrder->currentText() == "LittleEndian")
    {
        settings.setByteOrder(QAudioFormat::LittleEndian);
    }
    else
    {
        settings.setByteOrder(QAudioFormat::BigEndian);
    }

    if(curDevice.isFormatSupported(settings))
    {
        QMessageBox::information(this,"音频测试","测试成功,输入设备支持此设置");
    }
    else
    {
        QMessageBox::critical(this,"音频测试","测试失败,输入设备不支持此设置");
    }
}

void MainWindow::on_actStart_triggered()
{
    //开始音频输入
    QAudioFormat defaultAudioFormat;
    defaultAudioFormat.setSampleRate(8000);
    defaultAudioFormat.setChannelCount(1);
    defaultAudioFormat.setSampleSize(8);
    defaultAudioFormat.setCodec("audio/pcm");//???????????????/你输入一个问号 我还你一堆
    defaultAudioFormat.setByteOrder(QAudioFormat::LittleEndian);
    defaultAudioFormat.setSampleType(QAudioFormat::UnSignedInt);

    if(!curDevice.isFormatSupported(defaultAudioFormat))
    {
        QMessageBox::critical(this,"测试","测试失败,输入设备不支持此设置");

        return ;
    }

    audioInput = new QAudioInput(curDevice,defaultAudioFormat,this);
    audioInput->setBufferSize(displayPointsCount);
    //接收音频输入数据的流设备
    displayDevice = new QmyDisplayDevice(lineSeries,displayPointsCount,this);

    connect(displayDevice,SIGNAL(updateBlockSize(qint64)),
            this,SLOT(on_IODevice_UpdateBlockSize(qint64)));
    displayDevice->open(QIODevice::WriteOnly);

    audioInput->start(displayDevice);
    ui->actStart->setEnabled(false);
    ui->actStop->setEnabled(true);
}

void MainWindow::on_IODevice_UpdateBlockSize(qint64 blockSize)
{
    //显示缓冲区大小和数据块大小
    ui->LabBufferSize->setText(QString::asprintf("QAudioInput::bufferSize()=%d",audioInput->bufferSize()));
    ui->LabBlockSize->setText(QString("QIODevice数据块字节数%1").arg(blockSize));
}

void MainWindow::on_actStop_triggered()
{
    audioInput->stop();
    ui->actStart->setEnabled(true);
    ui->actStop->setEnabled(false);
}
