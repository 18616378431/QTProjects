#ifndef WDIALOG_H
#define WDIALOG_H

#include <QDialog>

namespace Ui {
class WDialog;
}

class WDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WDialog(QWidget *parent = 0);
    ~WDialog();

private:
    Ui::WDialog *ui;
};

#endif // WDIALOG_H
