#include "wdialog.h"
#include "ui_wdialog.h"

WDialog::WDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WDialog)
{
    ui->setupUi(this);
}

WDialog::~WDialog()
{
    delete ui;
}

void WDialog::setUpdateRecord(QSqlRecord &recData)
{
    //编辑记录,更新记录数据到界面
    mRecord = recData;
    ui->dbSpinEmpNo->setEnabled(false);//员工编号不允许编辑
    setWindowTitle("更新记录");
    //根据recData的数据更新界面
    ui->dbSpinEmpNo->setValue(recData.value("EmpNo").toInt());
    ui->dbEditName->setText(recData.value("Name").toString());
    ui->dbComboSex->setCurrentText(recData.value("Gender").toString());
    ui->dbSpinHeight->setValue(recData.value("Height").toFloat());
    ui->dbEditBirth->setDate(recData.value("Birthday").toDate());
    ui->dbEditMobile->setText(recData.value("Mobile").toString());
    ui->dbComboProvince->setCurrentText(recData.value("Province").toString());
    ui->dbEditCity->setText(recData.value("City").toString());
    ui->dbComboDep->setCurrentText(recData.value("Department").toString());
    ui->dbComboEdu->setCurrentText(recData.value("Education").toString());
    ui->dbSpinSalary->setValue(recData.value("Salary").toInt());
    ui->dbEditMemo->setPlainText(recData.value("Memo").toString());

    QVariant va = recData.value("Photo");

    if(!va.isValid())
    {
        ui->dbLabPhoto->clear();
    }
    else
    {
        QByteArray data = va.toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->dbLabPhoto->setPixmap(pic.scaledToWidth(ui->dbLabPhoto->size().width()));
    }
}

void WDialog::setInsertRecord(QSqlRecord &recData)
{
    //插入记录,无需更新界面显示,要存储recData的结构
    mRecord = recData;
    ui->dbSpinEmpNo->setEnabled(true);
    setWindowTitle("插入记录");
    ui->dbSpinEmpNo->setValue(recData.value("EmpNo").toInt());
}

QSqlRecord WDialog::getRecordData()
{
    //确定按钮后数据保存到mRecord
    mRecord.setValue("EmpNo",ui->dbSpinEmpNo->value());
    mRecord.setValue("Name",ui->dbEditName->text());
    mRecord.setValue("Gender",ui->dbComboSex->currentText());
    mRecord.setValue("Height",ui->dbSpinHeight->value());
    mRecord.setValue("Birthday",ui->dbEditBirth->date());
    mRecord.setValue("Mobile",ui->dbEditMobile->text());
    mRecord.setValue("Province",ui->dbComboProvince->currentText());
    mRecord.setValue("City",ui->dbEditCity->text());
    mRecord.setValue("Department",ui->dbComboDep->currentText());
    mRecord.setValue("Education",ui->dbComboEdu->currentText());
    mRecord.setValue("Salary",ui->dbSpinSalary->value());
    mRecord.setValue("Memo",ui->dbEditMemo->toPlainText());
    //照片编辑时已修改mRecord的Photo字段值
    return mRecord;
}

void WDialog::on_btnClearPhoto_clicked()
{
    //清除照片
    ui->dbLabPhoto->clear();
    mRecord.setNull("Photo");//Photo字段清空
}

void WDialog::on_btnSetPhoto_clicked()
{
    //设置照片
//    QString aFile = QFileDialog::getOpenFileName(this,"选择图片","","照片(*.jsp *.png)");

    QString aFile = "/Users/wangjiankang/Downloads/icons/appicon.png";

    if(aFile.isEmpty())
    {
        return ;
    }

    QByteArray data;
    QFile *file = new QFile(aFile);
    file->open(QIODevice::ReadOnly);
    data = file->readAll();
    file->close();
    mRecord.setValue("Photo",data);//图片保存到Photo字段
    QPixmap pic;
    pic.loadFromData(data);
    ui->dbLabPhoto->setPixmap(pic.scaledToWidth(ui->dbLabPhoto->size().width()));
}
