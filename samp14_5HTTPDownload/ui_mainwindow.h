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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *editUrl;
    QPushButton *btnDownload;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *editPath;
    QPushButton *btnDefaultPath;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QProgressBar *progressBar;
    QLabel *downloadPercent;
    QCheckBox *chkOpen;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(598, 421);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 20, 561, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        editUrl = new QLineEdit(horizontalLayoutWidget);
        editUrl->setObjectName(QStringLiteral("editUrl"));

        horizontalLayout->addWidget(editUrl);

        btnDownload = new QPushButton(horizontalLayoutWidget);
        btnDownload->setObjectName(QStringLiteral("btnDownload"));

        horizontalLayout->addWidget(btnDownload);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 70, 561, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        editPath = new QLineEdit(horizontalLayoutWidget_2);
        editPath->setObjectName(QStringLiteral("editPath"));

        horizontalLayout_2->addWidget(editPath);

        btnDefaultPath = new QPushButton(horizontalLayoutWidget_2);
        btnDefaultPath->setObjectName(QStringLiteral("btnDefaultPath"));

        horizontalLayout_2->addWidget(btnDefaultPath);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 120, 561, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        progressBar = new QProgressBar(horizontalLayoutWidget_3);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_3->addWidget(progressBar);

        downloadPercent = new QLabel(horizontalLayoutWidget_3);
        downloadPercent->setObjectName(QStringLiteral("downloadPercent"));

        horizontalLayout_3->addWidget(downloadPercent);

        chkOpen = new QCheckBox(horizontalLayoutWidget_3);
        chkOpen->setObjectName(QStringLiteral("chkOpen"));

        horizontalLayout_3->addWidget(chkOpen);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 598, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "URL:", Q_NULLPTR));
        btnDownload->setText(QApplication::translate("MainWindow", "\344\270\213\350\275\275", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\344\270\213\350\275\275\346\226\207\344\273\266\344\277\235\345\255\230\350\267\257\345\276\204:", Q_NULLPTR));
        btnDefaultPath->setText(QApplication::translate("MainWindow", "\347\274\272\347\234\201\350\267\257\345\276\204", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\344\270\213\350\275\275\350\277\233\345\272\246:", Q_NULLPTR));
        downloadPercent->setText(QApplication::translate("MainWindow", "\344\270\213\350\275\275\347\231\276\345\210\206\346\257\224", Q_NULLPTR));
        chkOpen->setText(QApplication::translate("MainWindow", "\345\256\214\346\210\220\345\220\216\346\211\223\345\274\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
