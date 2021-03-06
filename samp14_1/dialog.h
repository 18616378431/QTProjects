#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QHostInfo>
#include <QNetworkInterface>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QString protocolName(QAbstractSocket::NetworkLayerProtocol protocol);
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_btnGetHostInfo_clicked();

    void on_btnLookup_clicked();
    void on_btnClear_clicked();

    void on_btnALLInterface_clicked();

    void on_btnDetail_clicked();

public slots:
    //自定义槽函数
    void lookedUpHostInfo(const QHostInfo &host);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
