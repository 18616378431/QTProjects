#include "qformdoc.h"
#include "ui_qformdoc.h"

QFormDoc::QFormDoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QFormDoc)
{
    ui->setupUi(this);
    QToolBar *locToolBar = new QToolBar("文档",this);//创建工具栏
    locToolBar->addAction(ui->actOpen);
    locToolBar->addAction(ui->actFont);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actCut);
    locToolBar->addAction(ui->actCopy);
    locToolBar->addAction(ui->actPaste);
    locToolBar->addAction(ui->actUndo);
    locToolBar->addAction(ui->actRedo);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actClose);
    locToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    QVBoxLayout *Layout = new QVBoxLayout();
    Layout->addWidget(locToolBar);//设置工具栏和编辑器上下布局
    Layout->addWidget(ui->plainTextEdit);
    Layout->setContentsMargins(2,2,2,2);//减小边框的宽度
    Layout->setSpacing(2);
    this->setLayout(Layout);//设置布局
}

QFormDoc::~QFormDoc()
{
    QMessageBox::information(this,"消息","QFormDoc对象被删除和释放");
    delete ui;
}
