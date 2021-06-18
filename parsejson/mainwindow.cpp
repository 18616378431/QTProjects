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
    mUrl = "http://italwebapi2.86sb.com/wap/v1/app-brand/index";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::finishedSlot(QNetworkReply * reply)
{
    if (reply->error() == QNetworkReply::NoError)
    {
        qDebug() << "status code:" << reply->attribute(QNetworkRequest::Attribute::HttpStatusCodeAttribute).toInt() << endl;

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

            switch (i)
            {
                case 0:
                    v = info["a"].toInt();
                    k = info["k"].toInt();
                    t = info["t"].toString();
                    break;
                case 1:
                    v = info["b"].toInt();
                    break;
                case 2:
                    v = info["c"].toInt();
                    break;
            }

            qDebug() << v << "|" << k << "|" << t;
        }

        qDebug() << endl;
    }

}

void MainWindow::on_sendOldSite_clicked()
{
//    QMessageBox::information(NULL, "请求老网站", "text", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

    QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
    connect(accessManager, SIGNAL(finished(QNetworkReply *)), this, SLOT(finishedSlotOldSite(QNetworkReply *)));

    QNetworkRequest request;

    QString url = mUrl;
//    QString loginName = "login_name";
    QString userName = ui->lineEdit->text();
    mUserName = userName;

    //krsort($info);
    //QString appID = "tsYRir9v100000";
    //QString appSecret = "JFA9iok4y26pKP7A0U";
    //$token = md5(($this->appID).'&'.($this->appSecret).http_build_query($info));

    QMap<QString, QString> params;
//    params["verify_code"] = "235817";
    params["login_name"] = userName;

    QString str =buildQueryString(params);

    qDebug() << params << endl;
    qDebug() << str << endl;

    QString tmp = QString("%1&%2%3").arg(appID).arg(appSecret).arg(str);
    QString token = getOldSiteToken(tmp);
    url = url.append("?").append(str);

    request.setUrl(QUrl(url));

    //header
    setOldSiteHeader(request, "sms", token);

    //get
    accessManager->get(request);
}

void MainWindow::finishedSlotOldSite(QNetworkReply * reply)
{
    if (reply->error() == QNetworkReply::NoError)
    {
        qDebug() << "status code:" << reply->attribute(QNetworkRequest::Attribute::HttpStatusCodeAttribute).toInt() << endl;

        QByteArray bytes = reply->readAll();

        qDebug() << bytes;

        ui->oldSiteTextEdit->setText(bytes);
    }
    else
    {
        qDebug() << "finishedSlot error here!";
        qDebug("found error ... code : %d\n", (int)reply->error());
        qDebug(qPrintable(reply->errorString()));
    }

    reply->deleteLater();
}

void MainWindow::setOldSiteHeader(QNetworkRequest & request, QString ways, QString token)
{
    QDateTime dateTime = QDateTime::currentDateTime();
    QString currentDate = dateTime.toString("yyyy-MM-dd hh:mm:ss");

    qDebug() << currentDate << endl;

    request.setRawHeader("ways", ways.toUtf8());
    request.setRawHeader("sendat", currentDate.toUtf8());
    request.setRawHeader("appkey", "tsYRir9v100000");
    request.setRawHeader("token", token.toUtf8());
}

QString MainWindow::getOldSiteToken(QString key)
{
    QString md5;
    QByteArray bb;

    bb = QCryptographicHash::hash (key.toUtf8(), QCryptographicHash::Md5);
    md5.append(bb.toHex());

    return md5;
}

void MainWindow::on_login_clicked()
{
    qDebug() << mUserName << endl;

    QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
    connect(accessManager, SIGNAL(finished(QNetworkReply *)), this, SLOT(finishedSlotOldSiteLogin(QNetworkReply *)));

    QNetworkRequest request;

    QString url = mUrl;

    QByteArray bb = QCryptographicHash::hash (QString("A-C-D").toUtf8(), QCryptographicHash::Md5);

    QMap<QString, QString> params;
    params["verify_code"] = ui->verify_code->text();
    params["login_name"] = mUserName;
    params["source"] = "Qt";
    params["device_id"] = bb.toHex();

    QString str = buildQueryString(params);

    qDebug() << str << endl;

    QString tmp = QString("%1&%2%3").arg(appID).arg(appSecret).arg(str);
    QString token = getOldSiteToken(tmp);

    qDebug() <<  "post token" << token << endl;
    qDebug() <<  "tmp " << tmp << endl;

    request.setUrl(QUrl(url));

    //header
    setOldSiteHeader(request, "login", token);

    QByteArray postData;

//    for (QMap<QString, QString>::ConstIterator ite = params.constBegin(); ite != params.constEnd(); ++ite)
//    {
//        postData.append(QString("%1=%2").arg(ite.key()).arg(ite.value()));
//    }
    postData.append(str);

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    //post
    accessManager->post(request, postData);
}


QString MainWindow::buildQueryString(QMap<QString, QString> params)
{
    QStringList tmp1;

    for (QMap<QString, QString>::ConstIterator ite = --params.constEnd(); ite != --params.constBegin(); ite--)
    {
        tmp1.append(QString("%1=%2").arg(ite.key()).arg(ite.value()));
        qDebug() << ite.key() << "=" << ite.value();
    }

    qDebug() << tmp1 << endl;

    return tmp1.join("&");
}

void MainWindow::finishedSlotOldSiteLogin(QNetworkReply * reply)
{
    if (reply->error() == QNetworkReply::NoError)
    {
        qDebug() << "status code:" << reply->attribute(QNetworkRequest::Attribute::HttpStatusCodeAttribute).toInt() << endl;

        QByteArray bytes = reply->readAll();

        qDebug() << bytes;

        ui->loginText->setPlainText(bytes);
    }
    else
    {
        qDebug() << "finishedSlot error here!";
        qDebug("found error ... code : %d\n", (int)reply->error());
        qDebug(qPrintable(reply->errorString()));
    }

    reply->deleteLater();
}
