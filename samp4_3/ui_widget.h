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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QPushButton *btnCal;
    QLabel *label_3;
    QSpinBox *spinNum;
    QDoubleSpinBox *spinPrice;
    QDoubleSpinBox *spinTotal;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QPushButton *btnDec;
    QLabel *label_5;
    QPushButton *btnBin;
    QLabel *label_6;
    QPushButton *btnHex;
    QSpinBox *spinDec;
    QSpinBox *spinBin;
    QSpinBox *spinHex;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 381, 205));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        btnCal = new QPushButton(layoutWidget);
        btnCal->setObjectName(QStringLiteral("btnCal"));

        gridLayout_2->addWidget(btnCal, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 2, 1, 1);

        spinNum = new QSpinBox(layoutWidget);
        spinNum->setObjectName(QStringLiteral("spinNum"));

        gridLayout_2->addWidget(spinNum, 0, 1, 1, 1);

        spinPrice = new QDoubleSpinBox(layoutWidget);
        spinPrice->setObjectName(QStringLiteral("spinPrice"));

        gridLayout_2->addWidget(spinPrice, 0, 3, 1, 1);

        spinTotal = new QDoubleSpinBox(layoutWidget);
        spinTotal->setObjectName(QStringLiteral("spinTotal"));

        gridLayout_2->addWidget(spinTotal, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        btnDec = new QPushButton(layoutWidget);
        btnDec->setObjectName(QStringLiteral("btnDec"));

        gridLayout_3->addWidget(btnDec, 0, 2, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        btnBin = new QPushButton(layoutWidget);
        btnBin->setObjectName(QStringLiteral("btnBin"));

        gridLayout_3->addWidget(btnBin, 1, 2, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        btnHex = new QPushButton(layoutWidget);
        btnHex->setObjectName(QStringLiteral("btnHex"));

        gridLayout_3->addWidget(btnHex, 2, 2, 1, 1);

        spinDec = new QSpinBox(layoutWidget);
        spinDec->setObjectName(QStringLiteral("spinDec"));

        gridLayout_3->addWidget(spinDec, 0, 1, 1, 1);

        spinBin = new QSpinBox(layoutWidget);
        spinBin->setObjectName(QStringLiteral("spinBin"));
        spinBin->setDisplayIntegerBase(2);

        gridLayout_3->addWidget(spinBin, 1, 1, 1, 1);

        spinHex = new QSpinBox(layoutWidget);
        spinHex->setObjectName(QStringLiteral("spinHex"));
        spinHex->setDisplayIntegerBase(16);

        gridLayout_3->addWidget(spinHex, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\345\215\225\344\273\267", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\346\225\260\351\207\217", Q_NULLPTR));
        btnCal->setText(QApplication::translate("Widget", "\350\256\241\347\256\227", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\346\200\273\344\273\267", Q_NULLPTR));
        spinNum->setSuffix(QApplication::translate("Widget", " kg", Q_NULLPTR));
        spinPrice->setPrefix(QApplication::translate("Widget", "$ ", Q_NULLPTR));
        spinTotal->setPrefix(QApplication::translate("Widget", "$ ", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", Q_NULLPTR));
        btnDec->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", Q_NULLPTR));
        btnBin->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
        btnHex->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        spinDec->setPrefix(QApplication::translate("Widget", "Dec ", Q_NULLPTR));
        spinBin->setPrefix(QApplication::translate("Widget", "Bin ", Q_NULLPTR));
        spinHex->setPrefix(QApplication::translate("Widget", "Hex ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
