#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QIODevice>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitter);
    theModel = new QStandardItemModel(2,FixedColumnCount,this);//数据模型
    theSelection = new QItemSelectionModel(theModel);//选择模型
    connect(theSelection,SIGNAL(currentChanged(QModelIndex,QModelIndex)),
            this,SLOT(on_currentChanged(QModelIndex,QModelIndex)));
    ui->tableView->setModel(theModel);//设置数据模型
    ui->tableView->setSelectionModel(theSelection);//设置选择模型
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
    //创建状态栏组件
    LabCurFile = new QLabel("当前文件:",this);
    LabCurFile->setMinimumWidth(200);

    LabCellPos = new QLabel("当前单元格:",this);
    LabCellPos->setMinimumWidth(180);
    LabCellPos->setAlignment(Qt::AlignHCenter);

    LabCellText = new QLabel("单元格内容:",this);
    LabCellText->setMinimumWidth(150);

    ui->statusBar->addWidget(LabCurFile);
    ui->statusBar->addWidget(LabCellPos);
    ui->statusBar->addWidget(LabCellText);

    //delegate 为各列设置代理组件
    ui->tableView->setItemDelegateForColumn(0,&intSpinDelegate);
    ui->tableView->setItemDelegateForColumn(1,&floatSpinDelegate);
    ui->tableView->setItemDelegateForColumn(2,&floatSpinDelegate);
    ui->tableView->setItemDelegateForColumn(3,&floatSpinDelegate);
    ui->tableView->setItemDelegateForColumn(4,&comboboxDelegate);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);
    //选择单元格发生变化时的响应
    if(current.isValid())
    {
        LabCellPos->setText(QString::asprintf("当前单元格:%d行,%d列",current.row(),current.column()));
        QStandardItem *aItem = theModel->itemFromIndex(current);
        LabCellText->setText("单元格内容:" + aItem->text());
        QFont font = aItem->font();
        ui->actFontBold->setChecked(font.bold());
    }
}

void MainWindow::on_actOpen_triggered()
{
    //打开文件
    QString curPath = QCoreApplication::applicationDirPath();
    QString aFileName = QFileDialog::getOpenFileName(this,"打开一个文件",
                                                     curPath,"井数据文件(*.txt);;所有文件(*.*)");
    if(aFileName.isEmpty())
    {
        return ;
    }
    QStringList fFileContent;
    QFile aFile(aFileName);
    if(aFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream aStream(&aFile);//用文本流读取文件
        ui->plainTextEdit->clear();
        while(!aStream.atEnd())
        {
            QString str = aStream.readLine();
            ui->plainTextEdit->appendPlainText(str);
            fFileContent.append(str);
        }
        aFile.close();
        this->LabCurFile->setText("当前文件:" + aFileName);//状态栏显示
        iniModelFromStringList(fFileContent);
    }
}

