#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QStringList>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tabWidget);
    theModel = new QStandardItemModel(2,6,this);//数据模型
    theSelection = new QItemSelectionModel(theModel);//选择模型
    connect(theSelection,SIGNAL(currentChanged(QModelIndex,QModelIndex)),
            this,SLOT(on_currentChanged(QModelIndex,QModelIndex)));

    QStringList headerList;
    headerList<<"Depth"<<"Measured Depth"<<"Direction"<<"Offset"<<"Quality"<<"Sampled";
    theModel->setHorizontalHeaderLabels(headerList); //设置表头文字

    ui->tableView->setModel(theModel);//设置数据模型
    ui->tableView->setSelectionModel(theSelection);//设置选择模型
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);

    LabCellPos = new QLabel("当前单元格:",this);
    LabCellPos->setMinimumWidth(180);
    LabCellPos->setAlignment(Qt::AlignHCenter);

    LabCellText = new QLabel("单元格内容:",this);
    LabCellText->setMinimumWidth(150);

    ui->statusBar->addWidget(LabCellPos);
    ui->statusBar->addWidget(LabCellText);

    resetTable(5);

    ui->tableView->setItemDelegateForColumn(0,&intSpinDelegate);
    ui->tableView->setItemDelegateForColumn(1,&floatSpinDelegate);
    ui->tableView->setItemDelegateForColumn(2,&floatSpinDelegate);
    ui->tableView->setItemDelegateForColumn(3,&floatSpinDelegate);
    ui->tableView->setItemDelegateForColumn(4,&comboBoxDelegate);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actSaveStm_triggered()
{
    //save Qt预定义编码保存文件
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getSaveFileName(this,"选择保存文件",curPath,"Qt预定义编码说数据文件(*.stm)");

    if(aFileName.isEmpty())
    {
        return ;
    }

    if(saveDataAsStream(aFileName))
    {
        QMessageBox::information(this,"提示消息","文件已经成功保存!");
    }
}

bool MainWindow::saveDataAsStream(QString &aFileName)
{
    qDebug() << aFileName;

    //将模型数据保存为Qt预定义编码的数据文件
    QFile aFile(aFileName);

    if(!aFile.open(QIODevice::WriteOnly | QIODevice::Truncate))
    {
        return false;
    }

    qDebug() << "Open\n";
    qDebug() << "theModel:" << theModel << "\n";

    QDataStream aStream(&aFile);
    aStream.setVersion(QDataStream::Qt_5_9);//流版本号,写入和读取版本要兼容
    qint16 rowCount = theModel->rowCount();
    qint16 colCount = theModel->columnCount();
    aStream << rowCount;//写入文件流,行数
    aStream << colCount;//写入文件流,列数


    //获取表头文字
    QStandardItem *aItem;
    QString str;

//    for(int i = 0;i < theModel->columnCount();i++)
    for(int i = 0;i < colCount;i++)
    {
        aItem = theModel->horizontalHeaderItem(i);

        qDebug() << aItem;

        if(aItem != NULL)
        {
            str = aItem->text();
            aStream << str;
            qDebug() << str;
        }

//        QString str = theModel->horizontalHeaderItem(i)->text();//获取表头文字
//        aStream << str;
    }

    //获取数据区的数据
    for(int i = 0;i < theModel->rowCount();i++)
    {
        QStandardItem *aItem = theModel->item(i,0);
        qint16 ceShen = aItem->data(Qt::DisplayRole).toInt();
        aStream << ceShen;

        aItem = theModel->item(i,1);
        qreal chuiShen = aItem->data(Qt::DisplayRole).toDouble();
        aStream << chuiShen;

        aItem = theModel->item(i,2);
        qreal fangWei = aItem->data(Qt::DisplayRole).toDouble();
        aStream << fangWei;

        aItem = theModel->item(i,3);
        qreal weiYi = aItem->data(Qt::DisplayRole).toDouble();
        aStream << weiYi;

        aItem = theModel->item(i,4);
        QString zhiLiang = aItem->data(Qt::DisplayRole).toString();
        aStream << zhiLiang;

        aItem = theModel->item(i,5);
        bool quYang = aItem->checkState() == Qt::Checked;
        aStream << quYang;
    }

    aFile.close();

    return true;
}

