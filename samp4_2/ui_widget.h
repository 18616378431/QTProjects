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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *editStr1;
    QLineEdit *editStr2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnIsnull;
    QPushButton *btnEndswith;
    QPushButton *btnCount;
    QLabel *label_4;
    QPushButton *btnContains;
    QPushButton *btnToupper;
    QLabel *label_5;
    QPushButton *btnIndexof;
    QLabel *label_3;
    QPushButton *btnLeft;
    QPushButton *btnIsempty;
    QPushButton *btnRight;
    QPushButton *btnAppend;
    QPushButton *btnSize;
    QPushButton *btnPrepend;
    QPushButton *btnStartswith;
    QPushButton *btnTolower;
    QPushButton *btnSection;
    QPushButton *btnLastindexOf;
    QPushButton *btnSimplified;
    QPushButton *btnTrimmed;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLineEdit *editResult;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QCheckBox *chkContains;
    QLabel *label_7;
    QLineEdit *editCount;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(600, 550);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 571, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        editStr1 = new QLineEdit(gridLayoutWidget);
        editStr1->setObjectName(QStringLiteral("editStr1"));

        gridLayout->addWidget(editStr1, 0, 1, 1, 1);

        editStr2 = new QLineEdit(gridLayoutWidget);
        editStr2->setObjectName(QStringLiteral("editStr2"));

        gridLayout->addWidget(editStr2, 1, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(Widget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 120, 573, 198));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnIsnull = new QPushButton(gridLayoutWidget_2);
        btnIsnull->setObjectName(QStringLiteral("btnIsnull"));

        gridLayout_2->addWidget(btnIsnull, 3, 3, 1, 1);

        btnEndswith = new QPushButton(gridLayoutWidget_2);
        btnEndswith->setObjectName(QStringLiteral("btnEndswith"));

        gridLayout_2->addWidget(btnEndswith, 1, 3, 1, 1);

        btnCount = new QPushButton(gridLayoutWidget_2);
        btnCount->setObjectName(QStringLiteral("btnCount"));

        gridLayout_2->addWidget(btnCount, 1, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 2, 1, 1);

        btnContains = new QPushButton(gridLayoutWidget_2);
        btnContains->setObjectName(QStringLiteral("btnContains"));

        gridLayout_2->addWidget(btnContains, 2, 3, 1, 1);

        btnToupper = new QPushButton(gridLayoutWidget_2);
        btnToupper->setObjectName(QStringLiteral("btnToupper"));

        gridLayout_2->addWidget(btnToupper, 2, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 3, 1, 1);

        btnIndexof = new QPushButton(gridLayoutWidget_2);
        btnIndexof->setObjectName(QStringLiteral("btnIndexof"));

        gridLayout_2->addWidget(btnIndexof, 3, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        btnLeft = new QPushButton(gridLayoutWidget_2);
        btnLeft->setObjectName(QStringLiteral("btnLeft"));

        gridLayout_2->addWidget(btnLeft, 3, 0, 1, 1);

        btnIsempty = new QPushButton(gridLayoutWidget_2);
        btnIsempty->setObjectName(QStringLiteral("btnIsempty"));

        gridLayout_2->addWidget(btnIsempty, 3, 4, 1, 1);

        btnRight = new QPushButton(gridLayoutWidget_2);
        btnRight->setObjectName(QStringLiteral("btnRight"));

        gridLayout_2->addWidget(btnRight, 3, 1, 1, 1);

        btnAppend = new QPushButton(gridLayoutWidget_2);
        btnAppend->setObjectName(QStringLiteral("btnAppend"));

        gridLayout_2->addWidget(btnAppend, 1, 0, 1, 1);

        btnSize = new QPushButton(gridLayoutWidget_2);
        btnSize->setObjectName(QStringLiteral("btnSize"));

        gridLayout_2->addWidget(btnSize, 2, 2, 1, 1);

        btnPrepend = new QPushButton(gridLayoutWidget_2);
        btnPrepend->setObjectName(QStringLiteral("btnPrepend"));

        gridLayout_2->addWidget(btnPrepend, 1, 1, 1, 1);

        btnStartswith = new QPushButton(gridLayoutWidget_2);
        btnStartswith->setObjectName(QStringLiteral("btnStartswith"));

        gridLayout_2->addWidget(btnStartswith, 1, 4, 1, 1);

        btnTolower = new QPushButton(gridLayoutWidget_2);
        btnTolower->setObjectName(QStringLiteral("btnTolower"));

        gridLayout_2->addWidget(btnTolower, 2, 1, 1, 1);

        btnSection = new QPushButton(gridLayoutWidget_2);
        btnSection->setObjectName(QStringLiteral("btnSection"));

        gridLayout_2->addWidget(btnSection, 4, 1, 1, 1);

        btnLastindexOf = new QPushButton(gridLayoutWidget_2);
        btnLastindexOf->setObjectName(QStringLiteral("btnLastindexOf"));

        gridLayout_2->addWidget(btnLastindexOf, 4, 2, 1, 1);

        btnSimplified = new QPushButton(gridLayoutWidget_2);
        btnSimplified->setObjectName(QStringLiteral("btnSimplified"));

        gridLayout_2->addWidget(btnSimplified, 5, 0, 1, 1);

        btnTrimmed = new QPushButton(gridLayoutWidget_2);
        btnTrimmed->setObjectName(QStringLiteral("btnTrimmed"));

        gridLayout_2->addWidget(btnTrimmed, 5, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(Widget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 330, 571, 80));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        editResult = new QLineEdit(gridLayoutWidget_3);
        editResult->setObjectName(QStringLiteral("editResult"));

        gridLayout_3->addWidget(editResult, 0, 1, 1, 1);

        gridLayoutWidget_4 = new QWidget(Widget);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 430, 571, 80));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        chkContains = new QCheckBox(gridLayoutWidget_4);
        chkContains->setObjectName(QStringLiteral("chkContains"));

        gridLayout_4->addWidget(chkContains, 0, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 0, 1, 1, 1);

        editCount = new QLineEdit(gridLayoutWidget_4);
        editCount->setObjectName(QStringLiteral("editCount"));

        gridLayout_4->addWidget(editCount, 0, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "str1", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "str2", Q_NULLPTR));
        btnIsnull->setText(QApplication::translate("Widget", "isNull", Q_NULLPTR));
        btnEndswith->setText(QApplication::translate("Widget", "endsWith", Q_NULLPTR));
        btnCount->setText(QApplication::translate("Widget", "count", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\346\225\260\345\255\227", Q_NULLPTR));
        btnContains->setText(QApplication::translate("Widget", "contains", Q_NULLPTR));
        btnToupper->setText(QApplication::translate("Widget", "toUpper", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\351\200\273\350\276\221\345\210\244\346\226\255", Q_NULLPTR));
        btnIndexof->setText(QApplication::translate("Widget", "indexOf", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262", Q_NULLPTR));
        btnLeft->setText(QApplication::translate("Widget", "left", Q_NULLPTR));
        btnIsempty->setText(QApplication::translate("Widget", "isEmpty", Q_NULLPTR));
        btnRight->setText(QApplication::translate("Widget", "right", Q_NULLPTR));
        btnAppend->setText(QApplication::translate("Widget", "Append", Q_NULLPTR));
        btnSize->setText(QApplication::translate("Widget", "size", Q_NULLPTR));
        btnPrepend->setText(QApplication::translate("Widget", "Prepend", Q_NULLPTR));
        btnStartswith->setText(QApplication::translate("Widget", "startsWith", Q_NULLPTR));
        btnTolower->setText(QApplication::translate("Widget", "toLower", Q_NULLPTR));
        btnSection->setText(QApplication::translate("Widget", "section", Q_NULLPTR));
        btnLastindexOf->setText(QApplication::translate("Widget", "lastIndexOf", Q_NULLPTR));
        btnSimplified->setText(QApplication::translate("Widget", "simplified", Q_NULLPTR));
        btnTrimmed->setText(QApplication::translate("Widget", "trimmed", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\347\273\223\346\236\234", Q_NULLPTR));
        chkContains->setText(QApplication::translate("Widget", "contains()", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "count()", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
