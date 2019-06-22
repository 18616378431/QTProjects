#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->splitter_2);
    //tableview显示属性设置
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setAlternatingRowColors(true);

    ui->groupBoxSort->setEnabled(false);

    ui->actSubmit->setEnabled(false);
    ui->actRevert->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actOpenDB_triggered()
{
    //打开数据库
    QString aFile = QFileDialog::getOpenFileName(this,"选择数据库文件","","SQLite数据库(*.db *.db3)");

    if(aFile.isEmpty())
    {
        return ;
    }

    DB = QSqlDatabase::addDatabase("QSQLITE");//添加SQLITE数据库驱动
    DB.setDatabaseName(aFile);//设置数据库名称

    if(!DB.open())
    {
        QMessageBox::warning(this,"错误","打开数据库失败",QMessageBox::Ok,QMessageBox::NoButton);
        return ;
    }

    openTable();
}

void MainWindow::openTable()
{
    //打开数据表
    tabModel = new QSqlTableModel(this,DB);//数据表
    tabModel->setTable("employee");//设置数据表
    tabModel->setSort(tabModel->fieldIndex("EmpNo"),Qt::AscendingOrder);
    tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);

    if(!(tabModel->select()))//查询数据
    {
        QMessageBox::critical(this,"错误","打开数据表错误,错误信息\n" + tabModel->lastError().text(),
                              QMessageBox::Ok,QMessageBox::NoButton);
        return ;
    }

    //设置字段显示名
    tabModel->setHeaderData(tabModel->fieldIndex("EmpNo"),Qt::Horizontal,"工号");
    tabModel->setHeaderData(tabModel->fieldIndex("Name"),Qt::Horizontal,"姓名");
    tabModel->setHeaderData(tabModel->fieldIndex("Gender"),Qt::Horizontal,"性别");
    tabModel->setHeaderData(tabModel->fieldIndex("Height"),Qt::Horizontal,"身高");
    tabModel->setHeaderData(tabModel->fieldIndex("Birthday"),Qt::Horizontal,"出生日期");
    tabModel->setHeaderData(tabModel->fieldIndex("Mobile"),Qt::Horizontal,"手机");
    tabModel->setHeaderData(tabModel->fieldIndex("Province"),Qt::Horizontal,"省份");
    tabModel->setHeaderData(tabModel->fieldIndex("City"),Qt::Horizontal,"城市");
    tabModel->setHeaderData(tabModel->fieldIndex("Department"),Qt::Horizontal,"部门");
    tabModel->setHeaderData(tabModel->fieldIndex("Education"),Qt::Horizontal,"学历");
    tabModel->setHeaderData(tabModel->fieldIndex("Salary"),Qt::Horizontal,"工资");
    tabModel->setHeaderData(tabModel->fieldIndex("Memo"),Qt::Horizontal,"备注");
    tabModel->setHeaderData(tabModel->fieldIndex("Photo"),Qt::Horizontal,"照片");

    theSelection = new QItemSelectionModel(tabModel);//选择模型

    connect(theSelection,SIGNAL(currentChanged(QModelIndex,QModelIndex)),
            this,SLOT(on_currentChanged(QModelIndex,QModelIndex)));
    connect(theSelection,SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),
            this,SLOT(on_currentRowChanged(QModelIndex,QModelIndex)));

    ui->tableView->setModel(tabModel);//设置数据模型
    ui->tableView->setSelectionModel(theSelection);//选择模型
    ui->tableView->setColumnHidden(tabModel->fieldIndex("Memo"),true);
    ui->tableView->setColumnHidden(tabModel->fieldIndex("Photo"),true);

    //自定义代理组件
    QStringList strList;
    strList << "男" << "女";
    bool isEditable = false;
    delegateSex.setItems(strList,isEditable);
    ui->tableView->setItemDelegateForColumn(tabModel->fieldIndex("Gender"),&delegateSex);

    strList.clear();
    strList << "销售部" << "技术部" << "生产部" << "行政部";
    isEditable = true;
    delegateDepart.setItems(strList,isEditable);
    ui->tableView->setItemDelegateForColumn(tabModel->fieldIndex("Department"),&delegateDepart);

    //创建界面组件与数据模型的字段之间的映射关系
    dataMapper = new QDataWidgetMapper();
    dataMapper->setModel(tabModel);//设置数据模型
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
    //界面组件与tabModel的具体字段映射关系
    dataMapper->addMapping(ui->dbSpinEmpNo,tabModel->fieldIndex("EmpNo"));
    dataMapper->addMapping(ui->dbEditName,tabModel->fieldIndex("Name"));
    dataMapper->addMapping(ui->dbComboSex,tabModel->fieldIndex("Gender"));
    dataMapper->addMapping(ui->dbSpinHeight,tabModel->fieldIndex("Height"));
    dataMapper->addMapping(ui->dbEditBirth,tabModel->fieldIndex("Birthday"));
    dataMapper->addMapping(ui->dbEditMobile,tabModel->fieldIndex("Mobile"));
    dataMapper->addMapping(ui->dbComboProvince,tabModel->fieldIndex("Province"));
    dataMapper->addMapping(ui->dbEditCity,tabModel->fieldIndex("City"));
    dataMapper->addMapping(ui->dbComboDep,tabModel->fieldIndex("Department"));
    dataMapper->addMapping(ui->dbComboEdu,tabModel->fieldIndex("Education"));
    dataMapper->addMapping(ui->dbSpinSalary,tabModel->fieldIndex("Salary"));
    dataMapper->addMapping(ui->dbEditMemo,tabModel->fieldIndex("Memo"));

    qDebug() << tabModel->fieldIndex("Province");

    dataMapper->toFirst();//移动到首记录

    getFieldNames();//获取字段名称列表,填充ui->groupBoxSort组件
    //更新action和界面使能状态
    ui->actOpenDB->setEnabled(false);
    ui->actRecAppend->setEnabled(true);
    ui->actRecInsert->setEnabled(true);
    ui->actRecDelete->setEnabled(true);
    ui->actScan->setEnabled(true);
    ui->groupBoxSort->setEnabled(true);
