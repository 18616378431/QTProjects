/********************************************************************************
** Form generated from reading UI file 'qwdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOG_H
#define UI_QWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QWDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBlue;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOk;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClose;

    void setupUi(QDialog *QWDialog)
    {
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName(QStringLiteral("QWDialog"));
        QWDialog->resize(547, 307);
        verticalLayout = new QVBoxLayout(QWDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(QWDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        chkBoxUnder = new QCheckBox(groupBox);
        chkBoxUnder->setObjectName(QStringLiteral("chkBoxUnder"));

        horizontalLayout_2->addWidget(chkBoxUnder);

        chkBoxItalic = new QCheckBox(groupBox);
        chkBoxItalic->setObjectName(QStringLiteral("chkBoxItalic"));

        horizontalLayout_2->addWidget(chkBoxItalic);

        chkBoxBold = new QCheckBox(groupBox);
        chkBoxBold->setObjectName(QStringLiteral("chkBoxBold"));

        horizontalLayout_2->addWidget(chkBoxBold);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QWDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        rBtnBlack = new QRadioButton(groupBox_2);
        rBtnBlack->setObjectName(QStringLiteral("rBtnBlack"));

        horizontalLayout_3->addWidget(rBtnBlack);

        rBtnRed = new QRadioButton(groupBox_2);
        rBtnRed->setObjectName(QStringLiteral("rBtnRed"));

        horizontalLayout_3->addWidget(rBtnRed);

        rBtnBlue = new QRadioButton(groupBox_2);
        rBtnBlue->setObjectName(QStringLiteral("rBtnBlue"));

        horizontalLayout_3->addWidget(rBtnBlue);


        verticalLayout->addWidget(groupBox_2);

        label = new QLabel(QWDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        plainTextEdit = new QPlainTextEdit(QWDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setEnabled(true);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnOk = new QPushButton(QWDialog);
        btnOk->setObjectName(QStringLiteral("btnOk"));

        horizontalLayout->addWidget(btnOk);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCancle = new QPushButton(QWDialog);
        btnCancle->setObjectName(QStringLiteral("btnCancle"));

        horizontalLayout->addWidget(btnCancle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnClose = new QPushButton(QWDialog);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(plainTextEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(chkBoxUnder, chkBoxItalic);
        QWidget::setTabOrder(chkBoxItalic, chkBoxBold);
        QWidget::setTabOrder(chkBoxBold, rBtnBlack);
        QWidget::setTabOrder(rBtnBlack, rBtnRed);
        QWidget::setTabOrder(rBtnRed, rBtnBlue);
        QWidget::setTabOrder(rBtnBlue, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, btnOk);
        QWidget::setTabOrder(btnOk, btnCancle);
        QWidget::setTabOrder(btnCancle, btnClose);

        retranslateUi(QWDialog);
        QObject::connect(btnCancle, SIGNAL(clicked()), QWDialog, SLOT(reject()));
        QObject::connect(btnClose, SIGNAL(clicked()), QWDialog, SLOT(close()));
        QObject::connect(btnOk, SIGNAL(clicked()), QWDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        QWDialog->setWindowTitle(QApplication::translate("QWDialog", "QWDialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QWDialog", "GroupBox", Q_NULLPTR));
        chkBoxUnder->setText(QApplication::translate("QWDialog", "Underline", Q_NULLPTR));
        chkBoxItalic->setText(QApplication::translate("QWDialog", "Italic", Q_NULLPTR));
        chkBoxBold->setText(QApplication::translate("QWDialog", "Bold", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QWDialog", "GroupBox", Q_NULLPTR));
        rBtnBlack->setText(QApplication::translate("QWDialog", "Black", Q_NULLPTR));
        rBtnRed->setText(QApplication::translate("QWDialog", "Red", Q_NULLPTR));
        rBtnBlue->setText(QApplication::translate("QWDialog", "Blue", Q_NULLPTR));
        label->setText(QApplication::translate("QWDialog", "\345\247\223\345\220\215(&N)", Q_NULLPTR));
        btnOk->setText(QApplication::translate("QWDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancle->setText(QApplication::translate("QWDialog", "\345\217\226\346\266\210(&N)", Q_NULLPTR));
        btnClose->setText(QApplication::translate("QWDialog", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWDialog: public Ui_QWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOG_H
