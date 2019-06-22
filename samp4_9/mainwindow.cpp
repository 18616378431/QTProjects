#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitterMain);
    //状态栏初始化创建
    labCellIndex = new QLabel("当前单元格坐标:",this);
    labCellIndex->setMinimumWidth(250);
    labCellType = new QLabel("当前单元格类型:",this);
    labCellType->setMinimumWidth(200);
    labStudId = new QLabel("学生ID:",this);
    labStudId->setMinimumWidth(200);

    rowCount = 0;

    //添加到状态栏
    ui->statusBar->addWidget(labCellIndex);
    ui->statusBar->addWidget(labCellType);
    ui->statusBar->addWidget(labStudId);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSetHeader_clicked()
{
    //设置表头
    QTableWidgetItem *headerItem;
    QStringList headerText;
    headerText << "姓 名" << "性 别" << "出生日期" << "民 族" << "分 数" << "是否党员";
//    ui->tableInfo->setHorizontalHeaderLabels(headerText);
    ui->tableInfo->setColumnCount(headerText.count());
    for(int i = 0;i < ui->tableInfo->columnCount();i++)
    {
        headerItem = new QTableWidgetItem(headerText.at(i));
        QFont font = headerItem->font();
        font.setBold(true);//粗体
        font.setPointSize(12);//字体大小
        headerItem->setTextColor(Qt::red);//字体颜色
        headerItem->setFont(font);//设置字体
        ui->tableInfo->setHorizontalHeaderItem(i,headerItem);
    }
}

void MainWindow::on_btnIniData_clicked()
{
    //初始化表格内容
    QString strName,strSex;
    bool isParty = false;
    QDate birth;
    birth.setDate(1980,4,7);//初始化一个日期
    ui->tableInfo->clearContents();//只清除工作区不清除表头
//    ui->tableInfo->clear();

    int Rows;
    int iniRowCount = ui->tableInfo->rowCount();

//    int Rows = ui->tableInfo->rowCount();//数据区行数
    //动态获取行数
    if(rowCount == 0)
    {
        Rows = iniRowCount;
    }
    else
    {
        Rows = rowCount;
    }

//    qDebug() << Rows;

    for(int i = 0;i < Rows;i++)
    {
        strName = QString::asprintf("学生%d",i);
        if(i % 2 == 0)
        {
            strSex = "男";
        }
        else
        {
            strSex = "女";
        }

//        qDebug() << "iniRowCount:" << iniRowCount << ",i:" << i;

        if(iniRowCount - 1 < i)
        {
            ui->tableInfo->insertRow(i);
        }
        createItemsARow(i,strName,strSex,birth,"汉族",isParty,70);
        birth = birth.addDays(20);//日期加20天
        isParty = !isParty;
    }

    if(ui->chkBoxTabEditable->isChecked())
    {
        ui->tableInfo->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);
    }
    else
    {
        ui->tableInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }

}

void MainWindow::createItemsARow(int rowNo, QString Name, QString Sex, QDate birth, QString Nation, bool isPM, int score)
{
    //为一行的单元格创建Items
    QTableWidgetItem *item;
    QString str;
    uint StudID = 201605000;//学号基数
    //姓名
    item = new QTableWidgetItem(Name,MainWindow::ctName);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    StudID += rowNo;//学号 = 基数 + 行数
    item->setData(Qt::UserRole,QVariant(StudID));//设置StudID为data
    ui->tableInfo->setItem(rowNo,MainWindow::colName,item);
    //性别
    QIcon icon;
    if(Sex == "男")
    {
        icon.addFile(":/imgs/AppIcon.icns");
    }
    else
    {
        icon.addFile(":/imgs/compass.icns");
    }
    item = new QTableWidgetItem(Sex,MainWindow::ctSex);
    item->setIcon(icon);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableInfo->setItem(rowNo,MainWindow::colSex,item);
    //出生日期
    str = birth.toString("yyyy-MM-dd");//日期转换为字符串
    item = new QTableWidgetItem(str,MainWindow::ctBirth);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableInfo->setItem(rowNo,MainWindow::colBirth,item);
    //民族
    item = new QTableWidgetItem(Nation,MainWindow::ctNation);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableInfo->setItem(rowNo,MainWindow::colNation,item);
    //是否党员
    item = new QTableWidgetItem("党员",MainWindow::ctPartyM);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    if(isPM)
    {
        item->setCheckState(Qt::Checked);
    }
    else
    {
        item->setCheckState(Qt::Unchecked);
    }
    item->setBackgroundColor(Qt::yellow);
    ui->tableInfo->setItem(rowNo,MainWindow::colPartyM,item);
    //分数
    str.setNum(score);
    item = new QTableWidgetItem(str,MainWindow::ctScore);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableInfo->setItem(rowNo,MainWindow::colScore,item);
}

