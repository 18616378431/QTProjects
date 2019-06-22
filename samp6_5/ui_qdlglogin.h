/********************************************************************************
** Form generated from reading UI file 'qdlglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDLGLOGIN_H
#define UI_QDLGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QDlgLogin
{
public:
    QLabel *label;
    QLineEdit *editUser;
    QLabel *label_2;
    QLineEdit *editPSWD;
    QCheckBox *chkSaveUserName;
    QLabel *label_3;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *QDlgLogin)
    {
        if (QDlgLogin->objectName().isEmpty())
            QDlgLogin->setObjectName(QStringLiteral("QDlgLogin"));
        QDlgLogin->resize(627, 461);
        label = new QLabel(QDlgLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 611, 301));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imgs/\345\261\217\345\271\225\345\277\253\347\205\247 2019-02-12 \344\270\213\345\215\2107.09.26.png")));
        editUser = new QLineEdit(QDlgLogin);
        editUser->setObjectName(QStringLiteral("editUser"));
        editUser->setGeometry(QRect(60, 420, 136, 21));
        label_2 = new QLabel(QDlgLogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 420, 39, 21));
        editPSWD = new QLineEdit(QDlgLogin);
        editPSWD->setObjectName(QStringLiteral("editPSWD"));
        editPSWD->setEnabled(true);
        editPSWD->setGeometry(QRect(250, 420, 121, 21));
        chkSaveUserName = new QCheckBox(QDlgLogin);
        chkSaveUserName->setObjectName(QStringLiteral("chkSaveUserName"));
        chkSaveUserName->setGeometry(QRect(380, 420, 91, 23));
        label_3 = new QLabel(QDlgLogin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 420, 41, 20));
        btnOk = new QPushButton(QDlgLogin);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setGeometry(QRect(470, 420, 71, 32));
        btnCancel = new QPushButton(QDlgLogin);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(540, 420, 81, 32));

        retranslateUi(QDlgLogin);
        QObject::connect(btnCancel, SIGNAL(clicked()), QDlgLogin, SLOT(reject()));

        QMetaObject::connectSlotsByName(QDlgLogin);
    } // setupUi

    void retranslateUi(QDialog *QDlgLogin)
    {
        QDlgLogin->setWindowTitle(QApplication::translate("QDlgLogin", "Dialog", Q_NULLPTR));
        label->setText(QString());
        editUser->setText(QApplication::translate("QDlgLogin", "user", Q_NULLPTR));
        label_2->setText(QApplication::translate("QDlgLogin", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        editPSWD->setText(QApplication::translate("QDlgLogin", "12345", Q_NULLPTR));
        chkSaveUserName->setText(QApplication::translate("QDlgLogin", "\344\277\235\345\255\230\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("QDlgLogin", "\345\257\206\347\240\201", Q_NULLPTR));
        btnOk->setText(QApplication::translate("QDlgLogin", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("QDlgLogin", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QDlgLogin: public Ui_QDlgLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDLGLOGIN_H
