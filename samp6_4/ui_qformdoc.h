/********************************************************************************
** Form generated from reading UI file 'qformdoc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFORMDOC_H
#define UI_QFORMDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFormDoc
{
public:
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *QFormDoc)
    {
        if (QFormDoc->objectName().isEmpty())
            QFormDoc->setObjectName(QStringLiteral("QFormDoc"));
        QFormDoc->resize(599, 354);
        plainTextEdit = new QPlainTextEdit(QFormDoc);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(40, 40, 521, 281));

        retranslateUi(QFormDoc);

        QMetaObject::connectSlotsByName(QFormDoc);
    } // setupUi

    void retranslateUi(QWidget *QFormDoc)
    {
        QFormDoc->setWindowTitle(QApplication::translate("QFormDoc", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QFormDoc: public Ui_QFormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFORMDOC_H
