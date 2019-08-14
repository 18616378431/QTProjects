#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>

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

void MainWindow::on_actOpenDB_triggered()
{
    //打开数据库
//    QString aFile = QFileDialog::getOpenFileName(this,"打开数据库","","选择数据库(*.db3)");
    QString aFile = "/Users/wangjiankang/Documents/QTProjects/sqlite/demodb.db3";

    if(aFile.isEmpty())
    {
        QMessageBox::warning(this,"错误","打开文件出错",QMessageBox::Ok,QMessageBox::NoButton);
        return ;
    }

    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);

    if(!DB.open())
    {
        QMessageBox::information(this,"错误","数据库打开失败",QMessageBox::Ok,QMessageBox::NoButton);
        return ;
    }

    openTable();
}

void MainWindow::openTable()
{
    //打开数据表
    qryModel = new QSqlQueryModel(this);
    theSelection = new QItemSelectionModel(qryModel);
    qryModel->setQuery("select EmpNo,Name,Gender,Height,Birthday,Mobile,Province,City,Department,Education,Salary from employee order by EmpNo");

    if(qryModel->lastError().isValid())
    {
        QMessageBox::information(this,"错误","数据表查询错误,错误信息" + qryModel->lastError().text(),QMessageBox::Ok,QMessageBox::NoButton);
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

    ui->tableView->setModel(qryModel);
    ui->tableView->setSelectionModel(theSelection);

    ui->actOpenDB->setEnabled(true);
    ui->actInsertRec->setEnabled(true);
    ui->actEditRec->setEnabled(true);
    ui->actDeleteRec->setEnabled(true);
    ui->actScan->setEnabled(true);
}

void MainWindow::on_actEditRec_triggered()
{
    //编辑记录
    int curRecNo = theSelection->currentIndex().row();
    updateRecord(curRecNo);
}

void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    //双击记录
    int curRecNo = index.row();
    updateRecord(curRecNo);
}

void MainWindow::updateRecord(int recNo)
{
    //更新记录
    QSqlRecord curRec = qryModel->record(recNo);//获取当前记录
    int empNo = curRec.value("EmpNo").toInt();//获取EmpNo
    QSqlQuery query;
    query.prepare("select * from employee where EmpNo = :ID");
    query.bindValue(":ID",empNo);
    query.exec();
    query.first();

    if(!query.isValid())//是否为有效记录
    {
        return ;
    }

    curRec = query.record();
    WDialog *dataDialog = new WDialog(this);
    Qt::WindowFlags flags = dataDialog->windowFlags();
    dataDialog->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint);
    dataDialog->setUpdateRecord(curRec);//调用对话框函数更新数据和界面
    int ret = dataDialog->exec();

    if(ret == QDialog::Accepted)//OK
    {
        QSqlRecord recData = dataDialog->getRecordData();//获取对话框返回记录
        query.prepare("update employee set "
                      "Name = :Name,"
                      "Gender = :Gender,"
                      "Height = :Height,"
                      "Birthday = :Birthday,"
                      "Mobile = :Mobile,"
                      "Province = :Province,"
                      "City = :City,"
                      "Department = :Department,"
                      "Education = :Education,"
                      "Salary = :Salary,"
                      "Memo = :Memo,"
                      "Photo = :Photo "
                      "where EmpNo = :ID");
        query.bindValue(":Name",recData.value("Name"));
        query.bindValue(":Gender",recData.value("Gender"));
        query.bindValue(":Height",recData.value("Height"));
        query.bindValue(":Birthday",recData.value("Birthday"));
        query.bindValue(":Mobile",recData.value("Mobile"));
        query.bindValue(":Province",recData.value("Province"));
        query.bindValue(":City",recData.value("City"));
        query.bindValue(":Department",recData.value("Department"));
        query.bindValue(":Education",recData.value("Education"));
        query.bindValue(":Salary",recData.value("Salary"));
        query.bindValue(":Memo",recData.value("Memo"));
        query.bindValue(":Photo",recData.value("Photo"));
        query.bindValue(":ID",empNo);

        if(!query.exec())
        {
            QMessageBox::critical(this,"错误","记录更新错误\n" + query.lastError().text(),QMessageBox::Ok,QMessageBox::NoButton);
        }
        else
        {
            qryModel->query().exec();
        }
    }
    delete dataDialog;
}

