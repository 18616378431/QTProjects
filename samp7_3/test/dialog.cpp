#include "dialog.h"
#include "ui_dialog.h"

#include <QFileInfo>
#include <QDir>
#include <QFileDialog>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_30_clicked()
{
    //各按钮通用处理函数
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
    QString str = fileInfo.baseName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}

void Dialog::showBtnInfo(QObject *btn)
{
    //显示btn信息到QPlainTextEdit
    QPushButton *theBtn = static_cast<QPushButton *>(btn);
    ui->plainTextEdit->appendPlainText(theBtn->text());
    ui->plainTextEdit->appendPlainText(theBtn->toolTip() + "\n");
}

void Dialog::on_pushButton_51_clicked()
{
    //QFile判断文件是否存在
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    bool the = QFile::exists(sous);

    if(the)
    {
        ui->plainTextEdit->appendPlainText(+ "true \n");
    }
    else
    {
        ui->plainTextEdit->appendPlainText(+ "false \n");
    }

}

void Dialog::on_pushButton_50_clicked()
{
    //QFile::rename();
    showBtnInfo(sender());

    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString newFile = fileInfo.path() + "/" + fileInfo.baseName() + ".XYZ";
    QFile::rename(sous,newFile);//重命名文件,更改后缀名
    ui->plainTextEdit->appendPlainText("源文件:" + sous);
    ui->plainTextEdit->appendPlainText("重命名为:" + newFile + "\n");
}

void Dialog::on_pushButton_11_clicked()
{
    //列出子目录
    QDir dir(ui->editDir->text());
    QStringList strList =dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
    ui->plainTextEdit->appendPlainText("所选目录下的所有目录:");
    for(int i = 0;i < strList.count();i++)
    {
        ui->plainTextEdit->appendPlainText(strList.at(i));
    }
    ui->plainTextEdit->appendPlainText("\n");
}

void Dialog::on_pushButton_17_clicked()
{
    //列出所有文件
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    QStringList strList = dir.entryList(QDir::Files);
    ui->plainTextEdit->appendPlainText("所选目录下的所有文件:");
    for(int i = 0;i < strList.count();i++)
    {
        ui->plainTextEdit->appendPlainText(strList.at(i));
    }
    ui->plainTextEdit->appendPlainText("\n");
}

void Dialog::on_directoryChanged(const QString path)
{
    //directoryChanged slot,file create、delete
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText(path);
    ui->plainTextEdit->appendPlainText("目录发生变化\n");
}

void Dialog::on_fileChanged(const QString path)
{
    //file changed slot,modify、rename
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText(path);
    ui->plainTextEdit->appendPlainText("文件发生变化\n");
}

void Dialog::on_pushButton_46_clicked()
{
    //开始监听
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("监听目录:" + ui->editDir->text() + "\n");
    fileWatcher.addPath(ui->editDir->text());//监听目录
    fileWatcher.addPath(ui->editFile->text());//监听文件

    //connect signal to slot
    connect(&fileWatcher,&QFileSystemWatcher::directoryChanged,
            this,&Dialog::on_directoryChanged);
    connect(&fileWatcher,&QFileSystemWatcher::fileChanged,
            this,&Dialog::on_fileChanged);
}

void Dialog::on_pushButton_47_clicked()
{
    //停止监听
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("停止监听:" + ui->editDir->text() + "\n");
    fileWatcher.removePath(ui->editDir->text());
    fileWatcher.removePath(ui->editFile->text());

    disconnect(&fileWatcher,&QFileSystemWatcher::directoryChanged,
            this,&Dialog::on_directoryChanged);
    disconnect(&fileWatcher,&QFileSystemWatcher::fileChanged,
               this,&Dialog::on_fileChanged);
}

void Dialog::on_openFile_clicked()
{
    //open file
    QString curPath = QDir::currentPath();
    QString filter = "打开一个文件(*.h);;所有文件(*.*)";
    QString fileName = QFileDialog::getOpenFileName(this,"打开一个文件",curPath,filter);

    if(fileName.isEmpty())
    {
        return ;
    }

    ui->editFile->setText(fileName);
}
