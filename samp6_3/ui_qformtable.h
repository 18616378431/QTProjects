/********************************************************************************
** Form generated from reading UI file 'qformtable.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFORMTABLE_H
#define UI_QFORMTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFormTable
{
public:
    QAction *actTab_SetSize;
    QAction *actTab_SetHeader;
    QAction *actTab_Locate;
    QAction *actQuit;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QFormTable)
    {
        if (QFormTable->objectName().isEmpty())
            QFormTable->setObjectName(QStringLiteral("QFormTable"));
        QFormTable->resize(612, 370);
        actTab_SetSize = new QAction(QFormTable);
        actTab_SetSize->setObjectName(QStringLiteral("actTab_SetSize"));
        actTab_SetHeader = new QAction(QFormTable);
        actTab_SetHeader->setObjectName(QStringLiteral("actTab_SetHeader"));
        actTab_Locate = new QAction(QFormTable);
        actTab_Locate->setObjectName(QStringLiteral("actTab_Locate"));
        actQuit = new QAction(QFormTable);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(QFormTable);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 591, 291));
        QFormTable->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QFormTable);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 22));
        QFormTable->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QFormTable);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QFormTable->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QFormTable);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QFormTable->setStatusBar(statusBar);

        mainToolBar->addAction(actTab_SetSize);
        mainToolBar->addAction(actTab_SetHeader);
        mainToolBar->addAction(actTab_Locate);
        mainToolBar->addAction(actQuit);

        retranslateUi(QFormTable);
        QObject::connect(actQuit, SIGNAL(triggered()), QFormTable, SLOT(close()));

        QMetaObject::connectSlotsByName(QFormTable);
    } // setupUi

    void retranslateUi(QMainWindow *QFormTable)
    {
        QFormTable->setWindowTitle(QApplication::translate("QFormTable", "MainWindow", Q_NULLPTR));
        actTab_SetSize->setText(QApplication::translate("QFormTable", "\350\256\276\347\275\256\350\241\214\346\225\260\345\210\227\346\225\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actTab_SetSize->setToolTip(QApplication::translate("QFormTable", "\350\256\276\347\275\256\350\241\214\346\225\260\345\210\227\346\225\260", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actTab_SetHeader->setText(QApplication::translate("QFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actTab_SetHeader->setToolTip(QApplication::translate("QFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actTab_Locate->setText(QApplication::translate("QFormTable", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actTab_Locate->setToolTip(QApplication::translate("QFormTable", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("QFormTable", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("QFormTable", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QFormTable: public Ui_QFormTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFORMTABLE_H
