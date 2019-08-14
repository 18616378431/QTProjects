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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboPenStyle;
    QLabel *label_3;
    QPushButton *btnColor;
    QLabel *label_2;
    QSpinBox *spinWidth;
    QLabel *label_4;
    QLabel *label;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *QWDialog)
    {
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName(QStringLiteral("QWDialog"));
        QWDialog->resize(400, 300);
        gridLayoutWidget = new QWidget(QWDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 381, 271));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboPenStyle = new QComboBox(gridLayoutWidget);
        comboPenStyle->setObjectName(QStringLiteral("comboPenStyle"));

        gridLayout->addWidget(comboPenStyle, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        btnColor = new QPushButton(gridLayoutWidget);
        btnColor->setObjectName(QStringLiteral("btnColor"));

        gridLayout->addWidget(btnColor, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinWidth = new QSpinBox(gridLayoutWidget);
        spinWidth->setObjectName(QStringLiteral("spinWidth"));

        gridLayout->addWidget(spinWidth, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 100));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnOk = new QPushButton(gridLayoutWidget);
        btnOk->setObjectName(QStringLiteral("btnOk"));

        gridLayout->addWidget(btnOk, 1, 2, 1, 1);

        btnCancel = new QPushButton(gridLayoutWidget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        gridLayout->addWidget(btnCancel, 3, 2, 1, 1);


        retranslateUi(QWDialog);
        QObject::connect(btnOk, SIGNAL(clicked()), QWDialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QWDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        QWDialog->setWindowTitle(QApplication::translate("QWDialog", "Dialog", Q_NULLPTR));
        comboPenStyle->clear();
        comboPenStyle->insertItems(0, QStringList()
         << QApplication::translate("QWDialog", "DotLine", Q_NULLPTR)
         << QApplication::translate("QWDialog", "Test", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("QWDialog", "\347\272\277\345\256\275", Q_NULLPTR));
        btnColor->setText(QString());
        label_2->setText(QApplication::translate("QWDialog", "\347\272\277\345\236\213", Q_NULLPTR));
        label_4->setText(QApplication::translate("QWDialog", "\351\242\234\350\211\262", Q_NULLPTR));
        label->setText(QApplication::translate("QWDialog", "QPen\345\261\236\346\200\247\350\256\276\347\275\256", Q_NULLPTR));
        btnOk->setText(QApplication::translate("QWDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("QWDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWDialog: public Ui_QWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOG_H
