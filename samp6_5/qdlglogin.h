#ifndef QDLGLOGIN_H
#define QDLGLOGIN_H

#include <QDialog>
#include <QPoint>

namespace Ui {
class QDlgLogin;
}

class QDlgLogin : public QDialog
{
    Q_OBJECT

public:
    explicit QDlgLogin(QWidget *parent = 0);
    ~QDlgLogin();

private:
    Ui::QDlgLogin *ui;
    bool m_moving = false;//窗口是否在鼠标操作下移动
    QPoint m_lastPos;//上一次鼠标位置
    QString m_user = "user";//初始化用户名
    QString m_pswd = "12345";//初始化密码,未加密
    int m_tryCount = 0;//试错次数
    void readSettings();//读取设置,注册表
    void writeSettings();//写入设置,注册表
    QString encrypt(const QString &str);//字符串加密
protected:
    //用于鼠标拖动窗口的鼠标事件
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
private slots:
    void on_btnOk_clicked();
};

#endif // QDLGLOGIN_H
