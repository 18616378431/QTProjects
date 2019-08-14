/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnStop;
    QPushButton *btnStart;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;
    QLabel *LabTA;
    QLabel *LabTB;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(583, 413);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 561, 381));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 541, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnStop = new QPushButton(gridLayoutWidget);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setAutoDefault(false);

        gridLayout->addWidget(btnStop, 0, 1, 1, 1);

        btnStart = new QPushButton(gridLayoutWidget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setAutoDefault(false);

        gridLayout->addWidget(btnStart, 0, 0, 1, 1);

        btnClear = new QPushButton(gridLayoutWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setAutoDefault(false);

        gridLayout->addWidget(btnClear, 0, 2, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 80, 541, 261));
        LabTA = new QLabel(groupBox);
        LabTA->setObjectName(QStringLiteral("LabTA"));
        LabTA->setGeometry(QRect(20, 360, 211, 16));
        LabTB = new QLabel(groupBox);
        LabTB->setObjectName(QStringLiteral("LabTB"));
        LabTB->setGeometry(QRect(320, 360, 221, 20));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Dialog", "\347\272\277\347\250\213", Q_NULLPTR));
        btnStop->setText(QApplication::translate("Dialog", "\347\273\223\346\235\237\347\272\277\347\250\213", Q_NULLPTR));
        btnStart->setText(QApplication::translate("Dialog", "\345\220\257\345\212\250\347\272\277\347\250\213", Q_NULLPTR));
        btnClear->setText(QApplication::translate("Dialog", "\346\270\205\347\251\272\346\226\207\346\234\254", Q_NULLPTR));
        LabTA->setText(QApplication::translate("Dialog", "ThreadA:", Q_NULLPTR));
        LabTB->setText(QApplication::translate("Dialog", "ThreadB:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
