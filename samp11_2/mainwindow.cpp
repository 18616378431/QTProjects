#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actOpenDB_triggered()
{
    //打开数据库
//    QString aFile = QFileDialog::getOpenFileName(this,"选额数据库文件","","SQLite数据库(*.db *.db3)");

    QString aFile = "/Users/wangjiankang/Documents/QTProjects/sqlite/demodb.db3";

    if(aFile.isEmpty())
    {
        return ;
    }

    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);

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
    qryModel = new QSqlQueryModel(this);
    qryModel->setQuery("SELECT EmpNo,Name,Gender,Height,Birthday,Mobile,Province,City,Department,Education,Salary FROM employee ORDER BY EmpNo");

    if(qryModel->lastError().isValid())
    {
        QMessageBox::critical(this,"错误","数据表查询错误,错误信息" + qryModel->lastError().text(),
                              QMessageBox::Ok,QMessageBox::NoButton);
        return ;
    }

    qryModel->setHeaderData(0,Qt::Horizontal,"工号");
    qryModel->setHeaderData(1,Qt::Horizontal,"姓名");
    qryModel->setHeaderData(2,Qt::Horizontal,"性别");
    qryModel->setHeaderData(3,Qt::Horizontal,"身高");
    qryModel->setHeaderData(4,Qt::Horizontal,"出生日期");
    qryModel->setHeaderData(5,Qt::Horizontal,"手机");
    qryModel->setHeaderData(6,Qt::Horizontal,"省份");
    qryModel->setHeaderData(7,Qt::Horizontal,"城市");
    qryModel->setHeaderData(8,Qt::Horizontal,"部门");
    qryModel->setHeaderData(9,Qt::Horizontal,"学历");
    qryModel->setHeaderData(10,Qt::Horizontal,"工资");

    theSelection = new QItemSelectionModel(qryModel);
    connect(theSelection,SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),
            this,SLOT(on_currentRowChanged(QModelIndex,QModelIndex)));
    ui->tableView->setModel(qryModel);
    ui->tableView->setSelectionModel(theSelection);
    //创建数据映射
    dataMapper = new QDataWidgetMapper();
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
    dataMapper->setModel(qryModel);

    dataMapper->addMapping(ui->dbSpinEmpNo,0);
    dataMapper->addMapping(ui->dbEditName,1);
    dataMapper->addMapping(ui->dbComboSex,2);
    dataMapper->addMapping(ui->dbSpinHeight,3);
    dataMapper->addMapping(ui->dbEditBirth,4);
    dataMapper->addMapping(ui->dbEditMobile,5);
    dataMapper->addMapping(ui->dbComboProvince,6);
    dataMapper->addMapping(ui->dbEditCity,7);
    dataMapper->addMapping(ui->dbComboDep,8);
    dataMapper->addMapping(ui->dbComboEdu,9);
    dataMapper->addMapping(ui->dbSpinSalary,10);

    dataMapper->toFirst();
    ui->actOpenDB->setEnabled(false);
}

void MainWindow::on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
    //记录行更改
    Q_UNUSED(previous);

    if(!current.isValid())
    {
        ui->dbLabPhoto->clear();
        return ;
    }

    dataMapper->setCurrentModelIndex(current);//更新数据映射的行号
    bool first = current.row() == 0;//是否是首记录
    bool last = current.row() == (qryModel->rowCount() - 1);//是否尾记录
    //更新action使能状态
    ui->actFirstRec->setEnabled(!first);
    ui->actPrevRec->setEnabled(!first);
    ui->actLastRec->setEnabled(!last);
    ui->actNextRec->setEnabled(!last);

    int curRecNo = theSelection->currentIndex().row();
    QSqlRecord curRec = qryModel->record(curRecNo);//获取当前记录
    int empNo = curRec.value("EmpNo").toInt();
    //查询empno字段的photo、memo
    QSqlQuery query;
    query.prepare("SELECT EmpNo,Photo,Memo from employee where EmpNo = :ID");
    query.bindValue(":ID",empNo);
    query.exec();
    query.first();

    QVariant va = query.value("Photo");

    if(!va.isValid())
    {
        ui->dbLabPhoto->clear();
    }
    else
    {
        //显示照片
        QByteArray data = va.toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->dbLabPhoto->setPixmap(pic.scaledToWidth(ui->dbLabPhoto->size().width()));
    }
    //显示备注
    QVariant va2 = query.value("Memo");
    ui->dbEditMemo->setPlainText(va2.toString());
}

void MainWindow::on_actFirstRec_triggered()
{
    //首记录
    dataMapper->toFirst();
    refreshTableView();
}


void MainWindow::refreshTableView()
{
    //刷新tableview当前选择行
    int index = dataMapper->currentIndex();
    QModelIndex curIndex = qryModel->index(index,1);
    theSelection->clearSelection();//清除当前选项
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}

void MainWindow::on_actPrevRec_triggered()
{
    //前一记录
    dataMapper->toPrevious();
    refreshTableView();
}

void MainWindow::on_actLastRec_triggered()
{
    //尾记录
    dataMapper->toLast();
    refreshTableView();
}

void MainWindow::on_actNextRec_triggered()
{
    //后一记录
    dataMapper->toNext();
    refreshTableView();
}