void MainWindow::on_actInsertRec_triggered()
{
    //插入记录
    QSqlQuery query;
    query.exec("select * from employee where EmpNo = -1");//只查询字段信息
    QSqlRecord curRec = query.record();//获取当前记录,空记录
    curRec.setValue("EmpNo",qryModel->rowCount() + 3000);

    WDialog *dataDialog = new WDialog(this);
    Qt::WindowFlags flags = dataDialog->windowFlags();
    dataDialog->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint);
    dataDialog->setInsertRecord(curRec);//插入记录,更新界面显示
    int ret = dataDialog->exec();//模态方式显示对话框
    if(ret == QDialog::Accepted)
    {
        QSqlRecord recData = dataDialog->getRecordData();
        query.prepare("insert into employee "
                       "(EmpNo,Name,Gender,Height,Birthday,Mobile,Province,City,Department,"
                      "Education,Salary,Memo,Photo) "
                      "values(:EmpNo,:Name,:Gender,:Height,:Birthday,:Mobile,:Province,:City,:Department,"
                      ":Education,:Salary,:Memo,:Photo)");

        query.bindValue(":EmpNo",recData.value("EmpNo"));
        query.bindValue(":Name",recData.value("Name"));
        query.bindValue(":Gender",recData.value("Gender"));
        query.bindValue(":Height",recData.value("Height"));
        query.bindValue(":Birthday",recData.value("Birthday"));
        query.bindValue(":Mobile",recData.value("Mobile"));
        query.bindValue(":Province",recData.value("Province"));
        query.bindValue(":City",recData.value("City"));
        query.bindValue(":Department",recData.value("Department"));
        query.bindValue(":Education",recData.value("Education"));
        query.bindValue(":Salary",recData.value("Salary"));
        query.bindValue(":Memo",recData.value("Memo"));
        query.bindValue(":Photo",recData.value("Photo"));

        if(!query.exec())
        {
            QMessageBox::critical(this,"错误","插入记录错误\n" + query.lastError().text(),
                                  QMessageBox::Ok,QMessageBox::NoButton);
        }
        else
        {
            //重新查询 更新tableview
            qryModel->setQuery("SELECT empNo, Name, Gender, Height, Birthday, Mobile, Province, City, Department, "
                                   " Education, Salary FROM employee order by empNo");
            qryModel->query().exec();
        }
    }
    delete dataDialog;
}

void MainWindow::on_actDeleteRec_triggered()
{
    //删除记录
    int curRecNo = theSelection->currentIndex().row();

    QSqlRecord curRec = qryModel->record(curRecNo);

    if(curRec.isEmpty())
    {
        return ;
    }

    int empNo = curRec.value("EmpNo").toInt();
    QSqlQuery query;
    query.prepare("delete from employee where EmpNo = :ID");
    query.bindValue(":ID",empNo);
    if(!query.exec())
    {
        QMessageBox::critical(this,"错误","删除记录出现错误\n" + query.lastError().text(),
                              QMessageBox::Ok,QMessageBox::NoButton);
    }
    else
    {
        qryModel->query().exec();
    }

}

void MainWindow::on_actScan_triggered()
{
    //涨工资
    QSqlQuery qryEmptyList;
    qryEmptyList.exec("select EmpNo,Salary from employee order by EmpNo");
    qryEmptyList.first();

    QSqlQuery qryUpdate;
    qryUpdate.prepare("update employee set Salary = :Salary where EmpNo = :ID");

    while(qryEmptyList.isValid())
    {
        int empID = qryEmptyList.value("EmpNo").toInt();
        float salary = qryEmptyList.value("Salary").toFloat();
        salary += 1000;

        qryUpdate.bindValue(":ID",empID);
        qryUpdate.bindValue(":Salary",salary);
        qryUpdate.exec();

        if(!qryEmptyList.next())
        {
            break;
        }
    }
    qryModel->query().exec();
    QMessageBox::information(this,"提示","涨工资计算完毕",
                             QMessageBox::Ok,QMessageBox::NoButton);
}
