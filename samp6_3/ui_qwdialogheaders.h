/********************************************************************************
** Form generated from reading UI file 'qwdialogheaders.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOGHEADERS_H
#define UI_QWDIALOGHEADERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWDialogHeaders
{
public:
    QListView *listView;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *QWDialogHeaders)
    {
        if (QWDialogHeaders->objectName().isEmpty())
            QWDialogHeaders->setObjectName(QStringLiteral("QWDialogHeaders"));
        QWDialogHeaders->resize(400, 300);
        listView = new QListView(QWDialogHeaders);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(20, 20, 231, 271));
        gridLayoutWidget = new QWidget(QWDialogHeaders);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(260, 20, 131, 271));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnOk = new QPushButton(gridLayoutWidget);
        btnOk->setObjectName(QStringLiteral("btnOk"));

        gridLayout->addWidget(btnOk, 0, 0, 1, 1);

        btnCancel = new QPushButton(gridLayoutWidget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        gridLayout->addWidget(btnCancel, 1, 0, 1, 1);


        retranslateUi(QWDialogHeaders);
        QObject::connect(btnOk, SIGNAL(clicked()), QWDialogHeaders, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QWDialogHeaders, SLOT(reject()));

        QMetaObject::connectSlotsByName(QWDialogHeaders);
    } // setupUi

    void retranslateUi(QDialog *QWDialogHeaders)
    {
        QWDialogHeaders->setWindowTitle(QApplication::translate("QWDialogHeaders", "Dialog", Q_NULLPTR));
        btnOk->setText(QApplication::translate("QWDialogHeaders", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("QWDialogHeaders", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWDialogHeaders: public Ui_QWDialogHeaders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOGHEADERS_H