void MainWindow::on_actOpenStm_triggered()
{
    //open stm QDataStream
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getOpenFileName(this,"打开一个文件",curPath,"Qt预定义编码数据文件(*.stm)");

    if(aFileName.isEmpty())
    {
        return ;
    }

    if(openDataAsStream(aFileName))
    {
        QMessageBox::information(this,"提示消息","文件已经打开!");
    }
}

bool MainWindow::openDataAsStream(QString &aFileName)
{
    //read data from stm
    QFile aFile(aFileName);

    if(!aFile.open(QIODevice::ReadOnly))
    {
        return false;
    }

    QDataStream aStream(&aFile);
    aStream.setVersion(QDataStream::Qt_5_9);//文件流版本号
    qint16 rowCount,colCount;
    aStream >> rowCount >> colCount;//读取文件行列数
    this->resetTable(rowCount);//表格复位,设定行数
    //获取表头文字,但不使用
    QString str;

    for(int i = 0;i < colCount;i++)
    {
        aStream >> str;//获取表头字符串
    }

    //读取数据区数据
    qint16 ceShen;
    qreal chuiShen,fangWei,weiYi;
    QString zhiLiang;
    bool quYang;
    QStandardItem *aItem;
    QModelIndex index;

    for(int i = 0;i < rowCount;i++)
    {
        aStream >> ceShen;//读取测深
        index = theModel->index(i,0);
        aItem = theModel->itemFromIndex(index);
        aItem->setData(ceShen,Qt::DisplayRole);

        aStream >> chuiShen;
        index = theModel->index(i,1);
        aItem = theModel->itemFromIndex(index);
        aItem->setData(chuiShen,Qt::DisplayRole);

        aStream >> fangWei;
        index = theModel->index(i,2);
        aItem = theModel->itemFromIndex(index);
        aItem->setData(fangWei,Qt::DisplayRole);

        aStream >> weiYi;
        index = theModel->index(i,3);
        aItem = theModel->itemFromIndex(index);
        aItem->setData(weiYi,Qt::DisplayRole);

        aStream >> zhiLiang;
        index = theModel->index(i,4);
        aItem = theModel->itemFromIndex(index);
        aItem->setData(zhiLiang,Qt::DisplayRole);

        aStream >> quYang;
        index = theModel->index(i,5);
        aItem = theModel->itemFromIndex(index);
        if(quYang)
        {
            aItem->setCheckState(Qt::Checked);
        }
        else
        {
            aItem->setCheckState(Qt::Unchecked);
        }
    }
    aFile.close();

    return true;
}

void MainWindow::resetTable(int aRowCount)
{
    //reset table
    theModel->removeRows(0,theModel->rowCount());
    theModel->setRowCount(aRowCount);
    QString str = theModel->headerData(theModel->columnCount() - 1,
                                       Qt::Horizontal,Qt::DisplayRole).toString();
    for(int i = 0;i < theModel->rowCount();i++)
    {
        //设置最后一列
        QModelIndex index = theModel->index(i,5);
        QStandardItem *aItem = theModel->itemFromIndex(index);
        aItem->setCheckable(true);
        aItem->setData(str,Qt::DisplayRole);
        aItem->setEditable(false);
    }
}

void MainWindow::on_actReset_triggered()
{
    //reset table
    resetTable(0);
}

void MainWindow::on_actSaveBin_triggered()
{
    //save binary
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getSaveFileName(this,"选择保存文件",curPath,"标准编码数据文件(*.dat)");

    if(aFileName.isEmpty())
    {
        return ;
    }

    if(saveBinaryFile(aFileName))
    {
        QMessageBox::information(this,"提示消息","文件已经成功保存!");
    }
}

