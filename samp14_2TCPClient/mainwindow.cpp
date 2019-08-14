#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tcpClient = new QTcpSocket(this);//创建socket
    LabSocketState = new QLabel("Socket状态:");//状态栏标签
    LabSocketState->setMinimumWidth(250);
    ui->statusBar->addWidget(LabSocketState);
    QString IP = getLocalIP();
    this->setWindowTitle(this->windowTitle() + "----本机IP:" + IP);
    ui->comboServer->addItem(IP);

    connect(tcpClient,SIGNAL(connected()),this,SLOT(onConnected()));
    connect(tcpClient,SIGNAL(disconnected()),this,SLOT(onDisconnected()));
    connect(tcpClient,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(onSocketStateChange(QAbstractSocket::SocketState)));
    connect(tcpClient,SIGNAL(readyRead()),this,SLOT(onSocketReadyRead()));
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

void MainWindow::on_actConnect_triggered()
{
    //连接到服务器
    QString addr = ui->comboServer->currentText();
    quint16 port = ui->spinPort->value();
    tcpClient->connectToHost(addr,port);
}

void MainWindow::on_actDisconnect_triggered()
{
    //断开连接
    if(tcpClient->state() == QAbstractSocket::ConnectedState)
    {
        tcpClient->disconnectFromHost();
    }
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

void MainWindow::onConnected()
{
    //连接到服务器信号槽函数
    ui->plainTextEdit->appendPlainText("**已连接到服务器");
    ui->plainTextEdit->appendPlainText("peer address:" + tcpClient->peerAddress().toString());
    ui->plainTextEdit->appendPlainText("**peer port:" + QString::number(tcpClient->peerPort()));

    ui->actConnect->setEnabled(false);
    ui->actDisconnect->setEnabled(true);
}

void MainWindow::onDisconnected()
{
    //服务器断开连接信号槽函数
    ui->plainTextEdit->appendPlainText("**已断开与服务器的连接");

    ui->actConnect->setEnabled(true);
    ui->actDisconnect->setEnabled(false);
}

void MainWindow::on_btnSend_clicked()
{
    //发送消息
    QString msg = ui->editMsg->text();
    ui->plainTextEdit->appendPlainText("[out] " + msg);
    ui->editMsg->clear();
    ui->editMsg->setFocus();
    QByteArray str = msg.toUtf8();
    str.append("\n");
    tcpClient->write(str);
}

void MainWindow::onSocketReadyRead()
{
    //可读事件槽函数
    if(tcpClient->canReadLine())
    {
        ui->plainTextEdit->appendPlainText("[in] " + tcpClient->readLine());
    }
}

void MainWindow::on_actClear_triggered()
{
    ui->plainTextEdit->clear();
}
