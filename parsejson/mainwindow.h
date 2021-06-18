#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QNetworkAccessManager>
#include <QNetworkReply>

//json
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void parseJson(QByteArray bytes);
    void setOldSiteHeader(QNetworkRequest & request, QString ways, QString token);
    QString getOldSiteToken(QString md5);
    QString buildQueryString(QMap<QString, QString> params);

private slots:
    void on_send_clicked();
    void finishedSlot(QNetworkReply * reply);
    void finishedSlotOldSite(QNetworkReply * reply);
    void finishedSlotOldSiteLogin(QNetworkReply * reply);

    void on_sendOldSite_clicked();

    void on_login_clicked();

private:
    Ui::MainWindow *ui;
    QString appID = "tsYRir9v100000";
    QString appSecret = "JFA9iok4y26pKP7A0U";
    QString mUserName;
    QString mUrl;
};
#endif // MAINWINDOW_H
