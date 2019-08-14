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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actConnect;
    QAction *actDisconnect;
    QAction *actClear;
    QAction *actQuit;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboServer;
    QLabel *label_2;
    QSpinBox *spinPort;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *editMsg;
    QPushButton *btnSend;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(609, 429);
        actConnect = new QAction(MainWindow);
        actConnect->setObjectName(QStringLiteral("actConnect"));
        actDisconnect = new QAction(MainWindow);
        actDisconnect->setObjectName(QStringLiteral("actDisconnect"));
        actClear = new QAction(MainWindow);
        actClear->setObjectName(QStringLiteral("actClear"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 591, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboServer = new QComboBox(horizontalLayoutWidget);
        comboServer->setObjectName(QStringLiteral("comboServer"));

        horizontalLayout->addWidget(comboServer);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        spinPort = new QSpinBox(horizontalLayoutWidget);
        spinPort->setObjectName(QStringLiteral("spinPort"));
        spinPort->setMaximum(65535);
        spinPort->setValue(1200);

        horizontalLayout->addWidget(spinPort);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 60, 591, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        editMsg = new QLineEdit(horizontalLayoutWidget_2);
        editMsg->setObjectName(QStringLiteral("editMsg"));

        horizontalLayout_2->addWidget(editMsg);

        btnSend = new QPushButton(horizontalLayoutWidget_2);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        horizontalLayout_2->addWidget(btnSend);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 100, 591, 251));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 609, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actConnect);
        mainToolBar->addAction(actDisconnect);
        mainToolBar->addAction(actClear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actConnect->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245\345\210\260\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actConnect->setToolTip(QApplication::translate("MainWindow", "\350\277\236\346\216\245\345\210\260\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDisconnect->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDisconnect->setToolTip(QApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClear->setToolTip(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243:", Q_NULLPTR));
        btnSend->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
