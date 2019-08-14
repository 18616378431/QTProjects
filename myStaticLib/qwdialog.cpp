#include "qwdialog.h"
#include "ui_qwdialog.h"

QWDialog::QWDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QWDialog)
{
    ui->setupUi(this);
    //“线型”ComboBox的选择项设置
    ui->comboPenStyle->clear();
    ui->comboPenStyle->addItem("NoPen",0);
    ui->comboPenStyle->addItem("SolidLine",1);
    ui->comboPenStyle->addItem("DashLine",2);
    ui->comboPenStyle->addItem("DotLine",3);
    ui->comboPenStyle->addItem("DashDotLine",4);
    ui->comboPenStyle->addItem("DashDotDotLine",5);
    ui->comboPenStyle->addItem("CustomDashLine",6);
}

QWDialog::~QWDialog()
{
    delete ui;
}

QPen QWDialog::getPen(QPen iniPen, bool &ok)
{
    //静态函数,获取pen
    QWDialog *Dlg = new QWDialog;//创建一个对话框
    Dlg->setPen(iniPen);//设置初始化pen

    QPen pen;
    int ret = Dlg->exec();//弹出对话框

    if(ret == QDialog::Accepted)
    {
        pen = Dlg->getPen();
        ok = true;
    }
    else
    {
        pen = iniPen;
        ok = false;
    }

    delete Dlg;//删除对话框对象

    return pen;
}

void QWDialog::setPen(QPen pen)
{
    //设置pen,并刷新显示界面
    m_pen = pen;
    ui->spinWidth->setValue(pen.width());//线宽
    int i = static_cast<int>(pen.style());//枚举转换为整形
    ui->comboPenStyle->setCurrentIndex(i);
    QColor color  = pen.color();
    ui->btnColor->setAutoFillBackground(true);//设置颜色按钮的背景色
    QString str = QString::asprintf("background-color:rgb(%d,%d,%d);",
                                    color.red(),color.green(),color.blue());
    ui->btnColor->setStyleSheet(str);
}

QPen QWDialog::getPen()
{
    //获得设置的属性
    m_pen.setStyle(Qt::PenStyle(ui->comboPenStyle->currentIndex()));//线型
    m_pen.setWidth(ui->spinWidth->value());//线宽
    QColor color = ui->btnColor->palette().color(QPalette::Button);
    m_pen.setColor(color);

    return m_pen;
}

void QWDialog::on_btnColor_clicked()
{
    //获取颜色
    QColor color = QColorDialog::getColor();

    if(color.isValid())
    {
        //用样式表设置QPushButton的背景色
        QString str=QString::asprintf("background-color: rgb(%d, %d, %d);",
                                      color.red(),color.green(),color.blue());
        ui->btnColor->setStyleSheet(str);
    }
}
