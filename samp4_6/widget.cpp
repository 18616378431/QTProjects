#include "widget.h"
#include "ui_widget.h"
#include <QTextBlock>
#include <QMenu>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnIniItems_clicked()
{
    //初始化列表按钮
    QIcon icon;
    icon.addFile(":imgs/AppIcon.icns");
    ui->comboBox1->clear();
    for(int i = 0;i < 20;i++)
    {
        ui->comboBox1->addItem(icon,QString::asprintf("Item %d",i));//带图标
        ui->comboBox1->addItem(QString::asprintf("Item %d",i));//不带图标
    }
}

void Widget::on_btnClear_clicked()
{
    ui->comboBox1->clear();
}

void Widget::on_btnAddItems_clicked()
{
    ui->comboBox1->clear();
    QStringList strList;
    strList << "北京" << "上海" << "天津" << "河北省" << "山东省" << "山西省";
    ui->comboBox1->addItems(strList);
}

void Widget::on_btnIni2_clicked()
{
    QMap<QString,int> City_Zone;
    City_Zone.insert("北京",10);
    City_Zone.insert("上海",21);
    City_Zone.insert("天津",22);
    City_Zone.insert("大连",411);
    City_Zone.insert("锦州",416);
    City_Zone.insert("徐州",516);
    City_Zone.insert("福州",591);
    City_Zone.insert("青岛",532);

    ui->comboBox2->clear();
    foreach(const QString &str,City_Zone.keys())
    {
        ui->comboBox2->addItem(str,City_Zone.value(str));
    }
}

void Widget::on_comboBox1_currentIndexChanged(const QString &arg1)
{
    ui->plainTextEdit->appendPlainText(arg1);
}

void Widget::on_comboBox2_currentIndexChanged(const QString &arg1)
{
    QString zone = ui->comboBox2->currentData().toString();//项关联的数据
    ui->plainTextEdit->appendPlainText(arg1 + ":区号=" + zone);
}

void Widget::on_btnAddToCombo1_clicked()
{
    //QPlainTextEdit内容逐行添加到comboBox1
    QTextDocument *doc = ui->plainTextEdit->document();//文本对象
    int cnt = doc->blockCount();//一个回车是一个block
    QIcon icon(":imgs/AppIcon.icns");
    ui->comboBox1->clear();
    for(int i = 0;i < cnt;i++)
    {
        QTextBlock textLine = doc->findBlockByNumber(i);
        QString str = textLine.text();
        ui->comboBox1->addItem(icon,str);
    }
}



void Widget::on_plainTextEdit_customContextMenuRequested(const QPoint &pos)
{
    //创建并显示标准弹出式菜单
    QMenu *menu = ui->plainTextEdit->createStandardContextMenu();
    menu->exec(pos);
}

void Widget::on_btnClearPlainTextEdit_clicked()
{
    ui->plainTextEdit->clear();
}

void Widget::on_checkBox_clicked(bool checked)
{
    ui->plainTextEdit->setEnabled(checked);
}

void Widget::on_chkReadOnly_clicked(bool checked)
{
    ui->plainTextEdit->setEnabled(!checked);
}
