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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpen_IODevice;
    QAction *actSave_IODevice;
    QAction *actOpen_Stream;
    QAction *actSave_Stream;
    QAction *actQuit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *textEditDevice;
    QWidget *tab_2;
    QTextEdit *textEditStream;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(626, 433);
        actOpen_IODevice = new QAction(MainWindow);
        actOpen_IODevice->setObjectName(QStringLiteral("actOpen_IODevice"));
        actSave_IODevice = new QAction(MainWindow);
        actSave_IODevice->setObjectName(QStringLiteral("actSave_IODevice"));
        actOpen_Stream = new QAction(MainWindow);
        actOpen_Stream->setObjectName(QStringLiteral("actOpen_Stream"));
        actSave_Stream = new QAction(MainWindow);
        actSave_Stream->setObjectName(QStringLiteral("actSave_Stream"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 611, 351));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        textEditDevice = new QTextEdit(tab);
        textEditDevice->setObjectName(QStringLiteral("textEditDevice"));
        textEditDevice->setGeometry(QRect(10, 10, 151, 141));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        textEditStream = new QTextEdit(tab_2);
        textEditStream->setObjectName(QStringLiteral("textEditStream"));
        textEditStream->setGeometry(QRect(290, 90, 151, 141));
        tabWidget->addTab(tab_2, QString());
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

        mainToolBar->addAction(actOpen_IODevice);
        mainToolBar->addAction(actSave_IODevice);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actOpen_Stream);
        mainToolBar->addAction(actSave_Stream);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\226\207\346\234\254\346\226\207\344\273\266\350\257\273\345\206\231", Q_NULLPTR));
        actOpen_IODevice->setText(QApplication::translate("MainWindow", "QFile\347\233\264\346\216\245\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen_IODevice->setToolTip(QApplication::translate("MainWindow", "QFile\347\233\264\346\216\245\346\211\223\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSave_IODevice->setText(QApplication::translate("MainWindow", "QFile\345\217\246\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSave_IODevice->setToolTip(QApplication::translate("MainWindow", "QFile\345\217\246\345\255\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actOpen_Stream->setText(QApplication::translate("MainWindow", "QTextStream\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen_Stream->setToolTip(QApplication::translate("MainWindow", "QTextStream\346\211\223\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSave_Stream->setText(QApplication::translate("MainWindow", "QTextStream\345\217\246\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSave_Stream->setToolTip(QApplication::translate("MainWindow", "QTextStream\345\217\246\345\255\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
