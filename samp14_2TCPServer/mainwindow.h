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
    QLabel *LabListen;//监听状态
    QLabel *LabSocketState;//socket状态
    QTcpServer *tcpServer;//TCP服务器
    QTcpSocket *tcpSocket;//tcp socket
    QString getLocalIP();//本机IP
protected:
//    void closeEvent(QCloseEvent *event);
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //自定义槽函数
    void onNewConnection();//QTcpServer的newConnection信号
    void onSocketStateChange(QAbstractSocket::SocketState socketState);
    void onClientConnected();//Client Socket connected
    void onClientDisconnected();//Client Socket disconnected
    void onSocketReadyRead();//读取socket传入数据

    void on_actQuit_triggered();

    void on_actStart_triggered();

    void on_actStop_triggered();

    void on_btnSend_clicked();

    void on_actClear_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
