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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *editPrice;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *editNum;
    QPushButton *btnCal;
    QLabel *label_3;
    QLineEdit *editTotal;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLineEdit *editDec;
    QPushButton *btnDec;
    QLabel *label_5;
    QPushButton *btnBin;
    QLineEdit *editBin;
    QLabel *label_6;
    QLineEdit *editHex;
    QPushButton *btnHex;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 381, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        editPrice = new QLineEdit(widget);
        editPrice->setObjectName(QStringLiteral("editPrice"));

        gridLayout_2->addWidget(editPrice, 0, 3, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        editNum = new QLineEdit(widget);
        editNum->setObjectName(QStringLiteral("editNum"));

        gridLayout_2->addWidget(editNum, 0, 1, 1, 1);

        btnCal = new QPushButton(widget);
        btnCal->setObjectName(QStringLiteral("btnCal"));

        gridLayout_2->addWidget(btnCal, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 2, 1, 1);

        editTotal = new QLineEdit(widget);
        editTotal->setObjectName(QStringLiteral("editTotal"));

        gridLayout_2->addWidget(editTotal, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        editDec = new QLineEdit(widget);
        editDec->setObjectName(QStringLiteral("editDec"));

        gridLayout_3->addWidget(editDec, 0, 1, 1, 1);

        btnDec = new QPushButton(widget);
        btnDec->setObjectName(QStringLiteral("btnDec"));

        gridLayout_3->addWidget(btnDec, 0, 2, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        btnBin = new QPushButton(widget);
        btnBin->setObjectName(QStringLiteral("btnBin"));

        gridLayout_3->addWidget(btnBin, 1, 2, 1, 1);

        editBin = new QLineEdit(widget);
        editBin->setObjectName(QStringLiteral("editBin"));

        gridLayout_3->addWidget(editBin, 1, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        editHex = new QLineEdit(widget);
        editHex->setObjectName(QStringLiteral("editHex"));

        gridLayout_3->addWidget(editHex, 2, 1, 1, 1);

        btnHex = new QPushButton(widget);
        btnHex->setObjectName(QStringLiteral("btnHex"));

        gridLayout_3->addWidget(btnHex, 2, 2, 1, 1);


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
        label_4->setText(QApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", Q_NULLPTR));
        btnDec->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", Q_NULLPTR));
        btnBin->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
        btnHex->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
