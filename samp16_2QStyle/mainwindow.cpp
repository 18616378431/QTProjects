#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRegExp regExp(".(.*)\\+?Style");
    QString defaultStyle = QApplication::style()->metaObject()->className();
    ui->statusBar->showMessage(defaultStyle);
    if(regExp.exactMatch(defaultStyle))
    {
        defaultStyle = regExp.cap(1);
    }
    ui->comboSysStyle->addItems(QStyleFactory::keys());
    ui->comboSysStyle->setCurrentIndex(ui->comboSysStyle->findText(defaultStyle,Qt::MatchContains));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actQuit_triggered()
{
    this->close();
}

void MainWindow::on_comboSysStyle_currentIndexChanged(const QString &arg1)
{
    //样式表切换
    QStyle *style = QStyleFactory::create(arg1);
    qApp->setStyle(style);
    ui->statusBar->showMessage(style->metaObject()->className());
}

void MainWindow::on_btnNormal_clicked()
{
    //取消所有样式表
    qApp->setStyleSheet("");
}

void MainWindow::on_btnStyleSheet_clicked()
{
    //应用样式表
    this->setStyleSheet("QPlainTextEdit{"
                "color: blue;"
                "font: 13pt '宋体';}"
                "QPushButton:hover{background-color:lime;}"
                "QLineEdit{ border : 2px groove red;"
                "background-color: rgb(170,255,127);"
                "border-radius: 6px;}"
                "QCheckBox:checked{color: red;}"
                "QRadioButton:checked{color: red;}"
                );
}
