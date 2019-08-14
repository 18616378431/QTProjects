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
    QAction *actStart;
    QAction *actStop;
    QAction *actClear;
    QAction *actQuit;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBindPort;
    QLabel *label_2;
    QComboBox *comboTargetIP;
    QLabel *label_3;
    QSpinBox *spinTargetPort;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *editMsg;
    QPushButton *btnSend;
    QPushButton *btnBroadcast;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(591, 427);
        actStart = new QAction(MainWindow);
        actStart->setObjectName(QStringLiteral("actStart"));
        actStop = new QAction(MainWindow);
        actStop->setObjectName(QStringLiteral("actStop"));
        actClear = new QAction(MainWindow);
        actClear->setObjectName(QStringLiteral("actClear"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 571, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBindPort = new QSpinBox(horizontalLayoutWidget);
        spinBindPort->setObjectName(QStringLiteral("spinBindPort"));
        spinBindPort->setMaximum(65535);
        spinBindPort->setValue(1200);

        horizontalLayout->addWidget(spinBindPort);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        comboTargetIP = new QComboBox(horizontalLayoutWidget);
        comboTargetIP->setObjectName(QStringLiteral("comboTargetIP"));

        horizontalLayout->addWidget(comboTargetIP);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spinTargetPort = new QSpinBox(horizontalLayoutWidget);
        spinTargetPort->setObjectName(QStringLiteral("spinTargetPort"));
        spinTargetPort->setMaximum(65535);
        spinTargetPort->setValue(3355);

        horizontalLayout->addWidget(spinTargetPort);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 60, 571, 41));
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

        btnBroadcast = new QPushButton(horizontalLayoutWidget_2);
        btnBroadcast->setObjectName(QStringLiteral("btnBroadcast"));

        horizontalLayout_2->addWidget(btnBroadcast);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 110, 571, 241));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 591, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actStart);
        mainToolBar->addAction(actStop);
        mainToolBar->addAction(actClear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actStart->setText(QApplication::translate("MainWindow", "\347\273\221\345\256\232\347\253\257\345\217\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actStart->setToolTip(QApplication::translate("MainWindow", "\347\273\221\345\256\232\347\253\257\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actStop->setText(QApplication::translate("MainWindow", "\350\247\243\351\231\244\347\273\221\345\256\232", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actStop->setToolTip(QApplication::translate("MainWindow", "\350\247\243\351\231\244\347\273\221\345\256\232", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClear->setToolTip(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "\347\273\221\345\256\232\347\253\257\345\217\243:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\347\233\256\346\240\207\345\234\260\345\235\200:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\347\233\256\346\240\207\347\253\257\345\217\243:", Q_NULLPTR));
        btnSend->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", Q_NULLPTR));
        btnBroadcast->setText(QApplication::translate("MainWindow", "\345\271\277\346\222\255\346\266\210\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
