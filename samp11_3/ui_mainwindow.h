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
    QAction *actOpenDB;
    QAction *actInsertRec;
    QAction *actEditRec;
    QAction *actDeleteRec;
    QAction *actScan;
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
        MainWindow->resize(656, 474);
        actOpenDB = new QAction(MainWindow);
        actOpenDB->setObjectName(QStringLiteral("actOpenDB"));
        actInsertRec = new QAction(MainWindow);
        actInsertRec->setObjectName(QStringLiteral("actInsertRec"));
        actEditRec = new QAction(MainWindow);
        actEditRec->setObjectName(QStringLiteral("actEditRec"));
        actDeleteRec = new QAction(MainWindow);
        actDeleteRec->setObjectName(QStringLiteral("actDeleteRec"));
        actScan = new QAction(MainWindow);
        actScan->setObjectName(QStringLiteral("actScan"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 641, 391));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 656, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actOpenDB);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actInsertRec);
        mainToolBar->addAction(actEditRec);
        mainToolBar->addAction(actDeleteRec);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actScan);
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actOpenDB->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpenDB->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actInsertRec->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\350\256\260\345\275\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actInsertRec->setToolTip(QApplication::translate("MainWindow", "\346\217\222\345\205\245\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actEditRec->setText(QApplication::translate("MainWindow", "\347\274\226\350\276\221\350\256\260\345\275\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actEditRec->setToolTip(QApplication::translate("MainWindow", "\347\274\226\350\276\221\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDeleteRec->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\256\260\345\275\225", Q_NULLPTR));
        actScan->setText(QApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actScan->setToolTip(QApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", Q_NULLPTR));
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
