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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Pen;
    QAction *actExplicitLib;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(587, 375);
        action_Pen = new QAction(MainWindow);
        action_Pen->setObjectName(QStringLiteral("action_Pen"));
        actExplicitLib = new QAction(MainWindow);
        actExplicitLib->setObjectName(QStringLiteral("actExplicitLib"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 587, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(action_Pen);
        mainToolBar->addAction(actExplicitLib);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_Pen->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256Pen", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_Pen->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256Pen", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actExplicitLib->setText(QApplication::translate("MainWindow", "\346\230\276\345\274\217\345\205\261\344\272\253\345\272\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actExplicitLib->setToolTip(QApplication::translate("MainWindow", "\346\230\276\345\274\217\345\205\261\344\272\253\345\272\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