void MainWindow::iniModelFromStringList(QStringList &aFileContent)
{
    //从StringList初始化数据模型
    int rowCnt = aFileContent.count();//文本行数,第一行是标题
    theModel->setRowCount(rowCnt - 1);
    //设置表头,一个或多个空格、TAB等分隔符隔开的字符串,分解为一个StringList
    QString header = aFileContent.at(0);//第一行是表头
    QStringList headerList = header.split(QRegExp("\\s+"),QString::SkipEmptyParts);
    theModel->setHorizontalHeaderLabels(headerList);//设置表头文字
    //设置表格数据
    QStandardItem *aItem;
    QStringList tmpList;
    int j;
    for(int i = 1;i < rowCnt;i++)//row
    {
        QString aLineText = aFileContent.at(i);
        tmpList = aLineText.split(QRegExp("\\s+"),QString::SkipEmptyParts);
        for(j = 0;j < FixedColumnCount - 1;j++)//column
        {
            //不含最后一列
            aItem = new QStandardItem(tmpList.at(j));
            theModel->setItem(i - 1,j,aItem);//为模型的某个行列设置item
        }
        aItem = new QStandardItem(headerList.at(j));//最后一列
        aItem->setCheckable(true);//设置为Checkable
        if(tmpList.at(j) == "0")
        {
            aItem->setCheckState(Qt::Unchecked);
        }
        else
        {
            aItem->setCheckState(Qt::Checked);
        }
        theModel->setItem(i - 1,j,aItem);
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

void MainWindow::on_actAlignLeft_triggered()
{
    //设置文字居左对齐
    if(!theSelection->hasSelection())
    {
        return ;
    }
    //获取选择的单元格的模型索引列表,可以是多选
    QModelIndexList selectedIndex = theSelection->selectedIndexes();
    for(int i = 0;i < selectedIndex.count();i++)
    {
        QModelIndex aIndex = selectedIndex.at(i);//获取一个模型索引
        QStandardItem *aItem = theModel->itemFromIndex(aIndex);
        aItem->setTextAlignment(Qt::AlignLeft);
    }
}

void MainWindow::on_actAlignCenter_triggered()
{
    //设置文字居中对齐
    if(!theSelection->hasSelection())
    {
        return ;
    }
    //获取选择的单元格的模型索引列表,可以是多选
    QModelIndexList selectedIndex = theSelection->selectedIndexes();
    for(int i = 0;i < selectedIndex.count();i++)
    {
        QModelIndex aIndex = selectedIndex.at(i);//获取一个模型索引
        QStandardItem *aItem = theModel->itemFromIndex(aIndex);
        aItem->setTextAlignment(Qt::AlignCenter);
    }
}

void MainWindow::on_actAlignRight_triggered()
{
    //设置文字居右对齐
    if(!theSelection->hasSelection())
    {
        return ;
    }
    //获取选择的单元格的模型索引列表,可以是多选
    QModelIndexList selectedIndex = theSelection->selectedIndexes();
    for(int i = 0;i < selectedIndex.count();i++)
    {
        QModelIndex aIndex = selectedIndex.at(i);//获取一个模型索引
        QStandardItem *aItem = theModel->itemFromIndex(aIndex);
        aItem->setTextAlignment(Qt::AlignRight);
    }
}

void MainWindow::on_actFontBold_triggered(bool checked)
{
    //设置字体粗体
    if(!theSelection->hasSelection())
    {
        return ;
    }
    QModelIndexList selectedIndex = theSelection->selectedIndexes();
    for(int i = 0;i < selectedIndex.count();i++)
    {
        QModelIndex aIndex = selectedIndex.at(i);//获取一个模型索引
        QStandardItem *aItem = theModel->itemFromIndex(aIndex);//获取项数据
        QFont font = aItem->font();
        font.setBold(checked);//设置字体是否粗体
        aItem->setFont(font);
    }
}

void MainWindow::on_actSave_triggered()
{
    //保存为文件,模型数据预览
    QString curPath = QCoreApplication::applicationDirPath();
    QString aFileName = QFileDialog::getSaveFileName(this,"选择一个文件",
                                                     curPath,"井斜数据文件(*.txt);;所有文件(*.*)");
    if(aFileName.isEmpty())
    {
        return ;
    }
    QFile aFile(aFileName);
    //以读写覆盖方式打开文件
    if(!(aFile.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate)))
    {
        return ;
    }
    QTextStream aStream(&aFile);
    QStandardItem *aItem;
    int i,j;
    QString str;
    ui->plainTextEdit->clear();
    //获取表头文字
    for(i = 0;i < theModel->columnCount();i++)
    {
        aItem = theModel->horizontalHeaderItem(i);//获取表头的项数据

        if(aItem == NULL)
        {
            continue;
        }

        str = str + aItem->text() + "\t\t";//以TAB分隔
    }
    aStream << str << "\n";//文件中需要加入换行符
    ui->plainTextEdit->appendPlainText(str);
    //获取数据区文字
    for(i = 0;i < theModel->rowCount();i++)
    {
        str = "";
        for(j = 0;j < theModel->columnCount() - 1;j++)
        {
            aItem = theModel->item(i,j);
            if(aItem == NULL)
            {
                continue;
            }
            str = str + aItem->text() + QString::asprintf("\t\t");
        }
        aItem = theModel->item(i,j);
        if(aItem == NULL)
        {
            continue;
        }
        if(aItem->checkState() == Qt::Checked)
        {
            str = str + "1";
        }
        else
        {
            str = str + "0";
        }
        ui->plainTextEdit->appendPlainText(str);
        aStream << str << "\n";
    }
}

void MainWindow::on_actModelData_triggered()
{
    //模型数据预览
    QStandardItem *aItem;
    int i,j;
    QString str;
    ui->plainTextEdit->clear();

    qDebug() << "Header\n";

    //获取表头文字
    for(i = 0;i < theModel->columnCount();i++)
    {
        aItem = theModel->horizontalHeaderItem(i);//获取表头的项数据
        if(aItem == NULL)
        {
            continue;
        }
        str = str + aItem->text() + "\t\t";//以TAB分隔
//        str = str + "\t\t";//以TAB分隔
    }

    qDebug() << str;
//    return ;

    ui->plainTextEdit->appendPlainText(str);
    //获取数据区文字
    for(i = 0;i < theModel->rowCount();i++)
    {
        str = "";
        for(j = 0;j < theModel->columnCount() - 1;j++)
        {
            aItem = theModel->item(i,j);
            if(aItem == NULL)
            {
                continue;
            }
            str = str + aItem->text() + QString::asprintf("\t\t");
        }
        aItem = theModel->item(i,j);
        if(aItem == NULL)
        {
            continue;
        }
        if(aItem->checkState() == Qt::Checked)
        {
            str = str + "1";
        }
        else
        {
            str = str + "0";
        }
        ui->plainTextEdit->appendPlainText(str);

    }
}
