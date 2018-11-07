/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btnClassInfo;
    QPushButton *btnClear;
    QPushButton *btnGirlInc;
    QSpinBox *spinBoy;
    QLabel *label;
    QPushButton *btnBoyInc;
    QLabel *label_2;
    QSpinBox *spinGirl;
    QPlainTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(451, 300);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 431, 278));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnClassInfo = new QPushButton(widget);
        btnClassInfo->setObjectName(QStringLiteral("btnClassInfo"));

        gridLayout->addWidget(btnClassInfo, 0, 3, 1, 1);

        btnClear = new QPushButton(widget);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        gridLayout->addWidget(btnClear, 1, 3, 1, 1);

        btnGirlInc = new QPushButton(widget);
        btnGirlInc->setObjectName(QStringLiteral("btnGirlInc"));

        gridLayout->addWidget(btnGirlInc, 1, 2, 1, 1);

        spinBoy = new QSpinBox(widget);
        spinBoy->setObjectName(QStringLiteral("spinBoy"));

        gridLayout->addWidget(spinBoy, 0, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnBoyInc = new QPushButton(widget);
        btnBoyInc->setObjectName(QStringLiteral("btnBoyInc"));

        gridLayout->addWidget(btnBoyInc, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinGirl = new QSpinBox(widget);
        spinGirl->setObjectName(QStringLiteral("spinGirl"));

        gridLayout->addWidget(spinGirl, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        textEdit = new QPlainTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        btnClassInfo->setText(QApplication::translate("Widget", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", Q_NULLPTR));
        btnClear->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
        btnGirlInc->setText(QApplication::translate("Widget", "girl\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\347\224\267\347\224\237\345\271\264\351\276\204", Q_NULLPTR));
        btnBoyInc->setText(QApplication::translate("Widget", "Boy\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\345\245\263\347\224\237\345\271\264\351\276\204", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
