/********************************************************************************
** Form generated from reading UI file 'qwdialogsize.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOGSIZE_H
#define UI_QWDIALOGSIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWDialogSize
{
public:
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *spinBoxRow;
    QSpinBox *spinBoxColumn;
    QPushButton *btnRowCloumnOk;
    QPushButton *btnRowColumnCancel;
    QLabel *label;

    void setupUi(QDialog *QWDialogSize)
    {
        if (QWDialogSize->objectName().isEmpty())
            QWDialogSize->setObjectName(QStringLiteral("QWDialogSize"));
        QWDialogSize->resize(400, 300);
        groupBox = new QGroupBox(QWDialogSize);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 361, 251));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 70, 341, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinBoxRow = new QSpinBox(gridLayoutWidget);
        spinBoxRow->setObjectName(QStringLiteral("spinBoxRow"));

        gridLayout->addWidget(spinBoxRow, 0, 0, 1, 1);

        spinBoxColumn = new QSpinBox(gridLayoutWidget);
        spinBoxColumn->setObjectName(QStringLiteral("spinBoxColumn"));

        gridLayout->addWidget(spinBoxColumn, 1, 0, 1, 1);

        btnRowCloumnOk = new QPushButton(gridLayoutWidget);
        btnRowCloumnOk->setObjectName(QStringLiteral("btnRowCloumnOk"));

        gridLayout->addWidget(btnRowCloumnOk, 0, 1, 1, 1);

        btnRowColumnCancel = new QPushButton(gridLayoutWidget);
        btnRowColumnCancel->setObjectName(QStringLiteral("btnRowColumnCancel"));

        gridLayout->addWidget(btnRowColumnCancel, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 201, 20));

        retranslateUi(QWDialogSize);
        QObject::connect(btnRowCloumnOk, SIGNAL(clicked()), QWDialogSize, SLOT(accept()));
        QObject::connect(btnRowColumnCancel, SIGNAL(clicked()), QWDialogSize, SLOT(reject()));

        QMetaObject::connectSlotsByName(QWDialogSize);
    } // setupUi

    void retranslateUi(QDialog *QWDialogSize)
    {
        QWDialogSize->setWindowTitle(QApplication::translate("QWDialogSize", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QWDialogSize", "\350\256\276\347\275\256\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", Q_NULLPTR));
        btnRowCloumnOk->setText(QApplication::translate("QWDialogSize", "\347\241\256\345\256\232", Q_NULLPTR));
        btnRowColumnCancel->setText(QApplication::translate("QWDialogSize", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("QWDialogSize", "\350\256\276\347\275\256\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWDialogSize: public Ui_QWDialogSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOGSIZE_H
