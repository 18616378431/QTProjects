/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *send;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *getTextEdit;
    QTextEdit *postTextEdit;
    QPushButton *sendOldSite;
    QTextEdit *oldSiteTextEdit;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *login;
    QPlainTextEdit *loginText;
    QLineEdit *verify_code;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        send = new QPushButton(centralwidget);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(40, 40, 75, 23));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 111, 51));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 160, 111, 51));
        getTextEdit = new QTextEdit(centralwidget);
        getTextEdit->setObjectName(QString::fromUtf8("getTextEdit"));
        getTextEdit->setGeometry(QRect(140, 60, 521, 81));
        postTextEdit = new QTextEdit(centralwidget);
        postTextEdit->setObjectName(QString::fromUtf8("postTextEdit"));
        postTextEdit->setGeometry(QRect(140, 160, 521, 81));
        sendOldSite = new QPushButton(centralwidget);
        sendOldSite->setObjectName(QString::fromUtf8("sendOldSite"));
        sendOldSite->setGeometry(QRect(30, 250, 101, 31));
        oldSiteTextEdit = new QTextEdit(centralwidget);
        oldSiteTextEdit->setObjectName(QString::fromUtf8("oldSiteTextEdit"));
        oldSiteTextEdit->setGeometry(QRect(140, 280, 521, 71));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 250, 113, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 250, 71, 21));
        login = new QPushButton(centralwidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(14, 370, 101, 23));
        loginText = new QPlainTextEdit(centralwidget);
        loginText->setObjectName(QString::fromUtf8("loginText"));
        loginText->setGeometry(QRect(140, 400, 541, 151));
        verify_code = new QLineEdit(centralwidget);
        verify_code->setObjectName(QString::fromUtf8("verify_code"));
        verify_code->setGeometry(QRect(220, 370, 113, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 370, 54, 12));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        send->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\350\257\267\346\261\202", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Get\350\257\267\346\261\202\347\273\223\346\236\234", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Post\350\257\267\346\261\202\347\273\223\346\236\234", nullptr));
        sendOldSite->setText(QCoreApplication::translate("MainWindow", "\350\257\267\346\261\202oldsite_SMS", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "crm\347\224\250\346\210\267\345\220\215", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "login_oldsite", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\351\252\214\350\257\201\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
