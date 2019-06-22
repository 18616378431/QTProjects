/********************************************************************************
** Form generated from reading UI file 'qwmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWINDOW_H
#define UI_QWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWindow
{
public:
    QAction *actWidgetInsite;
    QAction *actWidget;
    QAction *actWindowInsite;
    QAction *actWindow;
    QAction *actQuit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWMainWindow)
    {
        if (QWMainWindow->objectName().isEmpty())
            QWMainWindow->setObjectName(QStringLiteral("QWMainWindow"));
        QWMainWindow->resize(627, 448);
        actWidgetInsite = new QAction(QWMainWindow);
        actWidgetInsite->setObjectName(QStringLiteral("actWidgetInsite"));
        actWidget = new QAction(QWMainWindow);
        actWidget->setObjectName(QStringLiteral("actWidget"));
        actWindowInsite = new QAction(QWMainWindow);
        actWindowInsite->setObjectName(QStringLiteral("actWindowInsite"));
        actWindow = new QAction(QWMainWindow);
        actWindow->setObjectName(QStringLiteral("actWindow"));
        actQuit = new QAction(QWMainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(QWMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 611, 361));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        QWMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QWMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 627, 22));
        QWMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QWMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QWMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QWMainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actWidgetInsite);
        mainToolBar->addAction(actWidget);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actWindowInsite);
        mainToolBar->addAction(actWindow);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(QWMainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), QWMainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(QWMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWindow)
    {
        QWMainWindow->setWindowTitle(QApplication::translate("QWMainWindow", "QWMainWindow", Q_NULLPTR));
        actWidgetInsite->setText(QApplication::translate("QWMainWindow", "\345\265\214\345\205\245\345\274\217Widget", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actWidgetInsite->setToolTip(QApplication::translate("QWMainWindow", "\345\265\214\345\205\245\345\274\217Widget", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actWidget->setText(QApplication::translate("QWMainWindow", "\347\213\254\347\253\213Widget\347\252\227\345\217\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actWidget->setToolTip(QApplication::translate("QWMainWindow", "\347\213\254\347\253\213Widget\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actWindowInsite->setText(QApplication::translate("QWMainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actWindowInsite->setToolTip(QApplication::translate("QWMainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actWindow->setText(QApplication::translate("QWMainWindow", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actWindow->setToolTip(QApplication::translate("QWMainWindow", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QWMainWindow", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QWMainWindow", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWMainWindow: public Ui_QWMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWINDOW_H
