#include "qdlglogin.h"
#include "ui_qdlglogin.h"

#include <QSettings>
#include <QCryptographicHash>
#include <QMessageBox>
#include <QDebug>
#include <QMouseEvent>

QDlgLogin::QDlgLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDlgLogin)
{
    ui->setupUi(this);
    ui->editPSWD->setEchoMode(QLineEdit::Password);//密码输入模式
    this->setAttribute(Qt::WA_DeleteOnClose);
    //设置为SplashScreen
    //无边框,在任务栏上显示
//    this->setWindowFlags(Qt::SplashScreen | Qt::FramelessWindowHint);
    this->setWindowFlags(Qt::SplashScreen);
    readSettings();
}

QDlgLogin::~QDlgLogin()
{
    delete ui;
}

void QDlgLogin::readSettings()
{
    //读取
    QString organization = "WWB-Qt";//用于注册表
    QString appName = "samp6_5";
    QSettings settings(organization,appName);
    bool saved = settings.value("saved",false).toBool();//读取saved
    m_user = settings.value("UserName","user").toString();//读取username
    QString defaultPSWD = encrypt("12345");//缺省密码加密后的数据
    m_pswd = settings.value("PSWD",defaultPSWD).toString();//读取PSWD
    if(saved)
    {
        ui->editUser->setText(m_user);
    }
    ui->chkSaveUserName->setChecked(saved);
}

void QDlgLogin::writeSettings()
{
    //写入
    QSettings settings("WWB-Qt","samp6_5");//注册表键组
    settings.setValue("UserName",m_user);
    settings.setValue("PSWD",m_pswd);
    settings.setValue("saved",ui->chkSaveUserName->isChecked());
}

QString QDlgLogin::encrypt(const QString &str)
{
    //字符串md5加密
    QByteArray btArray;
    btArray.append(str);
    QCryptographicHash hash(QCryptographicHash::Md5);//MD5
    hash.addData(btArray);//添加数据
    QByteArray resultArray = hash.result();//返回最终的散列值
    QString md5 = resultArray.toHex();//转换为16进制字符串
    return md5;
}

void QDlgLogin::on_btnOk_clicked()
{
    //ok
    QString user = ui->editUser->text().trimmed();
    QString pswd = ui->editPSWD->text().trimmed();
    QString encryptPSWD = encrypt(pswd);

    qDebug() << user << "," << pswd << "," << encryptPSWD << "\n";
    qDebug() << m_user << "," << m_pswd << "\n";

    if((user == m_user) && (encryptPSWD == m_pswd))
    {
        writeSettings();
        this->accept();//对话框accept
    }
    else
    {
        m_tryCount++;

        if(m_tryCount > 3)
        {
            QMessageBox::critical(this,"错误","输入错误次数太多,强行退出!");
            this->reject();
        }
        else
        {
            QMessageBox::warning(this,"错误提示","用户名或密码错误");
        }
    }
}

void QDlgLogin::mousePressEvent(QMouseEvent *event)
{
    //mouse press
    if(event->button() == Qt::LeftButton)
    {
        qDebug() << __FUNCTION__;
        m_moving = true;
        m_lastPos = event->globalPos() - pos();//记录鼠标相对于窗口的位置
    }
    return QDialog::mousePressEvent(event);
}

void QDlgLogin::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << event->button() << "," << Qt::LeftButton;

    //mouse move (event->button() == Qt::NoButton)
    if(m_moving && (event->button() == Qt::NoButton) &&
            (event->globalPos() - m_lastPos).manhattanLength() > QApplication::startDragDistance())
    {
        qDebug() << __FUNCTION__;
        move(event->globalPos() - m_lastPos);
        m_lastPos = event->globalPos() - pos();
    }
    return QDialog::mouseMoveEvent(event);
}

void QDlgLogin::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug() << __FUNCTION__;

    Q_UNUSED(event);
    //mouse release
    m_moving = false;//stop move
}
