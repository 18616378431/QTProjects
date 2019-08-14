#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnDefaultPath_clicked()
{
    //缺省路径
    QString curPath = QDir::currentPath();
    QDir dir(curPath);
    QString sub = "temp";
    dir.mkdir(sub);
    ui->editPath->setText(curPath + "/" + sub + "/");
}

void MainWindow::on_btnDownload_clicked()
{
    //下载按钮
    QString urlSpec = ui->editUrl->text().trimmed();

    //下载url
    if(urlSpec.isEmpty())
    {
        QMessageBox::information(this,"错误","请指定需要下载的URL");
        return ;
    }

    //URL
    QUrl newUrl = QUrl::fromUserInput(urlSpec);

    if(!newUrl.isValid())
    {
        QMessageBox::information(this,"错误",QString("无效URL: %1 \n错误信息 %2").arg(urlSpec,newUrl.errorString()));
        return ;
    }

    QString tempDir = ui->editPath->text().trimmed();

    if(tempDir.isEmpty())
    {
        QMessageBox::information(this,"错误","请指定保存下载文件的目录");
        return ;
    }

    QString fullFileName = tempDir + newUrl.fileName();

    if(QFile::exists(fullFileName))
    {
        QFile::remove(fullFileName);
    }

    downloadedFile = new QFile(fullFileName);

    if(!downloadedFile->open(QIODevice::WriteOnly))
    {
        QMessageBox::information(this,"错误","临时文件打开错误");
        return ;
    }

    ui->btnDownload->setEnabled(false);

    reply = networkManager.get(QNetworkRequest(newUrl));

    connect(reply,SIGNAL(finished()),this,SLOT(on_finished()));
    connect(reply,SIGNAL(readyRead()),this,SLOT(on_readyRead()));
    connect(reply,SIGNAL(downloadProgress(qint64,qint64)),
            this,SLOT(on_downloadedProgress(qint64,qint64)));
}

void MainWindow::on_readyRead()
{
    //读取下载的数据
    downloadedFile->write(reply->readAll());
}

void MainWindow::on_downloadedProgress(qint64 bytesRead, qint64 totalBytes)
{
    //下载进度
    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesRead);

    //下载百分比
    ui->downloadPercent->setText(QString::number(bytesRead / totalBytes * 100) + "%");
}

void MainWindow::on_finished()
{
    //网络响应结束
    QFileInfo fileInfo;
    fileInfo.setFile(downloadedFile->fileName());
    downloadedFile->close();
    delete downloadedFile;
    downloadedFile = Q_NULLPTR;
    reply->deleteLater();
    reply = Q_NULLPTR;

    if(ui->chkOpen->isChecked())
    {
        QDesktopServices::openUrl(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));
    }

    ui->btnDownload->setEnabled(true);
}
