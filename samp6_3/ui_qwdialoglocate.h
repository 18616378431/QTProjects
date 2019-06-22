/********************************************************************************
** Form generated from reading UI file 'qwdialoglocate.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOGLOCATE_H
#define UI_QWDIALOGLOCATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWDialogLocate
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *rowSpinBox;
    QPushButton *btnClose;
    QPushButton *btnSetText;
    QSpinBox *colSpinBox;
    QCheckBox *colCheckBox;
    QCheckBox *rowCheckBox;
    QLabel *label;
    QLineEdit *edtCaption;

    void setupUi(QDialog *QWDialogLocate)
    {
        if (QWDialogLocate->objectName().isEmpty())
            QWDialogLocate->setObjectName(QStringLiteral("QWDialogLocate"));
        QWDialogLocate->resize(400, 300);
        gridLayoutWidget = new QWidget(QWDialogLocate);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 381, 161));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rowSpinBox = new QSpinBox(gridLayoutWidget);
        rowSpinBox->setObjectName(QStringLiteral("rowSpinBox"));

        gridLayout->addWidget(rowSpinBox, 1, 0, 1, 1);

        btnClose = new QPushButton(gridLayoutWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        gridLayout->addWidget(btnClose, 1, 2, 1, 1);

        btnSetText = new QPushButton(gridLayoutWidget);
        btnSetText->setObjectName(QStringLiteral("btnSetText"));

        gridLayout->addWidget(btnSetText, 0, 2, 1, 1);

        colSpinBox = new QSpinBox(gridLayoutWidget);
        colSpinBox->setObjectName(QStringLiteral("colSpinBox"));

        gridLayout->addWidget(colSpinBox, 0, 0, 1, 1);

        colCheckBox = new QCheckBox(gridLayoutWidget);
        colCheckBox->setObjectName(QStringLiteral("colCheckBox"));

        gridLayout->addWidget(colCheckBox, 0, 1, 1, 1);

        rowCheckBox = new QCheckBox(gridLayoutWidget);
        rowCheckBox->setObjectName(QStringLiteral("rowCheckBox"));

        gridLayout->addWidget(rowCheckBox, 1, 1, 1, 1);

        label = new QLabel(QWDialogLocate);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 230, 101, 31));
        edtCaption = new QLineEdit(QWDialogLocate);
        edtCaption->setObjectName(QStringLiteral("edtCaption"));
        edtCaption->setGeometry(QRect(120, 230, 251, 31));

        retranslateUi(QWDialogLocate);
        QObject::connect(btnClose, SIGNAL(clicked()), QWDialogLocate, SLOT(close()));

        QMetaObject::connectSlotsByName(QWDialogLocate);
    } // setupUi

    void retranslateUi(QDialog *QWDialogLocate)
    {
        QWDialogLocate->setWindowTitle(QApplication::translate("QWDialogLocate", "Dialog", Q_NULLPTR));
        btnClose->setText(QApplication::translate("QWDialogLocate", "\345\205\263\351\227\255", Q_NULLPTR));
        btnSetText->setText(QApplication::translate("QWDialogLocate", "\350\256\276\345\256\232\346\226\207\345\255\227", Q_NULLPTR));
        colCheckBox->setText(QApplication::translate("QWDialogLocate", "\345\210\227\345\242\236", Q_NULLPTR));
        rowCheckBox->setText(QApplication::translate("QWDialogLocate", "\350\241\214\345\242\236", Q_NULLPTR));
        label->setText(QApplication::translate("QWDialogLocate", "\350\256\276\345\256\232\346\226\207\345\255\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWDialogLocate: public Ui_QWDialogLocate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOGLOCATE_H
