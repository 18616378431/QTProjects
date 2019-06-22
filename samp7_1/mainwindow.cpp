#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDir>
#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tabWidget);
    ui->tabWidget->setVisible(false);
    ui->tabWidget->clear();
    ui->tabWidget->tabsClosable();
    ui->textEditDevice->setVisible(false);
    ui->textEditStream->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actOpen_IODevice_triggered()
{
    //打开文件
    QString curPath = QDir::currentPath();
    QString dlgTitle = "打开一个文件";
    QString filter = "程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);

    if(aFileName.isEmpty())
    {
        return ;
    }

    openTextByIODevice(aFileName);
}

bool MainWindow::openTextByIODevice(const QString &aFileName)
{
    //IODevice方式打开文件
    QFile aFile(aFileName);

    if(!aFile.exists())//文件不存在
    {
        return false;
    }

    if(!aFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }

//    ui->textEditDevice->setPlainText(aFile.readAll());
//    aFile.close();
//    int cur = ui->tabWidget->addTab(ui->textEditDevice,aFileName);
//    qDebug() << cur;
//    ui->tabWidget->setCurrentIndex(cur);


    ui->tabWidget->setVisible(true);
    ui->textEditDevice->setVisible(true);

    textEditIODevice = new QTextEdit(this);
    textEditIODevice->setAttribute(Qt::WA_DeleteOnClose);
    textEditIODevice->setPlainText(aFile.readAll());
    int cur = ui->tabWidget->addTab(textEditIODevice,aFileName);
    ui->tabWidget->setCurrentIndex(cur);
    qDebug() << aFile.readAll();
    aFile.close();

    return true;
}

void MainWindow::on_actSave_IODevice_triggered()
{
    //save
    QString curPath = QDir::currentPath();
    QString dlgTitle = "另存为一个文件";
    QString filter = "h文件(*.h);;c++文件(*.cpp);;所有文件(*.*)";
    QString aFileName = QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);

    if(aFileName.isEmpty())
    {
        return ;
    }

    saveTextByIODevice(aFileName);
}

bool MainWindow::saveTextByIODevice(const QString &aFileName)
{
    //save file IODevice
    QFile aFile(aFileName);

    if(!aFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return false;
    }

    QString str = textEditIODevice->toPlainText();//整个内容作为字符串
    QByteArray strBytes = str.toUtf8();//转换为字节数组
    aFile.write(strBytes);//写入文件
    aFile.close();
    ui->tabWidget->setCurrentIndex(0);

    return true;
}

bool MainWindow::openTextByStream(const QString &aFileName)
{
    //QTextStream open file
    QFile aFile(aFileName);

    if(!aFile.exists())
    {
        return false;
    }

    if(!aFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }

    QTextStream aStream(&aFile);
    aStream.setAutoDetectUnicode(true);//自动检测Unicode 识别汉字
//    ui->textEditStream->setPlainText(aStream.readAll());

    textEditStream = new QTextEdit(this);
    textEditStream->setAttribute(Qt::WA_DeleteOnClose);
    textEditStream->setPlainText(aStream.readAll());
    int cur = ui->tabWidget->addTab(textEditStream,aFileName);
    ui->tabWidget->setCurrentIndex(cur);
//    aFile.close();

//    qDebug() << ui->textEditStream->toPlainText();

    aFile.close();
    ui->tabWidget->setVisible(true);
    ui->textEditStream->setVisible(true);
    ui->tabWidget->setCurrentIndex(1);

    qDebug() << ui->tabWidget->isVisible();

    return true;
}

bool MainWindow::saveTextByStream(const QString &aFileName)
{
    //QTextStream save file
    QFile aFile(aFileName);

    if(!aFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return false;
    }

    QTextStream aStream(&aFile);
    aStream.setAutoDetectUnicode(true);
    QString str = textEditStream->toPlainText();
    aStream << str;
    aFile.close();

    return true;
}

void MainWindow::on_actOpen_Stream_triggered()
{
    QString curPath = QDir::currentPath();
    QString dlgTitle = "打开文件";
    QString filter = "程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);

    if(aFileName.isEmpty())
    {
        return ;
    }

    openTextByStream(aFileName);
}

void MainWindow::on_actSave_Stream_triggered()
{
    //save
    QString curPath = QDir::currentPath();
    QString dlgTitle = "另存文件";
    QString filter = "程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);

    if(aFileName.isEmpty())
    {
        return ;
    }

    saveTextByStream(aFileName);
}
