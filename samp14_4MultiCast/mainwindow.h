#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHostInfo>
#include <QUdpSocket>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel *LabSocketState;
    QUdpSocket *udpSocket;
    QHostAddress groupAddress;//组播地址
    QString getLocalIP();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    //自定义槽函数
    void onSocketStateChange(QAbstractSocket::SocketState socketState);
    void onSocketReadyRead();
    void on_actStart_triggered();

    void on_actStop_triggered();

    void on_btnMulticast_clicked();

    void on_actClear_triggered();

    void on_actQuit_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
