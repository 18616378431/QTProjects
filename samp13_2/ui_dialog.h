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
    QPushButton *btnDiceBegin;
    QPushButton *btnDiceEnd;
    QPushButton *btnStopThread;
    QPushButton *btnStartedThread;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;
    QLabel *LabA;
    QLabel *LabPic;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(610, 422);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 581, 401));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 561, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnDiceBegin = new QPushButton(gridLayoutWidget);
        btnDiceBegin->setObjectName(QStringLiteral("btnDiceBegin"));
        btnDiceBegin->setAutoDefault(false);

        gridLayout->addWidget(btnDiceBegin, 0, 1, 1, 1);

        btnDiceEnd = new QPushButton(gridLayoutWidget);
        btnDiceEnd->setObjectName(QStringLiteral("btnDiceEnd"));
        btnDiceEnd->setAutoDefault(false);

        gridLayout->addWidget(btnDiceEnd, 0, 2, 1, 1);

        btnStopThread = new QPushButton(gridLayoutWidget);
        btnStopThread->setObjectName(QStringLiteral("btnStopThread"));
        btnStopThread->setAutoDefault(false);

        gridLayout->addWidget(btnStopThread, 0, 3, 1, 1);

        btnStartedThread = new QPushButton(gridLayoutWidget);
        btnStartedThread->setObjectName(QStringLiteral("btnStartedThread"));
        btnStartedThread->setAutoDefault(false);

        gridLayout->addWidget(btnStartedThread, 0, 0, 1, 1);

        btnClear = new QPushButton(gridLayoutWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setAutoDefault(false);

        gridLayout->addWidget(btnClear, 0, 4, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 80, 301, 271));
        LabA = new QLabel(groupBox);
        LabA->setObjectName(QStringLiteral("LabA"));
        LabA->setGeometry(QRect(20, 365, 291, 21));
        LabPic = new QLabel(groupBox);
        LabPic->setObjectName(QStringLiteral("LabPic"));
        LabPic->setGeometry(QRect(320, 80, 241, 261));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Dialog", "\347\272\277\347\250\213", Q_NULLPTR));
        btnDiceBegin->setText(QApplication::translate("Dialog", "\345\274\200\345\247\213", Q_NULLPTR));
        btnDiceEnd->setText(QApplication::translate("Dialog", "\346\232\202\345\201\234", Q_NULLPTR));
        btnStopThread->setText(QApplication::translate("Dialog", "\347\273\223\346\235\237\347\272\277\347\250\213", Q_NULLPTR));
        btnStartedThread->setText(QApplication::translate("Dialog", "\345\220\257\345\212\250\347\272\277\347\250\213", Q_NULLPTR));
        btnClear->setText(QApplication::translate("Dialog", "\346\270\205\347\251\272\346\226\207\346\234\254", Q_NULLPTR));
        LabA->setText(QApplication::translate("Dialog", "Thread \347\212\266\346\200\201:", Q_NULLPTR));
        LabPic->setText(QApplication::translate("Dialog", "Pic", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
