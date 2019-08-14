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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *chkOnlyIP4;
    QPushButton *btnLookup;
    QPushButton *btnGetHostInfo;
    QPushButton *btnALLInterface;
    QPushButton *btnDetail;
    QLineEdit *editHost;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(598, 426);
        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 561, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        chkOnlyIP4 = new QCheckBox(gridLayoutWidget);
        chkOnlyIP4->setObjectName(QStringLiteral("chkOnlyIP4"));

        gridLayout->addWidget(chkOnlyIP4, 1, 0, 1, 1);

        btnLookup = new QPushButton(gridLayoutWidget);
        btnLookup->setObjectName(QStringLiteral("btnLookup"));
        btnLookup->setAutoDefault(false);

        gridLayout->addWidget(btnLookup, 2, 0, 1, 1);

        btnGetHostInfo = new QPushButton(gridLayoutWidget);
        btnGetHostInfo->setObjectName(QStringLiteral("btnGetHostInfo"));
        btnGetHostInfo->setAutoDefault(false);

        gridLayout->addWidget(btnGetHostInfo, 0, 0, 1, 1);

        btnALLInterface = new QPushButton(gridLayoutWidget);
        btnALLInterface->setObjectName(QStringLiteral("btnALLInterface"));
        btnALLInterface->setAutoDefault(false);

        gridLayout->addWidget(btnALLInterface, 1, 1, 1, 1);

        btnDetail = new QPushButton(gridLayoutWidget);
        btnDetail->setObjectName(QStringLiteral("btnDetail"));
        btnDetail->setAutoDefault(false);

        gridLayout->addWidget(btnDetail, 0, 1, 1, 1);

        editHost = new QLineEdit(gridLayoutWidget);
        editHost->setObjectName(QStringLiteral("editHost"));

        gridLayout->addWidget(editHost, 2, 1, 1, 1);

        btnClear = new QPushButton(gridLayoutWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setAutoDefault(false);

        gridLayout->addWidget(btnClear, 3, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 240, 561, 171));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        chkOnlyIP4->setText(QApplication::translate("Dialog", "\345\217\252\346\230\276\347\244\272IPv4\347\232\204\345\215\217\350\256\256\345\234\260\345\235\200", Q_NULLPTR));
        btnLookup->setText(QApplication::translate("Dialog", "QHostInfo \346\237\245\346\211\276\345\237\237\345\220\215\347\232\204IP\345\234\260\345\235\200", Q_NULLPTR));
        btnGetHostInfo->setText(QApplication::translate("Dialog", "QHostInfo \350\216\267\345\217\226\346\234\254\346\234\272\344\270\273\346\234\272\345\220\215\345\222\214IP\345\234\260\345\235\200", Q_NULLPTR));
        btnALLInterface->setText(QApplication::translate("Dialog", "QNetworkInterface::allInterfaces()", Q_NULLPTR));
        btnDetail->setText(QApplication::translate("Dialog", "QNetworkInterface::allAddresses()", Q_NULLPTR));
        editHost->setText(QApplication::translate("Dialog", "www.163.com", Q_NULLPTR));
        btnClear->setText(QApplication::translate("Dialog", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
