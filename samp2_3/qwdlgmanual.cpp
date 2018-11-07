#include "qwdlgmanual.h"

QWDlgManual::QWDlgManual(QWidget *parent)
    : QDialog(parent)
{
    iniUI();
    iniSignalSlots();
    setWindowTitle("Form Created Manually");
}

QWDlgManual::~QWDlgManual()
{

}

void QWDlgManual::on_chkBoxUnder(bool checked)
{
    QFont font = txtEdit->font();
    font.setUnderline(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::on_chkBoxItalic(bool checked)
{
    QFont font = txtEdit->font();
    font.setItalic(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::on_chkBoxBold(bool checked)
{
    QFont font = txtEdit->font();
    font.setBold(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::setTextFontColor()
{
    QPalette plet;

    if(rBtnBlack->isChecked())
    {
        plet.setColor(QPalette::Text,Qt::black);
    }
    else if(rBtnRed->isChecked())
    {
        plet.setColor(QPalette::Text,Qt::red);
    }
    else if(rBtnBlue->isChecked())
    {
        plet.setColor(QPalette::Text,Qt::blue);
    }

    txtEdit->setPalette(plet);
}

void QWDlgManual::iniUI()
{
    //create checkbox and layout
    chkBoxUnder = new QCheckBox(tr("Underline"));
    chkBoxItalic = new QCheckBox(tr("Italic"));
    chkBoxBold = new QCheckBox(tr("Bold"));

    QHBoxLayout *HLay1 = new QHBoxLayout;
    HLay1->addWidget(chkBoxUnder);
    HLay1->addWidget(chkBoxItalic);
    HLay1->addWidget(chkBoxBold);

    //Black,Red,Blue
    rBtnBlack = new QRadioButton(tr("Black"));
    rBtnBlack->setChecked(true);

    rBtnRed = new QRadioButton(tr("Red"));
    rBtnBlue = new QRadioButton(tr("Blue"));

    QHBoxLayout *HLay2 = new QHBoxLayout;
    HLay2->addWidget(rBtnBlack);
    HLay2->addWidget(rBtnRed);
    HLay2->addWidget(rBtnBlue);

    //PushButton OK,Cancle,Close
    btnOk = new QPushButton(tr("确定"));
    btnCancle = new QPushButton(tr("取消"));
    btnClose = new QPushButton(tr("退出"));

    QHBoxLayout *HLay3 = new QHBoxLayout;
    HLay3->addStretch();
    HLay3->addWidget(btnOk);
    HLay3->addWidget(btnCancle);
    HLay3->addStretch();
    HLay3->addWidget(btnClose);

    //QPlainTextEdit
    txtEdit = new QPlainTextEdit;
    txtEdit->setPlainText("Hello World\n\nIt is my demo");
    QFont font = txtEdit->font();
    font.setPointSize(20);
    txtEdit->setFont(font);

    //create layout
    QVBoxLayout *VLay = new QVBoxLayout;
    VLay->addLayout(HLay1);
    VLay->addLayout(HLay2);
    VLay->addWidget(txtEdit);
    VLay->addLayout(HLay3);
    setLayout(VLay);
}

void QWDlgManual::iniSignalSlots()
{
    //color QRadioButton clicked() signal connect with setTextFontColor() slot
    connect(rBtnBlack,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(rBtnRed,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(rBtnBlue,SIGNAL(clicked()),this,SLOT(setTextFontColor()));

    //font QCheckBox clicked(bool) signal connect with its slot func
    connect(chkBoxUnder,SIGNAL(clicked(bool)),this,SLOT(on_chkBoxUnder(bool)));
    connect(chkBoxItalic,SIGNAL(clicked(bool)),this,SLOT(on_chkBoxItalic(bool)));
    connect(chkBoxBold,SIGNAL(clicked(bool)),this,SLOT(on_chkBoxBold(bool)));

    //QPushButton clicked() signal connect with its slot func
    connect(btnOk,SIGNAL(clicked()),this,SLOT(accept()));
    connect(btnCancle,SIGNAL(clicked()),this,SLOT(reject()));
    connect(btnClose,SIGNAL(clicked()),this,SLOT(close()));

}


