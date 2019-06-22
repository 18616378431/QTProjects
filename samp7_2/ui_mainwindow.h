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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actReset;
    QAction *actOpenStm;
    QAction *actSaveStm;
    QAction *actiOpenBin;
    QAction *actSaveBin;
    QAction *actAppend;
    QAction *actInsert;
    QAction *actDelete;
    QAction *actQuit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(626, 435);
        actReset = new QAction(MainWindow);
        actReset->setObjectName(QStringLiteral("actReset"));
        actOpenStm = new QAction(MainWindow);
        actOpenStm->setObjectName(QStringLiteral("actOpenStm"));
        actSaveStm = new QAction(MainWindow);
        actSaveStm->setObjectName(QStringLiteral("actSaveStm"));
        actiOpenBin = new QAction(MainWindow);
        actiOpenBin->setObjectName(QStringLiteral("actiOpenBin"));
        actSaveBin = new QAction(MainWindow);
        actSaveBin->setObjectName(QStringLiteral("actSaveBin"));
        actAppend = new QAction(MainWindow);
        actAppend->setObjectName(QStringLiteral("actAppend"));
        actInsert = new QAction(MainWindow);
        actInsert->setObjectName(QStringLiteral("actInsert"));
        actDelete = new QAction(MainWindow);
        actDelete->setObjectName(QStringLiteral("actDelete"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 591, 341));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 571, 291));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 626, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actReset);
        mainToolBar->addAction(actOpenStm);
        mainToolBar->addAction(actSaveStm);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actiOpenBin);
        mainToolBar->addAction(actSaveBin);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actAppend);
        mainToolBar->addAction(actInsert);
        mainToolBar->addAction(actDelete);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actReset->setText(QApplication::translate("MainWindow", "\350\241\250\346\240\274\345\244\215\344\275\215", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actReset->setToolTip(QApplication::translate("MainWindow", "\350\241\250\346\240\274\345\244\215\344\275\215", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actOpenStm->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200stm\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpenStm->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200stm\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSaveStm->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230stm\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSaveStm->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230stm\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actiOpenBin->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200dat\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actiOpenBin->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200dat\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSaveBin->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230dat\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSaveBin->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230dat\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAppend->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAppend->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actInsert->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actInsert->setToolTip(QApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\241\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDelete->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\241\214", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\350\241\250\346\240\274\346\225\260\346\215\256\346\226\207\344\273\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
