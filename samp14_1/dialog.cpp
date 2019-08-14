#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnGetHostInfo_clicked()
{
    //获取本机主机名和IP地址
    QString hostName = QHostInfo::localHostName();//本机主机名
    ui->plainTextEdit->appendPlainText("本机主机名:" + hostName + "\n");
    QHostInfo hostInfo = QHostInfo::fromName(hostName);//本机IP地址
    QList<QHostAddress> addList = hostInfo.addresses();
    if(!addList.isEmpty())
    {
        for(int i = 0;i < addList.count();i++)
        {
            QHostAddress aHost = addList.at(i);//每项是QHostAddress
            bool show = ui->chkOnlyIP4->isChecked();//是否只显示IPv4
            if(show)
            {
                show = (QAbstractSocket::IPv4Protocol == aHost.protocol());//IPv4协议
            }
            else
            {
                show = true;
            }
            if(show)
            {
                ui->plainTextEdit->appendPlainText("协议:" + protocolName(aHost.protocol()));
                ui->plainTextEdit->appendPlainText("本机IP地址:" + aHost.toString());
                ui->plainTextEdit->appendPlainText("");
            }
        }
    }
}

QString Dialog::protocolName(QAbstractSocket::NetworkLayerProtocol protocol)
{
    switch(protocol)
    {
        case QAbstractSocket::IPv4Protocol:
            return "IPv4 Protocol";
        break;
        case QAbstractSocket::IPv6Protocol:
            return "IPv6 Protocol";
        break;
        case QAbstractSocket::AnyIPProtocol:
            return "Any IP Protocol";
        break;
        default:
            return "Unknown Network Layer Protocol";
    }
}

void Dialog::on_btnLookup_clicked()
{
    //查找主机信息
    QString hostname = ui->editHost->text();
    ui->plainTextEdit->appendPlainText("正在查找主机信息:" + hostname);
    QHostInfo::lookupHost(hostname,this,SLOT(lookedUpHostInfo(QHostInfo)));
}

void Dialog::lookedUpHostInfo(const QHostInfo &host)
{
    //查找主机信息槽函数
    QList<QHostAddress> addList = host.addresses();
    if(!addList.isEmpty())
    {
        for(int i = 0;i < addList.count();i++)
        {
            QHostAddress aHost = addList.at(i);//每项是QHostAddress
            bool show = ui->chkOnlyIP4->isChecked();//是否只显示IPv4
            if(show)
            {
                show = (QAbstractSocket::IPv4Protocol == aHost.protocol());//IPv4协议
            }
            else
            {
                show = true;
            }
            if(show)
            {
                ui->plainTextEdit->appendPlainText("协议:" + protocolName(aHost.protocol()));
                ui->plainTextEdit->appendPlainText(aHost.toString());
            }
        }
    }
}

void Dialog::on_btnClear_clicked()
{
    //清空文本框
    ui->plainTextEdit->clear();
}

void Dialog::on_btnALLInterface_clicked()
{
    //网络接口信息 QNetWorkInterface::allInterfaces()
    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();

    for(int i = 0;i < list.count();i++)
    {
        QNetworkInterface aInterface = list.at(i);

        if(!aInterface.isValid())
        {
            continue;
        }

        ui->plainTextEdit->appendPlainText("设备名称:" + aInterface.humanReadableName());
        ui->plainTextEdit->appendPlainText("硬件地址:" + aInterface.hardwareAddress());

        QList<QNetworkAddressEntry> entryList = aInterface.addressEntries();

        for(int j = 0;j < entryList.count();j++)
        {
            QNetworkAddressEntry aEntry = entryList.at(j);
            ui->plainTextEdit->appendPlainText("IP地址:" + aEntry.ip().toString());
            ui->plainTextEdit->appendPlainText("子网掩码:" + aEntry.netmask().toString());
            ui->plainTextEdit->appendPlainText("广播地址:" + aEntry.broadcast().toString() + "\n");
        }
        ui->plainTextEdit->appendPlainText("\n");
    }
}

void Dialog::on_btnDetail_clicked()
{
    //返回主机IP地址列表,和QHostInfo::addresses()类似,返回QHostAddress列表
    //QNetworkInterface会返回更多地址,包含127.0.0.1,而QHostInfo不会
    //QNetworkInterface::allAddresses()
    QList<QHostAddress> addList = QNetworkInterface::allAddresses();

    if(!addList.isEmpty())
    {
        for(int i = 0;i < addList.count();i++)
        {
            QHostAddress aHost = addList.at(i);

            bool show = ui->chkOnlyIP4->isChecked();

            if(show)
            {
                show  = (QAbstractSocket::IPv4Protocol == aHost.protocol());
            }
            else
            {
                show = true;
            }

            if(show)
            {
                ui->plainTextEdit->appendPlainText("协议:" + protocolName(aHost.protocol()));
                ui->plainTextEdit->appendPlainText("IP地址:" + aHost.toString());
                ui->plainTextEdit->appendPlainText("");
            }
        }
    }
}