bool MainWindow::saveBinaryFile(QString &aFileName)
{
    //save binary file as .dat
    QFile aFile(aFileName);

    if(!aFile.open(QIODevice::WriteOnly))
    {
        return false;
    }

    QDataStream aStream(&aFile);
    aStream.setByteOrder(QDataStream::LittleEndian);//小端字节序
    qint16 rowCount = theModel->rowCount();
    qint16 colCount = theModel->columnCount();
    aStream.writeRawData((char *)&rowCount,sizeof(qint16));//写入文件流
    aStream.writeRawData((char *)&colCount,sizeof(qint16));//写入文件流
    //获取表头文字
    QByteArray btArray;
    QStandardItem *aItem;
    for(int i = 0;i < theModel->columnCount();i++)
    {
        aItem = theModel->horizontalHeaderItem(i);//获取表头item
        QString str = aItem->text();//获取表头文字
        btArray = str.toUtf8();//转换为字符数组
        aStream.writeBytes(btArray,btArray.length());//写入字符串数据
    }

    //获取表格数据区
    qint8 yes = 1,no = 0;//代表逻辑true,false
    for(int i = 0;i < theModel->rowCount();i++)
    {
        aItem = theModel->item(i,0);
        qint16 ceShen = aItem->data(Qt::DisplayRole).toInt();
        aStream.writeRawData((char *)&ceShen,sizeof(qint16));

        aItem = theModel->item(i,1);
        qreal chuiShen = aItem->data(Qt::DisplayRole).toDouble();
        aStream.writeRawData((char *)&chuiShen,sizeof(qreal));

        aItem = theModel->item(i,2);
        qreal fangWei = aItem->data(Qt::DisplayRole).toDouble();
        aStream.writeRawData((char *)&fangWei,sizeof(qreal));

        aItem = theModel->item(i,3);
        qreal weiYi = aItem->data(Qt::DisplayRole).toDouble();
        aStream.writeRawData((char *)&weiYi,sizeof(qreal));

        aItem = theModel->item(i,4);
        QString zhiLiang = aItem->data(Qt::DisplayRole).toString();
        btArray = zhiLiang.toUtf8();
        aStream.writeBytes(btArray,btArray.length());

        aItem = theModel->item(i,5);
        bool quYang = (aItem->checkState() == Qt::Checked);

        if(quYang)
        {
            aStream.writeRawData((char *)&yes,sizeof(qint8));
        }
        else
        {
            aStream.writeRawData((char *)&no,sizeof(qint8));
        }
    }
    aFile.close();

    return true;
}

bool MainWindow::openBinaryFile(QString &aFileName)
{
    //open dat
    QFile aFile(aFileName);

    if(!aFile.open(QIODevice::ReadOnly))
    {
        return false;
    }

    QDataStream aStream(&aFile);
    aStream.setByteOrder(QDataStream::LittleEndian);

    qint16 rowCount,colCount;
    aStream.readRawData((char *)&rowCount,sizeof(qint16));
    aStream.readRawData((char *)&colCount,sizeof(qint16));
    this->resetTable(rowCount);

    //读取表头文字,但不使用
    char *buf;
    uint strLen;

    for(int i = 0;i < colCount;i++)
    {
        aStream.readBytes(buf,strLen);//同时读取字符串长度和内容
        QString str = QString::fromLocal8Bit(buf,strLen);
    }

    //读取数据区内容
    QStandardItem *aItem;
    qint16 ceShen;
    qreal chuiShen,fangWei,weiYi;
    QString zhiLiang;
    qint8 quYang;//1 true,0 false
    QModelIndex index;

    for(int i = 0;i < rowCount;i++)
    {
        aStream.readRawData((char *)&ceShen,sizeof(qint16));
        index = theModel->index(i,0);
        aItem = theModel->itemFromIndex(index);
        aItem->setData(ceShen,Qt::DisplayRole);

        aStream.readRawData((char *)&chuiShen,sizeof(qreal));
        index = theModel->index(i,1);
        aItem = theModel->itemFromIndex(index);
        aItem->setData(chuiShen,Qt::DisplayRole);

        aStream.readRawData((char *)&fangWei,sizeof(qreal));
        index = theModel->index(i,2);
        aItem = theModel->itemFromIndex(index);
        aItem->setData(fangWei,Qt::DisplayRole);

        aStream.readRawData((char *)&weiYi,sizeof(qreal));
        index = theModel->index(i,3);
        aItem = theModel->itemFromIndex(index);
        aItem->setData(weiYi,Qt::DisplayRole);

        aStream.readBytes(buf,strLen);
        zhiLiang = QString::fromLocal8Bit(buf,strLen);
        index = theModel->index(i,4);
        aItem = theModel->itemFromIndex(index);
        aItem->setData(zhiLiang,Qt::DisplayRole);

        aStream.readRawData((char *)&quYang,sizeof(qint8));
        index = theModel->index(i,5);
        aItem = theModel->itemFromIndex(index);
        if(quYang == 1)
        {
            aItem->setCheckState(Qt::Checked);
        }
        else
        {
            aItem->setCheckState(Qt::Unchecked);
        }
    }

    aFile.close();

    return true;
}

