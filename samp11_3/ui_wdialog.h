/********************************************************************************
** Form generated from reading UI file 'wdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WDIALOG_H
#define UI_WDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WDialog
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QSpinBox *dbSpinEmpNo;
    QLabel *label_5;
    QLineEdit *dbEditName;
    QLabel *label_6;
    QComboBox *dbComboSex;
    QLabel *label_7;
    QSpinBox *dbSpinHeight;
    QLabel *label_8;
    QDateEdit *dbEditBirth;
    QLabel *label_9;
    QLineEdit *dbEditMobile;
    QLabel *label_10;
    QComboBox *dbComboProvince;
    QLabel *label_11;
    QLineEdit *dbEditCity;
    QLabel *label_12;
    QComboBox *dbComboDep;
    QLabel *label_13;
    QComboBox *dbComboEdu;
    QLabel *label_14;
    QSpinBox *dbSpinSalary;
    QLabel *label_15;
    QTextEdit *dbEditMemo;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_17;
    QLabel *dbLabPhoto;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnOk;
    QPushButton *btnClearPhoto;
    QPushButton *btnSetPhoto;
    QPushButton *btnCancel;

    void setupUi(QDialog *WDialog)
    {
        if (WDialog->objectName().isEmpty())
            WDialog->setObjectName(QStringLiteral("WDialog"));
        WDialog->resize(648, 477);
        formLayoutWidget = new QWidget(WDialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 381, 471));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        dbSpinEmpNo = new QSpinBox(formLayoutWidget);
        dbSpinEmpNo->setObjectName(QStringLiteral("dbSpinEmpNo"));
        dbSpinEmpNo->setMaximum(99999);

        formLayout->setWidget(0, QFormLayout::FieldRole, dbSpinEmpNo);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        dbEditName = new QLineEdit(formLayoutWidget);
        dbEditName->setObjectName(QStringLiteral("dbEditName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dbEditName);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        dbComboSex = new QComboBox(formLayoutWidget);
        dbComboSex->setObjectName(QStringLiteral("dbComboSex"));

        formLayout->setWidget(2, QFormLayout::FieldRole, dbComboSex);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        dbSpinHeight = new QSpinBox(formLayoutWidget);
        dbSpinHeight->setObjectName(QStringLiteral("dbSpinHeight"));

        formLayout->setWidget(3, QFormLayout::FieldRole, dbSpinHeight);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        dbEditBirth = new QDateEdit(formLayoutWidget);
        dbEditBirth->setObjectName(QStringLiteral("dbEditBirth"));

        formLayout->setWidget(4, QFormLayout::FieldRole, dbEditBirth);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        dbEditMobile = new QLineEdit(formLayoutWidget);
        dbEditMobile->setObjectName(QStringLiteral("dbEditMobile"));

        formLayout->setWidget(5, QFormLayout::FieldRole, dbEditMobile);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_10);

        dbComboProvince = new QComboBox(formLayoutWidget);
        dbComboProvince->setObjectName(QStringLiteral("dbComboProvince"));

        formLayout->setWidget(6, QFormLayout::FieldRole, dbComboProvince);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_11);

        dbEditCity = new QLineEdit(formLayoutWidget);
        dbEditCity->setObjectName(QStringLiteral("dbEditCity"));

        formLayout->setWidget(7, QFormLayout::FieldRole, dbEditCity);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_12);

        dbComboDep = new QComboBox(formLayoutWidget);
        dbComboDep->setObjectName(QStringLiteral("dbComboDep"));

        formLayout->setWidget(8, QFormLayout::FieldRole, dbComboDep);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_13);

        dbComboEdu = new QComboBox(formLayoutWidget);
        dbComboEdu->setObjectName(QStringLiteral("dbComboEdu"));

        formLayout->setWidget(9, QFormLayout::FieldRole, dbComboEdu);

        label_14 = new QLabel(formLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_14);

        dbSpinSalary = new QSpinBox(formLayoutWidget);
        dbSpinSalary->setObjectName(QStringLiteral("dbSpinSalary"));
        dbSpinSalary->setMaximum(99999);

        formLayout->setWidget(10, QFormLayout::FieldRole, dbSpinSalary);

        label_15 = new QLabel(formLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_15);

        dbEditMemo = new QTextEdit(formLayoutWidget);
        dbEditMemo->setObjectName(QStringLiteral("dbEditMemo"));
        dbEditMemo->setMaximumSize(QSize(300, 100));

        formLayout->setWidget(11, QFormLayout::FieldRole, dbEditMemo);

        gridLayoutWidget_2 = new QWidget(WDialog);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(390, 10, 101, 181));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(gridLayoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMaximumSize(QSize(16777215, 300));

        gridLayout_2->addWidget(label_17, 1, 0, 1, 1);

        dbLabPhoto = new QLabel(gridLayoutWidget_2);
        dbLabPhoto->setObjectName(QStringLiteral("dbLabPhoto"));
        dbLabPhoto->setMaximumSize(QSize(16777215, 100));

        gridLayout_2->addWidget(dbLabPhoto, 0, 0, 1, 1);

        gridLayoutWidget = new QWidget(WDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(500, 10, 141, 181));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnOk = new QPushButton(gridLayoutWidget);
        btnOk->setObjectName(QStringLiteral("btnOk"));

        gridLayout->addWidget(btnOk, 2, 0, 1, 1);

        btnClearPhoto = new QPushButton(gridLayoutWidget);
        btnClearPhoto->setObjectName(QStringLiteral("btnClearPhoto"));

        gridLayout->addWidget(btnClearPhoto, 1, 0, 1, 1);

        btnSetPhoto = new QPushButton(gridLayoutWidget);
        btnSetPhoto->setObjectName(QStringLiteral("btnSetPhoto"));

        gridLayout->addWidget(btnSetPhoto, 0, 0, 1, 1);

        btnCancel = new QPushButton(gridLayoutWidget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        gridLayout->addWidget(btnCancel, 3, 0, 1, 1);


        retranslateUi(WDialog);
        QObject::connect(btnOk, SIGNAL(clicked()), WDialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), WDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WDialog);
    } // setupUi

    void retranslateUi(QDialog *WDialog)
    {
        WDialog->setWindowTitle(QApplication::translate("WDialog", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("WDialog", "\345\267\245\345\217\267", Q_NULLPTR));
        label_5->setText(QApplication::translate("WDialog", "\345\247\223\345\220\215", Q_NULLPTR));
        label_6->setText(QApplication::translate("WDialog", "\346\200\247\345\210\253", Q_NULLPTR));
        dbComboSex->clear();
        dbComboSex->insertItems(0, QStringList()
         << QApplication::translate("WDialog", "\347\224\2671", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("WDialog", "\350\272\253\351\253\230", Q_NULLPTR));
        label_8->setText(QApplication::translate("WDialog", "\345\207\272\347\224\237\346\227\245\346\234\237", Q_NULLPTR));
        dbEditBirth->setDisplayFormat(QApplication::translate("WDialog", "yyyy-M-d", Q_NULLPTR));
        label_9->setText(QApplication::translate("WDialog", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        label_10->setText(QApplication::translate("WDialog", "\345\207\272\347\224\237\347\234\201\344\273\275", Q_NULLPTR));
        dbComboProvince->clear();
        dbComboProvince->insertItems(0, QStringList()
         << QApplication::translate("WDialog", "\346\271\226\345\215\2271", Q_NULLPTR)
         << QApplication::translate("WDialog", "\346\262\263\345\214\227", Q_NULLPTR)
        );
        label_11->setText(QApplication::translate("WDialog", "\345\237\216\345\270\202", Q_NULLPTR));
        label_12->setText(QApplication::translate("WDialog", "\351\203\250\351\227\250", Q_NULLPTR));
        dbComboDep->clear();
        dbComboDep->insertItems(0, QStringList()
         << QApplication::translate("WDialog", "\351\224\200\345\224\256\351\203\2501", Q_NULLPTR)
        );
        label_13->setText(QApplication::translate("WDialog", "\345\255\246\345\216\206", Q_NULLPTR));
        dbComboEdu->clear();
        dbComboEdu->insertItems(0, QStringList()
         << QApplication::translate("WDialog", "\345\244\247\345\255\246\346\234\254\347\247\2211", Q_NULLPTR)
        );
        label_14->setText(QApplication::translate("WDialog", "\345\267\245\350\265\204", Q_NULLPTR));
        label_15->setText(QApplication::translate("WDialog", "\345\244\207\346\263\250", Q_NULLPTR));
        label_17->setText(QApplication::translate("WDialog", "photo", Q_NULLPTR));
        dbLabPhoto->setText(QApplication::translate("WDialog", "\347\205\247\347\211\207", Q_NULLPTR));
        btnOk->setText(QApplication::translate("WDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        btnClearPhoto->setText(QApplication::translate("WDialog", "\346\270\205\351\231\244\347\205\247\347\211\207", Q_NULLPTR));
        btnSetPhoto->setText(QApplication::translate("WDialog", "\345\257\274\345\205\245\347\205\247\347\211\207", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("WDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WDialog: public Ui_WDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WDIALOG_H
