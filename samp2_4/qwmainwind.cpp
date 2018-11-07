#include "qwmainwind.h"
#include "ui_qwmainwind.h"

QWMainWind::QWMainWind(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QWMainWind)
{
    ui->setupUi(this);
    iniUI();
    iniSignalSlots();
}

QWMainWind::~QWMainWind()
{
    delete ui;
}

void QWMainWind::iniUI()
{
    //状态栏上添加组件
    fLabCurFile = new QLabel;
    fLabCurFile->setMinimumWidth(150);
    fLabCurFile->setText("当前文件:");
    ui->statusBar->addWidget(fLabCurFile);//添加到状态栏

    progressBar1 = new QProgressBar;
    progressBar1->setMaximumWidth(200);
    progressBar1->setMinimum(5);
    progressBar1->setMaximum(50);
    progressBar1->setValue(ui->txtEdit->font().pointSize());
    ui->statusBar->addWidget(progressBar1);//添加到状态栏

    //工具栏上添加组件
    spinFontSize = new QSpinBox;//文字大小
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->txtEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->mainToolBar->addWidget(new QLabel(" 字体大小 "));
    ui->mainToolBar->addWidget(spinFontSize);//SpinBox添加到工具栏

    ui->mainToolBar->addSeparator();//分割条
    ui->mainToolBar->addWidget(new QLabel(" 字体 "));
    comboBox = new QFontComboBox;
    comboBox->setMinimumWidth(150);
    ui->mainToolBar->addWidget(comboBox);//添加到工具栏

    setCentralWidget(ui->txtEdit);
}

void QWMainWind::on_actFontBold_triggered(bool checked)
{
    QTextCharFormat fmt;

    fmt = ui->txtEdit->currentCharFormat();

    if(checked)
    {
        fmt.setFontWeight(QFont::Bold);
    }
    else
    {
        fmt.setFontWeight(QFont::Normal);
    }
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_actFontItalic_triggered(bool checked)
{
    QTextCharFormat fmt;

    fmt = ui->txtEdit->currentCharFormat();

    if(checked)
    {
        fmt.setFontWeight(QFont::Bold);
    }
    else
    {
        fmt.setFontWeight(QFont::Normal);
    }
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_actFontUnder_triggered(bool checked)
{
    QTextCharFormat fmt;

    fmt = ui->txtEdit->currentCharFormat();

    if(checked)
    {
        fmt.setFontWeight(QFont::Bold);
    }
    else
    {
        fmt.setFontWeight(QFont::Normal);
    }
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_txtEdit_copyAvailable(bool b)
{
    //更新cut、copy、paste的enabled属性
    ui->actCut->setEnabled(b);
    ui->actCopy->setEnabled(b);
    ui->actPaste->setEnabled(ui->txtEdit->canPaste());
}

void QWMainWind::on_txtEdit_selectionChanged()
{
    //更新粗体、斜体、下划线3种action的checked属性
    QTextCharFormat fmt;
    fmt = ui->txtEdit->currentCharFormat();//获取文字的格式
    ui->actFontItalic->setChecked(fmt.fontItalic());//是否斜体
    ui->actFontBold->setChecked(fmt.font().bold());//是否粗体
    ui->actFontUnder->setChecked(fmt.fontUnderline());//是否有下划线
}

//代码实现的界面信号与槽的关联
void QWMainWind::iniSignalSlots()
{
    //信号与槽的关联
    connect(spinFontSize,SIGNAL(valueChanged(int)),this,SLOT(on_spinBoxFontSize_valueChanged(int)));
    connect(comboBox,SIGNAL(currentIndexChanged(const QString &)),this,SLOT(on_comboFont_currentIndexChanged(const QString &)));
}

void QWMainWind::on_spinBoxFontSize_valueChanged(int aFontSize)
{
    //改变字体大小的SpinBox
    QTextCharFormat fmt;

    fmt.setFontPointSize(aFontSize);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
    progressBar1->setValue(aFontSize);
}

void QWMainWind::on_comboFont_currentIndexChanged(const QString &arg1)
{
    //FontComboBox的响应,选择字体名称
    QTextCharFormat fmt;

    fmt.setFontFamily(arg1);//设置字体名称
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}
