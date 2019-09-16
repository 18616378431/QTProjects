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
    QAction *actTab_SetSize;
    QAction *actTab_SetHeader;
    QAction *actTab_Locate;
    QAction *actQuit;
    QAction *actCN;
    QAction *actEN;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(612, 370);
        actTab_SetSize = new QAction(MainWindow);
        actTab_SetSize->setObjectName(QStringLiteral("actTab_SetSize"));
        actTab_SetHeader = new QAction(MainWindow);
        actTab_SetHeader->setObjectName(QStringLiteral("actTab_SetHeader"));
        actTab_Locate = new QAction(MainWindow);
        actTab_Locate->setObjectName(QStringLiteral("actTab_Locate"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        actCN = new QAction(MainWindow);
        actCN->setObjectName(QStringLiteral("actCN"));
        actEN = new QAction(MainWindow);
        actEN->setObjectName(QStringLiteral("actEN"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 591, 291));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actTab_SetSize);
        mainToolBar->addAction(actTab_SetHeader);
        mainToolBar->addAction(actTab_Locate);
        mainToolBar->addAction(actQuit);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actCN);
        mainToolBar->addAction(actEN);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actTab_SetSize->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\346\225\260\345\210\227\346\225\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actTab_SetSize->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\346\225\260\345\210\227\346\225\260", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actTab_SetHeader->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actTab_SetHeader->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actTab_Locate->setText(QApplication::translate("MainWindow", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actTab_Locate->setToolTip(QApplication::translate("MainWindow", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCN->setText(QApplication::translate("MainWindow", "\344\270\255\346\226\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCN->setToolTip(QApplication::translate("MainWindow", "\344\270\255\346\226\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actEN->setText(QApplication::translate("MainWindow", "\350\213\261\346\226\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actEN->setToolTip(QApplication::translate("MainWindow", "\350\213\261\346\226\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
