#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LabSocketState = new QLabel(this);
    LabSocketState->setMinimumWidth(200);
    LabSocketState->setText("socket状态:");
    ui->statusBar->addWidget(LabSocketState);

    QString localIP = getLocalIP();
    this->setWindowTitle(this->windowTitle() + "----本机IP:" + localIP);
    udpSocket = new QUdpSocket(this);
    udpSocket->setSocketOption(QAbstractSocket::MulticastTtlOption,1);

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
    //加入多播组
    QString IP = ui->comboIP->currentText();
    groupAddress = QHostAddress(IP);//多播组地址
    quint16 groupPort = ui->spinPort->value();//端口

    if(udpSocket->bind(QHostAddress::AnyIPv4,groupPort,QUdpSocket::ShareAddress))
    {
        udpSocket->joinMulticastGroup(groupAddress);//加入多播组
        ui->plainTextEdit->appendPlainText("**加入组播成功");
        ui->plainTextEdit->appendPlainText("**组播地址IP:" + IP);
        ui->plainTextEdit->appendPlainText("**绑定端口:" + QString::number(groupPort));

        ui->actStart->setEnabled(false);
        ui->actStop->setEnabled(true);
        ui->comboIP->setEnabled(false);
    }
    else
    {
        ui->plainTextEdit->appendPlainText("**绑定端口失败");
    }
}

void MainWindow::on_actStop_triggered()
{
    //退出组播
    udpSocket->leaveMulticastGroup(groupAddress);
    udpSocket->abort();//解除绑定

    ui->actStart->setEnabled(true);
    ui->actStop->setEnabled(false);
    ui->comboIP->setEnabled(true);
    ui->plainTextEdit->appendPlainText("**已退出组播,解除绑定端口");
}

void MainWindow::on_btnMulticast_clicked()
{
    //发送消息
    quint16 groupPort = ui->spinPort->value();
    QString msg = ui->editMsg->text();
    QByteArray str = msg.toUtf8();
    udpSocket->writeDatagram(str,groupAddress,groupPort);

    ui->plainTextEdit->appendPlainText("[multicast] " + msg);
    ui->editMsg->clear();
    ui->editMsg->setFocus();
}

void MainWindow::onSocketReadyRead()
{
    //读取接收数据
    QByteArray datagram;
    datagram.resize(udpSocket->pendingDatagramSize());
    QHostAddress peerAddr;
    quint16 peerPort;
    udpSocket->readDatagram(datagram.data(),datagram.size(),&peerAddr,&peerPort);
    QString str = datagram.data();
    QString peer = "[from " + peerAddr.toString() + ":" + QString::number(peerPort) + "]";
    ui->plainTextEdit->appendPlainText(peer + str);
}

void MainWindow::on_actClear_triggered()
{
    //清空文本框
    ui->plainTextEdit->clear();
}

void MainWindow::on_actQuit_triggered()
{
    this->close();
}
