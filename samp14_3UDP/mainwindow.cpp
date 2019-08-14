#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    LabSocketState = new QLabel("socket状态:");
    LabSocketState->setMinimumWidth(200);
    ui->statusBar->addWidget(LabSocketState);

    QString localIP = getLocalIP();
    this->setWindowTitle(this->windowTitle() + "----本机IP:" + localIP);

    ui->comboTargetIP->addItem(localIP);

    udpSocket = new QUdpSocket(this);
    connect(udpSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this,SLOT(onSocketStateChange(QAbstractSocket::SocketState)));
    onSocketStateChange(udpSocket->state());
    connect(udpSocket,SIGNAL(readyRead()),this,SLOT(onSocketReadyRead()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onSocketStateChange(QAbstractSocket::SocketState socketState)
{
    //socket状态发生变化
    switch(socketState)
    {
    case QAbstractSocket::UnconnectedState:
        LabSocketState->setText("socket状态:UnconnectedState");
        break;
    case QAbstractSocket::HostLookupState:
        LabSocketState->setText("socket状态:HostLookupState");
        break;
    case QAbstractSocket::ConnectingState:
        LabSocketState->setText("socket状态:ConnectingState");
        break;
    case QAbstractSocket::ConnectedState:
        LabSocketState->setText("socket状态:ConnectedState");
        break;
    case QAbstractSocket::BoundState:
        LabSocketState->setText("socket状态:BoundState");
        break;
    case QAbstractSocket::ClosingState:
        LabSocketState->setText("socket状态:ClosingState");
        break;
    case QAbstractSocket::ListeningState:
        LabSocketState->setText("socket状态:ListeningState");
        break;
    }
}

QString MainWindow::getLocalIP()
{
    //获取本机IPv4
    QString hostName = QHostInfo::localHostName();
    QHostInfo hostInfo = QHostInfo::fromName(hostName);
    QString localIP = "";
    QList<QHostAddress> addList = hostInfo.addresses();

    if(!addList.isEmpty())
    {
        for(int i = 0;i < addList.count();i++)
        {
            QHostAddress aHost = addList.at(i);
            if(QAbstractSocket::IPv4Protocol == aHost.protocol())
            {
                localIP = aHost.toString();
                break;
            }
        }
    }

    return localIP;
}

void MainWindow::on_actStart_triggered()
{
    //绑定端口
    quint16 port = ui->spinBindPort->value();

    if(udpSocket->bind(port))
    {
        ui->plainTextEdit->appendPlainText("**已成功绑定");
        ui->plainTextEdit->appendPlainText("**绑定端口:" + QString::number(udpSocket->localPort()));

        ui->actStart->setEnabled(false);
        ui->actStop->setEnabled(true);
    }
    else
    {
        ui->plainTextEdit->appendPlainText("**绑定失败");
    }
}

void MainWindow::on_actStop_triggered()
{
    //解除绑定
    udpSocket->abort();
    ui->actStart->setEnabled(true);
    ui->actStop->setEnabled(false);
    ui->plainTextEdit->appendPlainText("**已解除绑定");
}

void MainWindow::on_actClear_triggered()
{
    //清空文本框
    ui->plainTextEdit->clear();
}

void MainWindow::on_actQuit_triggered()
{
    //退出程序
    this->close();
}

void MainWindow::on_btnSend_clicked()
{
    //单播,发送消息
    QString targetIP = ui->comboTargetIP->currentText();//目标IP
    QHostAddress targetAddress(targetIP);
    quint16 targetPort = ui->spinTargetPort->value();//目标port
    QString msg = ui->editMsg->text();
    QByteArray str = msg.toUtf8();
    udpSocket->writeDatagram(str,targetAddress,targetPort);//发出数据报
    ui->plainTextEdit->appendPlainText("[out] " + msg);
    ui->editMsg->clear();
    ui->editMsg->setFocus();
}

void MainWindow::on_btnBroadcast_clicked()
{
    //广播消息
    quint16 targetPort = ui->spinTargetPort->value();//目标port
    QString msg = ui->editMsg->text();
    QByteArray str = msg.toUtf8();
    //QHostAddress::Broadcast 255.255.255.255
    udpSocket->writeDatagram(str,QHostAddress::Broadcast,targetPort);//发出数据报
    ui->plainTextEdit->appendPlainText("[broadcast] " + msg);
    ui->editMsg->clear();
    ui->editMsg->setFocus();
}

void MainWindow::onSocketReadyRead()
{
    //读取数据报
    while(udpSocket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        QHostAddress peerAddr;
        quint16 peerPort;
        udpSocket->readDatagram(datagram.data(),datagram.size(),&peerAddr,&peerPort);
        QString str = datagram.data();
        QString peer = "[From " + peerAddr.toString() + ":" + QString::number(peerPort) + "]";
        ui->plainTextEdit->appendPlainText(peer + str);
    }
}