void MainWindow::on_tableInfo_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    Q_UNUSED(previousRow);
    Q_UNUSED(previousColumn);
    //当前选择单元格发生变化时的响应
    QTableWidgetItem *item = ui->tableInfo->item(currentRow,currentColumn);
    if(item == NULL)
    {
        return ;
    }
    labCellIndex->setText(QString::asprintf("当前单元格坐标:%d行,%d列",currentRow,currentColumn));
    int cellType = item->type();//获取单元格类型
    labCellType->setText(QString::asprintf("当前单元格类型:%d",cellType));
    item = ui->tableInfo->item(currentRow,MainWindow::colName);//第一列的item
    int ID = item->data(Qt::UserRole).toInt();//读取用户自定义数据
    labStudId->setText(QString::asprintf("学生ID:%d",ID));//学生ID
}

void MainWindow::on_btnInsertRow_clicked()
{
    //插入一行
    int curRow = ui->tableInfo->currentRow();
    ui->tableInfo->insertRow(curRow);//插入一行不会自动为单元格创建item
    createItemsARow(curRow,"新学生","男",QDate::fromString("1990-1-1","yyyy-M-d"),"苗族",true,100);
}

void MainWindow::on_btnAppendRow_clicked()
{
    //添加一行
    int curRow = ui->tableInfo->rowCount();
    ui->tableInfo->insertRow(curRow);//在表格末尾添加一行
    createItemsARow(curRow,"新生","女",QDate::fromString("2000-1-1","yyyy-M-d"),"满族",false,90);
}


void MainWindow::on_btnDelCurRow_clicked()
{
    //删除当前行及其item
    int curRow = ui->tableInfo->currentRow();
    ui->tableInfo->removeRow(curRow);//删除当前行及其items
}

void MainWindow::on_btnResizeColumn_clicked()
{
    //调整列宽
    ui->tableInfo->resizeColumnsToContents();
}

void MainWindow::on_btnResizeRow_clicked()
{
    //调整行高
    ui->tableInfo->resizeRowsToContents();
}

void MainWindow::on_btnSetRows_clicked()
{
    //设置行数
    rowCount = ui->spinBoxRows->value();
}

void MainWindow::on_chkBoxTabEditable_clicked(bool checked)
{
    //设置编辑模式
    if(checked)
    {
        ui->tableInfo->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);
    }
    else
    {
        ui->tableInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
}

void MainWindow::on_chkBoxHeaderH_clicked(bool checked)
{
    //是否显示行表头
    ui->tableInfo->horizontalHeader()->setVisible(checked);
}

void MainWindow::on_chkBoxHeaderV_clicked(bool checked)
{
    //是否显示列表头
    ui->tableInfo->verticalHeader()->setVisible(checked);
}

void MainWindow::on_chkBoxRowColor_clicked(bool checked)
{
    //间隔行底色
    ui->tableInfo->setAlternatingRowColors(checked);
}

void MainWindow::on_rBtnSelectItem_clicked()
{
    //选择行为:单元格选择
    ui->tableInfo->setSelectionBehavior(QAbstractItemView::SelectItems);
}

void MainWindow::on_rBtnSelectRow_clicked()
{
    //选择行为:行选择
    ui->tableInfo->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void MainWindow::on_btnReadToEdit_clicked()
{
    //将所有单元格的内容供提取字符串,显示在PlainTextEdit组件里
    QString str;
    QTableWidgetItem *cellItem;
    ui->textEdit->clear();
    for(int i = 0;i < ui->tableInfo->rowCount();i++)
    {
        str = QString::asprintf("第%d行:",i + 1);
        for(int j  = 0;j < ui->tableInfo->columnCount() - 1;j++)
        {
            cellItem = ui->tableInfo->item(i,j);//获取单元格的item
            str = str + cellItem->text() + " ";//字符串连接
        }
        cellItem = ui->tableInfo->item(i,colPartyM);//最后一列
        if(cellItem->checkState() == Qt::Checked)
        {
            str = str + "党员";
        }
        else
        {
            str = str + "群众";
        }
        ui->textEdit->appendPlainText(str);
    }
}