//    ui->groupBoxFilter->setEnabled(true);
}

void MainWindow::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    //更新actSubmit和actRevert状态
    Q_UNUSED(current);
    Q_UNUSED(previous);
    ui->actSubmit->setEnabled(tabModel->isDirty());//有未保存的修改
    ui->actRevert->setEnabled(tabModel->isDirty());
}

void MainWindow::on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);
    //行切换时状态的控制
    ui->actRecDelete->setEnabled(current.isValid());
    ui->actPhoto->setEnabled(current.isValid());
    ui->actPhotoClear->setEnabled(current.isValid());

    if(!current.isValid())
    {
        ui->dbLabPhoto->clear();//清除图片显示
        return ;
    }

    dataMapper->setCurrentIndex(current.row());//更新数据映射的行号
    int curRecNo = current.row();//获取行号
    QSqlRecord curRec = tabModel->record(curRecNo);//获取当前记录
    if(curRec.isNull("Photo"))//图片字段内容为空
    {
        ui->dbLabPhoto->clear();
    }
    else
    {
        QByteArray  data = curRec.value("Photo").toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->dbLabPhoto->setPixmap(pic.scaledToWidth(ui->dbLabPhoto->size().width()));
    }
}

void MainWindow::getFieldNames()
{
    //获取模型的字段名称,填充的排序字段
    QSqlRecord emptyRec = tabModel->record();//空字段只有字段名

    for(int i = 0;i < emptyRec.count();i++)
    {
        ui->comboField->addItem(emptyRec.fieldName(i));
    }
}

void MainWindow::on_actRecAppend_triggered()
{
    //添加记录
    tabModel->insertRow(tabModel->rowCount(),QModelIndex());
    QModelIndex curIndex = tabModel->index(tabModel->rowCount() - 1,1);
    theSelection->clearSelection();//清空选择
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    int currow = curIndex.row();//获得当前行号
    tabModel->setData(tabModel->index(currow,0),2000 + tabModel->rowCount());
    tabModel->setData(tabModel->index(currow,2),"男");
}

void MainWindow::on_actRecInsert_triggered()
{
    //插入记录
    QModelIndex curIndex = ui->tableView->currentIndex();
    tabModel->insertRow(curIndex.row(),QModelIndex());
    theSelection->clearSelection();
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}

void MainWindow::on_actRecDelete_triggered()
{
    //删除当前记录
    QModelIndex curIndex = theSelection->currentIndex();//获取当前模型索引
    tabModel->removeRow(curIndex.row());//删除一行
}

void MainWindow::on_actSubmit_triggered()
{
    //保存修改
    bool res = tabModel->submitAll();

    if(!res)
    {
        QMessageBox::information(this,"消息","数据保存错误,错误信息\n" +
                                 tabModel->lastError().text(),QMessageBox::Ok,QMessageBox::NoButton);
    }
    else
    {
        ui->actSubmit->setEnabled(false);
        ui->actRevert->setEnabled(false);
    }
}

void MainWindow::on_actRevert_triggered()
{
    //取消修改
    tabModel->revertAll();
    ui->actSubmit->setEnabled(false);
    ui->actRevert->setEnabled(false);
}
