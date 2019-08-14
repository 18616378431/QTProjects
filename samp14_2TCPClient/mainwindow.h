#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QTcpSocket *tcpClient;//socket
    QLabel *LabSocketState;//状态栏显示标签
    QString getLocalIP();//获取本机IP地址
protected:
//    void closeEvent(QCloseEvent *event);
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //自定义槽函数
    void onConnected();
    void onDisconnected();
    void onSocketStateChange(QAbstractSocket::SocketState socketState);
    void onSocketReadyRead();//读取socket传入数据

    void on_actQuit_triggered();

    void on_actConnect_triggered();

    void on_actDisconnect_triggered();

    void on_btnSend_clicked();

    void on_actClear_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
