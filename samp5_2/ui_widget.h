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
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QSplitter *splitter_3;
    QSplitter *splitter;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnListAppend;
    QPushButton *btnResumeList;
    QPushButton *btnListInsert;
    QPushButton *btnListDelete;
    QPushButton *btnListClear;
    QListView *listView;
    QSplitter *splitter_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnClearEdit;
    QPushButton *btnTextImport;
    QPlainTextEdit *plainTextEdit;
    QLabel *LabInfo;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(620, 472);
        splitter_3 = new QSplitter(Widget);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(10, 20, 601, 401));
        splitter_3->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        gridLayoutWidget = new QWidget(splitter);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnListAppend = new QPushButton(gridLayoutWidget);
        btnListAppend->setObjectName(QStringLiteral("btnListAppend"));

        gridLayout->addWidget(btnListAppend, 1, 0, 1, 1);

        btnResumeList = new QPushButton(gridLayoutWidget);
        btnResumeList->setObjectName(QStringLiteral("btnResumeList"));

        gridLayout->addWidget(btnResumeList, 0, 0, 1, 1);

        btnListInsert = new QPushButton(gridLayoutWidget);
        btnListInsert->setObjectName(QStringLiteral("btnListInsert"));

        gridLayout->addWidget(btnListInsert, 1, 1, 1, 1);

        btnListDelete = new QPushButton(gridLayoutWidget);
        btnListDelete->setObjectName(QStringLiteral("btnListDelete"));

        gridLayout->addWidget(btnListDelete, 2, 0, 1, 1);

        btnListClear = new QPushButton(gridLayoutWidget);
        btnListClear->setObjectName(QStringLiteral("btnListClear"));

        gridLayout->addWidget(btnListClear, 2, 1, 1, 1);

        splitter->addWidget(gridLayoutWidget);
        listView = new QListView(splitter);
        listView->setObjectName(QStringLiteral("listView"));
        splitter->addWidget(listView);
        splitter_3->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        gridLayoutWidget_2 = new QWidget(splitter_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnClearEdit = new QPushButton(gridLayoutWidget_2);
        btnClearEdit->setObjectName(QStringLiteral("btnClearEdit"));

        gridLayout_2->addWidget(btnClearEdit, 0, 0, 1, 1);

        btnTextImport = new QPushButton(gridLayoutWidget_2);
        btnTextImport->setObjectName(QStringLiteral("btnTextImport"));

        gridLayout_2->addWidget(btnTextImport, 1, 0, 1, 1);

        splitter_2->addWidget(gridLayoutWidget_2);
        plainTextEdit = new QPlainTextEdit(splitter_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        splitter_2->addWidget(plainTextEdit);
        splitter_3->addWidget(splitter_2);
        LabInfo = new QLabel(Widget);
        LabInfo->setObjectName(QStringLiteral("LabInfo"));
        LabInfo->setGeometry(QRect(20, 440, 581, 16));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        btnListAppend->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
        btnResumeList->setText(QApplication::translate("Widget", "\346\201\242\345\244\215\345\210\227\350\241\250", Q_NULLPTR));
        btnListInsert->setText(QApplication::translate("Widget", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
        btnListDelete->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
        btnListClear->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
        btnClearEdit->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254", Q_NULLPTR));
        btnTextImport->setText(QApplication::translate("Widget", "\346\230\276\347\244\272\346\225\260\346\215\256\346\250\241\345\236\213\347\232\204StringList", Q_NULLPTR));
        LabInfo->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\351\241\271:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
