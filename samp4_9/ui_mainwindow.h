/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSplitter *splitterMain;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnSetHeader;
    QSpinBox *spinBoxRows;
    QPushButton *btnIniData;
    QPushButton *btnSetRows;
    QPushButton *btnReadToEdit;
    QPushButton *btnResizeRow;
    QCheckBox *chkBoxHeaderH;
    QPushButton *btnAppendRow;
    QPushButton *btnResizeColumn;
    QPushButton *btnInsertRow;
    QCheckBox *chkBoxTabEditable;
    QPushButton *btnDelCurRow;
    QCheckBox *chkBoxHeaderV;
    QCheckBox *chkBoxRowColor;
    QRadioButton *rBtnSelectRow;
    QRadioButton *rBtnSelectItem;
    QSplitter *splitter;
    QTableWidget *tableInfo;
    QPlainTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(981, 473);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitterMain = new QSplitter(centralWidget);
        splitterMain->setObjectName(QStringLiteral("splitterMain"));
        splitterMain->setGeometry(QRect(10, 10, 961, 384));
        splitterMain->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitterMain);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(130, 0));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 284, 317));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnSetHeader = new QPushButton(gridLayoutWidget);
        btnSetHeader->setObjectName(QStringLiteral("btnSetHeader"));

        gridLayout->addWidget(btnSetHeader, 0, 0, 1, 1);

        spinBoxRows = new QSpinBox(gridLayoutWidget);
        spinBoxRows->setObjectName(QStringLiteral("spinBoxRows"));

        gridLayout->addWidget(spinBoxRows, 1, 1, 1, 1);

        btnIniData = new QPushButton(gridLayoutWidget);
        btnIniData->setObjectName(QStringLiteral("btnIniData"));

        gridLayout->addWidget(btnIniData, 2, 0, 1, 1);

        btnSetRows = new QPushButton(gridLayoutWidget);
        btnSetRows->setObjectName(QStringLiteral("btnSetRows"));

        gridLayout->addWidget(btnSetRows, 1, 0, 1, 1);

        btnReadToEdit = new QPushButton(gridLayoutWidget);
        btnReadToEdit->setObjectName(QStringLiteral("btnReadToEdit"));

        gridLayout->addWidget(btnReadToEdit, 6, 0, 1, 1);

        btnResizeRow = new QPushButton(gridLayoutWidget);
        btnResizeRow->setObjectName(QStringLiteral("btnResizeRow"));

        gridLayout->addWidget(btnResizeRow, 5, 1, 1, 1);

        chkBoxHeaderH = new QCheckBox(gridLayoutWidget);
        chkBoxHeaderH->setObjectName(QStringLiteral("chkBoxHeaderH"));

        gridLayout->addWidget(chkBoxHeaderH, 8, 0, 1, 1);

        btnAppendRow = new QPushButton(gridLayoutWidget);
        btnAppendRow->setObjectName(QStringLiteral("btnAppendRow"));

        gridLayout->addWidget(btnAppendRow, 3, 1, 1, 1);

        btnResizeColumn = new QPushButton(gridLayoutWidget);
        btnResizeColumn->setObjectName(QStringLiteral("btnResizeColumn"));

        gridLayout->addWidget(btnResizeColumn, 5, 0, 1, 1);

        btnInsertRow = new QPushButton(gridLayoutWidget);
        btnInsertRow->setObjectName(QStringLiteral("btnInsertRow"));

        gridLayout->addWidget(btnInsertRow, 3, 0, 1, 1);

        chkBoxTabEditable = new QCheckBox(gridLayoutWidget);
        chkBoxTabEditable->setObjectName(QStringLiteral("chkBoxTabEditable"));

        gridLayout->addWidget(chkBoxTabEditable, 7, 0, 1, 1);

        btnDelCurRow = new QPushButton(gridLayoutWidget);
        btnDelCurRow->setObjectName(QStringLiteral("btnDelCurRow"));

        gridLayout->addWidget(btnDelCurRow, 4, 0, 1, 1);

        chkBoxHeaderV = new QCheckBox(gridLayoutWidget);
        chkBoxHeaderV->setObjectName(QStringLiteral("chkBoxHeaderV"));

        gridLayout->addWidget(chkBoxHeaderV, 8, 1, 1, 1);

        chkBoxRowColor = new QCheckBox(gridLayoutWidget);
        chkBoxRowColor->setObjectName(QStringLiteral("chkBoxRowColor"));

        gridLayout->addWidget(chkBoxRowColor, 7, 1, 1, 1);

        rBtnSelectRow = new QRadioButton(gridLayoutWidget);
        rBtnSelectRow->setObjectName(QStringLiteral("rBtnSelectRow"));

        gridLayout->addWidget(rBtnSelectRow, 9, 0, 1, 1);

        rBtnSelectItem = new QRadioButton(gridLayoutWidget);
        rBtnSelectItem->setObjectName(QStringLiteral("rBtnSelectItem"));

        gridLayout->addWidget(rBtnSelectItem, 9, 1, 1, 1);

        splitterMain->addWidget(groupBox);
        splitter = new QSplitter(splitterMain);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tableInfo = new QTableWidget(splitter);
        if (tableInfo->columnCount() < 6)
            tableInfo->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableInfo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableInfo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableInfo->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableInfo->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableInfo->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableInfo->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableInfo->rowCount() < 7)
            tableInfo->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableInfo->setVerticalHeaderItem(6, __qtablewidgetitem12);
        tableInfo->setObjectName(QStringLiteral("tableInfo"));
        splitter->addWidget(tableInfo);
        textEdit = new QPlainTextEdit(splitter);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMinimumSize(QSize(0, 100));
        splitter->addWidget(textEdit);
        splitterMain->addWidget(splitter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 981, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        btnSetHeader->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264", Q_NULLPTR));
        btnIniData->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\350\241\250\346\240\274\346\225\260\346\215\256", Q_NULLPTR));
        btnSetRows->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\346\225\260", Q_NULLPTR));
        btnReadToEdit->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", Q_NULLPTR));
        btnResizeRow->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275", Q_NULLPTR));
        chkBoxHeaderH->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\241\214\350\241\250\345\244\264", Q_NULLPTR));
        btnAppendRow->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", Q_NULLPTR));
        btnResizeColumn->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230", Q_NULLPTR));
        btnInsertRow->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
        chkBoxTabEditable->setText(QApplication::translate("MainWindow", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        btnDelCurRow->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", Q_NULLPTR));
        chkBoxHeaderV->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\210\227\350\241\250\345\244\264", Q_NULLPTR));
        chkBoxRowColor->setText(QApplication::translate("MainWindow", "\351\227\264\351\232\224\350\241\214\345\272\225\350\211\262", Q_NULLPTR));
        rBtnSelectRow->setText(QApplication::translate("MainWindow", "\350\241\214\351\200\211\346\213\251", Q_NULLPTR));
        rBtnSelectItem->setText(QApplication::translate("MainWindow", "\345\215\225\345\205\203\346\240\274\351\200\211\346\213\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableInfo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableInfo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableInfo->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableInfo->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\346\260\221\346\227\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableInfo->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\210\206\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableInfo->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\345\205\232\345\221\230", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableInfo->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableInfo->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableInfo->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableInfo->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableInfo->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableInfo->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableInfo->verticalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
