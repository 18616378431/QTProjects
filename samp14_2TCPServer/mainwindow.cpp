#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LabListen = new QLabel(this);
    LabListen->setText("监听状态:");
    LabListen->setMinimumWidth(150);
    ui->statusBar->addWidget(LabListen);

    LabSocketState = new QLabel("Socket状态:");
    LabSocketState->setMinimumWidth(200);
    ui->statusBar->addWidget(LabSocketState);

    QString localIp = getLocalIP();
    this->setWindowTitle(this->windowTitle() + "----本机IP:" + localIp);
    ui->comboIP->addItem(localIp);

    tcpServer = new QTcpServer(this);

    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(onNewConnection()));
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

void MainWindow::on_actStart_triggered()
{
    //开始监听
    QString IP = ui->comboIP->currentText();//IP地址
    quint16 port = ui->spinPort->value();//端口
    QHostAddress addr(IP);
    //QHostInfo::LocalHost,本机地址
    tcpServer->listen(addr,port);//开始监听
    ui->plainTextEdit->appendPlainText("**开始监听...");
    ui->plainTextEdit->appendPlainText("服务器地址:" + tcpServer->serverAddress().toString());
    ui->plainTextEdit->appendPlainText("服务器端口:" + QString::number(tcpServer->serverPort()));
    ui->actStart->setEnabled(false);
    ui->actStop->setEnabled(true);
    LabListen->setText("监听状态:正在监听");
}

void MainWindow::onNewConnection()
{
    //有新连接tcpServer发射newConnection信号,槽函数
    tcpSocket = tcpServer->nextPendingConnection();//获取socket
    connect(tcpSocket,SIGNAL(connected()),this,SLOT(onClientConnected()));
    onClientConnected();
    connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(onClientDisconnected()));
    connect(tcpSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(onSocketStateChange(QAbstractSocket::SocketState)));
    onSocketStateChange(tcpSocket->state());
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(onSocketReadyRead()));
}

void MainWindow::onClientConnected()
{
    //客户端连接信号槽函数
    ui->plainTextEdit->appendPlainText("**client socket connected");
    ui->plainTextEdit->appendPlainText("**peer address:" + tcpSocket->peerAddress().toString());
    ui->plainTextEdit->appendPlainText("**peer port:" + QString::number(tcpSocket->peerPort()));
}

void MainWindow::onClientDisconnected()
{
    //客户端断开连接
    ui->plainTextEdit->appendPlainText("**client socket disconnected");
    tcpSocket->deleteLater();
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

void MainWindow::on_actStop_triggered()
{
    //停止监听
    if(tcpServer->isListening())
    {
        tcpServer->close();
        ui->actStart->setEnabled(true);
        ui->actStop->setEnabled(false);
        LabListen->setText("监听状态:停止监听");
    }
}

void MainWindow::on_btnSend_clicked()
{
    //发送消息给tcp客户端,一行字符串,换行符结束,可以是二进制,格式需自定义
    QString msg = ui->editMsg->text();
    ui->plainTextEdit->appendPlainText("[out] " + msg);
    ui->editMsg->clear();
    ui->editMsg->setFocus();

    QByteArray str = msg.toUtf8();
    str.append("\n");//添加换行符
    tcpSocket->write(str);
}

void MainWindow::onSocketReadyRead()
{
    //tcpSocket接收到数据后会发射readyRead信号
    if(tcpSocket->canReadLine())
    {
        ui->plainTextEdit->appendPlainText("[in] " + tcpSocket->readLine());
    }
}

void MainWindow::on_actClear_triggered()
{
    //清空文本框
    ui->plainTextEdit->clear();
}
