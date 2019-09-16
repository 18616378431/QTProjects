#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QSettings>

#include <QDebug>

QTranslator *trans = nullptr;

QString readSetting();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    trans = new QTranslator;
    QString curLang = readSetting();//读取语言设置

    qDebug() << curLang;

    if(curLang == "EN")
    {
        trans->load("samp16_1_en.qm");
    }
    else
    {
        trans->load("samp16_1_cn.qm");
    }
    a.installTranslator(trans);

    MainWindow w;
    w.show();

    return a.exec();
}

QString readSetting()
{
    //从注册表读取上次设置的语言
    QString organization = "WWB-Qt";
    QString appName = "samp16_1";
    QSettings settings(organization,appName);
    QString Language = settings.value("Language","EN").toString();

    return Language;
}
