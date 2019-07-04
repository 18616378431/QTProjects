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
