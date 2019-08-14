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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpen;
    QAction *actAdd;
    QAction *actInsert;
    QAction *actDelete;
    QAction *actSave;
    QAction *actCancel;
    QAction *actFieldList;
    QAction *actQuit;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(639, 385);
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        actAdd = new QAction(MainWindow);
        actAdd->setObjectName(QStringLiteral("actAdd"));
        actInsert = new QAction(MainWindow);
        actInsert->setObjectName(QStringLiteral("actInsert"));
        actDelete = new QAction(MainWindow);
        actDelete->setObjectName(QStringLiteral("actDelete"));
        actSave = new QAction(MainWindow);
        actSave->setObjectName(QStringLiteral("actSave"));
        actCancel = new QAction(MainWindow);
        actCancel->setObjectName(QStringLiteral("actCancel"));
        actFieldList = new QAction(MainWindow);
        actFieldList->setObjectName(QStringLiteral("actFieldList"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 20, 256, 192));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 639, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actOpen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actAdd);
        mainToolBar->addAction(actInsert);
        mainToolBar->addAction(actDelete);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actSave);
        mainToolBar->addAction(actCancel);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFieldList);
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAdd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAdd->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actInsert->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actInsert->setToolTip(QApplication::translate("MainWindow", "\346\217\222\345\205\245", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDelete->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSave->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCancel->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCancel->setToolTip(QApplication::translate("MainWindow", "\345\217\226\346\266\210", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFieldList->setText(QApplication::translate("MainWindow", "\345\255\227\346\256\265\345\210\227\350\241\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFieldList->setToolTip(QApplication::translate("MainWindow", "\345\255\227\346\256\265\345\210\227\350\241\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
