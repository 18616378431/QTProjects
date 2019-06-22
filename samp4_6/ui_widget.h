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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnIniItems;
    QCheckBox *checkBox;
    QPushButton *btnClear;
    QPushButton *btnAddItems;
    QComboBox *comboBox1;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnIni2;
    QComboBox *comboBox2;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *btnClearPlainTextEdit;
    QPushButton *btnAddToCombo1;
    QCheckBox *chkReadOnly;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(628, 381);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 391, 151));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 20, 388, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnIniItems = new QPushButton(gridLayoutWidget);
        btnIniItems->setObjectName(QStringLiteral("btnIniItems"));

        gridLayout->addWidget(btnIniItems, 0, 0, 1, 1);

        checkBox = new QCheckBox(gridLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 0, 3, 1, 1);

        btnClear = new QPushButton(gridLayoutWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        gridLayout->addWidget(btnClear, 0, 2, 1, 1);

        btnAddItems = new QPushButton(gridLayoutWidget);
        btnAddItems->setObjectName(QStringLiteral("btnAddItems"));

        gridLayout->addWidget(btnAddItems, 0, 1, 1, 1);

        comboBox1 = new QComboBox(groupBox);
        comboBox1->setObjectName(QStringLiteral("comboBox1"));
        comboBox1->setGeometry(QRect(0, 110, 291, 26));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(410, 20, 201, 151));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 20, 201, 131));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnIni2 = new QPushButton(gridLayoutWidget_2);
        btnIni2->setObjectName(QStringLiteral("btnIni2"));

        gridLayout_2->addWidget(btnIni2, 0, 0, 1, 1);

        comboBox2 = new QComboBox(gridLayoutWidget_2);
        comboBox2->setObjectName(QStringLiteral("comboBox2"));

        gridLayout_2->addWidget(comboBox2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 190, 611, 181));
        gridLayoutWidget_3 = new QWidget(groupBox_3);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 30, 591, 41));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btnClearPlainTextEdit = new QPushButton(gridLayoutWidget_3);
        btnClearPlainTextEdit->setObjectName(QStringLiteral("btnClearPlainTextEdit"));

        gridLayout_3->addWidget(btnClearPlainTextEdit, 0, 1, 1, 1);

        btnAddToCombo1 = new QPushButton(gridLayoutWidget_3);
        btnAddToCombo1->setObjectName(QStringLiteral("btnAddToCombo1"));

        gridLayout_3->addWidget(btnAddToCombo1, 0, 0, 1, 1);

        chkReadOnly = new QCheckBox(gridLayoutWidget_3);
        chkReadOnly->setObjectName(QStringLiteral("chkReadOnly"));

        gridLayout_3->addWidget(chkReadOnly, 0, 2, 1, 1);

        chkReadOnly->raise();
        btnAddToCombo1->raise();
        btnClearPlainTextEdit->raise();
        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 80, 591, 101));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\347\256\200\345\215\225ComboBox", Q_NULLPTR));
        btnIniItems->setText(QApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Widget", "\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        btnClear->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
        btnAddItems->setText(QApplication::translate("Widget", "addItems", Q_NULLPTR));
        comboBox1->clear();
        comboBox1->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\345\214\227\344\272\254\345\270\202", Q_NULLPTR)
         << QApplication::translate("Widget", "\344\270\212\346\265\267\345\270\202", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("Widget", "\346\234\211\347\224\250\346\210\267\346\225\260\346\215\256\347\232\204ComboBox", Q_NULLPTR));
        btnIni2->setText(QApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202+\345\214\272\345\217\267", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "QPlainTextEdit(\345\205\267\346\234\211\346\240\207\345\207\206\345\277\253\346\215\267\350\217\234\345\215\225)", Q_NULLPTR));
        btnClearPlainTextEdit->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\346\226\207\346\234\254\345\206\205\345\256\271", Q_NULLPTR));
        btnAddToCombo1->setText(QApplication::translate("Widget", "\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271\346\267\273\345\212\240\345\210\260ComboBox", Q_NULLPTR));
        chkReadOnly->setText(QApplication::translate("Widget", "ReadOnly", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
