#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QDebug>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::finishedSlot(QNetworkReply * reply)
{
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray bytes = reply->readAll();

        qDebug() << bytes;

        this->parseJson(bytes);

        if (reply->url() == QUrl("http://localhost/qt/get.php?a=qt"))
        {
            ui->getTextEdit->setText(bytes);
        }
        else
        {
            ui->postTextEdit->setText(bytes);
        }
    }
    else
    {
        qDebug() << "finishedSlot error here!";
        qDebug("found error ... code : %d\n", (int)reply->error());
        qDebug(qPrintable(reply->errorString()));
    }

    reply->deleteLater();
}

void MainWindow::on_send_clicked()
{
//    QMessageBox::information(NULL, "Title", "Content", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

//    qDebug() << __FUNCTION__ << endl;

    QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
    connect(accessManager, SIGNAL(finished(QNetworkReply *)), this, SLOT(finishedSlot(QNetworkReply *)));

    QNetworkRequest request;

    request.setUrl(QUrl("http://localhost/qt/get.php?a=qt"));

    //get
    accessManager->get(request);

    request.setUrl(QUrl("http://localhost/qt/get.php"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    QByteArray postData;
    postData.append("b=qt");

    //post
    accessManager->post(request, postData);

    //head
//    request.setUrl(QUrl("http://localhost/qt/get.php"));
//    accessManager->head(request);
}

void MainWindow::parseJson(QByteArray bytes)
{
    QJsonParseError parseJsonErr;

    QJsonDocument document = QJsonDocument::fromJson(bytes, &parseJsonErr);

    if (!(parseJsonErr.error == QJsonParseError::NoError))
    {
        qDebug() << "解析json错误" << endl;
        return;
    }

    QJsonObject jsonObject = document.object();
    qDebug() << "jsonObject[code]" << jsonObject["code"].toInt();
    qDebug() << "jsonObject[msg]" << jsonObject["msg"].toString();

    qDebug() << "jsonObject[data]\n";

    QJsonValue value = jsonObject.value(QStringLiteral("data"));

//    qDebug() << value.isArray() << endl;

    if (value.isArray())
    {
        QJsonArray array = value.toArray();
//        qDebug() << array.size() << endl;

        for (int i = 0; i < array.size(); i++)
        {
            QJsonValue infoArr = array.at(i);
            QJsonObject info = infoArr.toObject();
            int v;
            int k = 0;
            QString t = "";

            if (i == 0)
            {
                v = info["a"].toInt();
                k = info["k"].toInt();
                t = info["t"].toString();
            }
            else if (i == 1)
            {
                v = info["b"].toInt();
            }
            else if (i == 2)
            {
                v = info["c"].toInt();
            }

            qDebug() << v << "|" << k << "|" << t;
        }

        qDebug() << endl;
    }

}