void MainWindow::on_actiOpenBin_triggered()
{
    //open dat
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getOpenFileName(this,"选择打开文件",curPath,"标准编码数据文件(*.dat)");

    if(aFileName.isEmpty())
    {
        return ;
    }

    if(openBinaryFile(aFileName))
    {
        QMessageBox::information(this,"提示消息","文件已经成功打开!");
    }
}

void MainWindow::on_currentChanged(const QModelIndex &current,const QModelIndex &previous)
{
    Q_UNUSED(previous);

    qDebug() << __FUNCTION__;

    if(current.isValid())
    {
        LabCellPos->setText(QString::asprintf("当前单元格:%d行,%d列",current.row(),current.column()));
        QStandardItem *aItem = theModel->itemFromIndex(current);
        LabCellText->setText("当前单元格内容:" + aItem->text());
    }
}

void MainWindow::on_actAppend_triggered()
{
    //在表格最后添加行
    QList<QStandardItem *> aItemList;//列表类
    QStandardItem *aItem;
    for(int i = 0;i < FixedColumnCount - 1;i++)//不包含最后一列
    {
        aItem = new QStandardItem("0");//创建item
        aItemList << aItem;//添加到列表
    }
    //获取最后一列的表头文字
    QString str = theModel->headerData(theModel->columnCount() - 1,Qt::Horizontal,Qt::DisplayRole).toString();
    aItem = new QStandardItem(str);//创建测井取样item
    aItem->setCheckable(true);
    aItemList << aItem;//添加到列表

    theModel->insertRow(theModel->rowCount(),aItemList);//插入一行
    QModelIndex curIndex = theModel->index(theModel->rowCount() - 1,0);
    theSelection->clearSelection();
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}

void MainWindow::on_actInsert_triggered()
{
    //插入行
    //在表格最后添加行
    QList<QStandardItem *> aItemList;//列表类
    QStandardItem *aItem;
    for(int i = 0;i < FixedColumnCount - 1;i++)//不包含最后一列
    {
        aItem = new QStandardItem("0");//创建item
        aItemList << aItem;//添加到列表
    }
    //获取最后一列的表头文字
    QString str = theModel->headerData(theModel->columnCount() - 1,Qt::Horizontal,Qt::DisplayRole).toString();
    aItem = new QStandardItem(str);//创建测井取样item
    aItem->setCheckable(true);
    aItemList << aItem;//添加到列表

    QModelIndex curIndex = theSelection->currentIndex();
    theModel->insertRow(curIndex.row(),aItemList);//插入一行
    theSelection->clearSelection();
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}

void MainWindow::on_actDelete_triggered()
{
    //删除行
    QModelIndex curIndex = theSelection->currentIndex();//获取模型索引
    if(curIndex.row() == theModel->rowCount() - 1)//最后一行
    {
        theModel->removeRow(curIndex.row());//删除最后一行
    }
    else
    {
        //删除一行并重新设置当前选择行
        theModel->removeRow(curIndex.row());
        theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    }
}
