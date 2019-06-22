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
    QPushButton *btnOpenMulti;
    QPushButton *btnOpen;
    QPushButton *btnSelDir;
    QPushButton *btnSave;
    QPushButton *btnColor;
    QPushButton *btnFont;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnMsgWarning;
    QPushButton *btnMsgQuestion;
    QPushButton *btnMsgInformation;
    QPushButton *btnMsgCritical;
    QPushButton *btnMsgAbout;
    QPushButton *btnMsgAboutQt;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *btnInputInt;
    QPushButton *btnInputString;
    QPushButton *btnInputFLoat;
    QPushButton *btnInputItem;
    QPushButton *btnClearPlainText;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(695, 588);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 211));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 281, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnOpenMulti = new QPushButton(gridLayoutWidget);
        btnOpenMulti->setObjectName(QStringLiteral("btnOpenMulti"));

        gridLayout->addWidget(btnOpenMulti, 0, 1, 1, 1);

        btnOpen = new QPushButton(gridLayoutWidget);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));

        gridLayout->addWidget(btnOpen, 0, 0, 1, 1);

        btnSelDir = new QPushButton(gridLayoutWidget);
        btnSelDir->setObjectName(QStringLiteral("btnSelDir"));

        gridLayout->addWidget(btnSelDir, 1, 0, 1, 1);

        btnSave = new QPushButton(gridLayoutWidget);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        gridLayout->addWidget(btnSave, 1, 1, 1, 1);

        btnColor = new QPushButton(gridLayoutWidget);
        btnColor->setObjectName(QStringLiteral("btnColor"));

        gridLayout->addWidget(btnColor, 2, 0, 1, 1);

        btnFont = new QPushButton(gridLayoutWidget);
        btnFont->setObjectName(QStringLiteral("btnFont"));

        gridLayout->addWidget(btnFont, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(320, 10, 351, 211));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 30, 323, 171));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnMsgWarning = new QPushButton(gridLayoutWidget_2);
        btnMsgWarning->setObjectName(QStringLiteral("btnMsgWarning"));

        gridLayout_2->addWidget(btnMsgWarning, 0, 2, 1, 1);

        btnMsgQuestion = new QPushButton(gridLayoutWidget_2);
        btnMsgQuestion->setObjectName(QStringLiteral("btnMsgQuestion"));

        gridLayout_2->addWidget(btnMsgQuestion, 0, 0, 1, 1);

        btnMsgInformation = new QPushButton(gridLayoutWidget_2);
        btnMsgInformation->setObjectName(QStringLiteral("btnMsgInformation"));

        gridLayout_2->addWidget(btnMsgInformation, 0, 1, 1, 1);

        btnMsgCritical = new QPushButton(gridLayoutWidget_2);
        btnMsgCritical->setObjectName(QStringLiteral("btnMsgCritical"));

        gridLayout_2->addWidget(btnMsgCritical, 1, 0, 1, 1);

        btnMsgAbout = new QPushButton(gridLayoutWidget_2);
        btnMsgAbout->setObjectName(QStringLiteral("btnMsgAbout"));

        gridLayout_2->addWidget(btnMsgAbout, 1, 1, 1, 1);

        btnMsgAboutQt = new QPushButton(gridLayoutWidget_2);
        btnMsgAboutQt->setObjectName(QStringLiteral("btnMsgAboutQt"));

        gridLayout_2->addWidget(btnMsgAboutQt, 1, 2, 1, 1);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 230, 311, 161));
        gridLayoutWidget_3 = new QWidget(groupBox_3);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 30, 291, 131));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btnInputInt = new QPushButton(gridLayoutWidget_3);
        btnInputInt->setObjectName(QStringLiteral("btnInputInt"));

        gridLayout_3->addWidget(btnInputInt, 0, 1, 1, 1);

        btnInputString = new QPushButton(gridLayoutWidget_3);
        btnInputString->setObjectName(QStringLiteral("btnInputString"));

        gridLayout_3->addWidget(btnInputString, 0, 0, 1, 1);

        btnInputFLoat = new QPushButton(gridLayoutWidget_3);
        btnInputFLoat->setObjectName(QStringLiteral("btnInputFLoat"));

        gridLayout_3->addWidget(btnInputFLoat, 1, 0, 1, 1);

        btnInputItem = new QPushButton(gridLayoutWidget_3);
        btnInputItem->setObjectName(QStringLiteral("btnInputItem"));

        gridLayout_3->addWidget(btnInputItem, 1, 1, 1, 1);

        btnClearPlainText = new QPushButton(Widget);
        btnClearPlainText->setObjectName(QStringLiteral("btnClearPlainText"));
        btnClearPlainText->setGeometry(QRect(350, 310, 311, 32));
        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 400, 661, 181));

        retranslateUi(Widget);
        QObject::connect(btnClearPlainText, SIGNAL(clicked()), plainTextEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\346\240\207\345\207\206\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btnOpenMulti->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\345\244\232\344\270\252\346\226\207\344\273\266", Q_NULLPTR));
        btnOpen->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\200\344\270\252\346\226\207\344\273\266", Q_NULLPTR));
        btnSelDir->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\345\267\262\346\234\211\347\233\256\345\275\225", Q_NULLPTR));
        btnSave->setText(QApplication::translate("Widget", "\344\277\235\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
        btnColor->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\351\242\234\350\211\262", Q_NULLPTR));
        btnFont->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\345\255\227\344\275\223", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "\346\240\207\345\207\206\346\266\210\346\201\257\346\241\206QMessageBox", Q_NULLPTR));
        btnMsgWarning->setText(QApplication::translate("Widget", "warning", Q_NULLPTR));
        btnMsgQuestion->setText(QApplication::translate("Widget", "question", Q_NULLPTR));
        btnMsgInformation->setText(QApplication::translate("Widget", "information", Q_NULLPTR));
        btnMsgCritical->setText(QApplication::translate("Widget", "critical", Q_NULLPTR));
        btnMsgAbout->setText(QApplication::translate("Widget", "about", Q_NULLPTR));
        btnMsgAboutQt->setText(QApplication::translate("Widget", "aboutQt", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "\346\240\207\345\207\206\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206QInputDialog", Q_NULLPTR));
        btnInputInt->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\346\225\264\346\225\260", Q_NULLPTR));
        btnInputString->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", Q_NULLPTR));
        btnInputFLoat->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\346\265\256\347\202\271\346\225\260", Q_NULLPTR));
        btnInputItem->setText(QApplication::translate("Widget", "\346\235\241\347\233\256\351\200\211\346\213\251\350\276\223\345\205\245", Q_NULLPTR));
        btnClearPlainText->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
