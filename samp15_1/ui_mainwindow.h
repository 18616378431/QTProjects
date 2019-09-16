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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnRemove;
    QPushButton *btnClear;
    QListWidget *listWidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnStop;
    QPushButton *btnLast;
    QPushButton *btnNext;
    QPushButton *btnSound;
    QSlider *sliderVolumn;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *LabCurMedia;
    QSlider *sliderPosition;
    QLabel *LabRatio;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(607, 435);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 591, 261));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 571, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QPushButton(horizontalLayoutWidget);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        horizontalLayout->addWidget(btnAdd);

        btnRemove = new QPushButton(horizontalLayoutWidget);
        btnRemove->setObjectName(QStringLiteral("btnRemove"));

        horizontalLayout->addWidget(btnRemove);

        btnClear = new QPushButton(horizontalLayoutWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        horizontalLayout->addWidget(btnClear);

        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 80, 571, 171));
        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 280, 571, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnPlay = new QPushButton(horizontalLayoutWidget_2);
        btnPlay->setObjectName(QStringLiteral("btnPlay"));

        horizontalLayout_2->addWidget(btnPlay);

        btnPause = new QPushButton(horizontalLayoutWidget_2);
        btnPause->setObjectName(QStringLiteral("btnPause"));

        horizontalLayout_2->addWidget(btnPause);

        btnStop = new QPushButton(horizontalLayoutWidget_2);
        btnStop->setObjectName(QStringLiteral("btnStop"));

        horizontalLayout_2->addWidget(btnStop);

        btnLast = new QPushButton(horizontalLayoutWidget_2);
        btnLast->setObjectName(QStringLiteral("btnLast"));

        horizontalLayout_2->addWidget(btnLast);

        btnNext = new QPushButton(horizontalLayoutWidget_2);
        btnNext->setObjectName(QStringLiteral("btnNext"));

        horizontalLayout_2->addWidget(btnNext);

        btnSound = new QPushButton(horizontalLayoutWidget_2);
        btnSound->setObjectName(QStringLiteral("btnSound"));

        horizontalLayout_2->addWidget(btnSound);

        sliderVolumn = new QSlider(horizontalLayoutWidget_2);
        sliderVolumn->setObjectName(QStringLiteral("sliderVolumn"));
        sliderVolumn->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderVolumn);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 330, 571, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        LabCurMedia = new QLabel(horizontalLayoutWidget_3);
        LabCurMedia->setObjectName(QStringLiteral("LabCurMedia"));

        horizontalLayout_3->addWidget(LabCurMedia);

        sliderPosition = new QSlider(horizontalLayoutWidget_3);
        sliderPosition->setObjectName(QStringLiteral("sliderPosition"));
        sliderPosition->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(sliderPosition);

        LabRatio = new QLabel(horizontalLayoutWidget_3);
        LabRatio->setObjectName(QStringLiteral("LabRatio"));

        horizontalLayout_3->addWidget(LabRatio);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 607, 22));
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
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\222\255\346\224\276\345\210\227\350\241\250", Q_NULLPTR));
        btnAdd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", Q_NULLPTR));
        btnRemove->setText(QApplication::translate("MainWindow", "\347\247\273\351\231\244", Q_NULLPTR));
        btnClear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", Q_NULLPTR));
        btnPlay->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
        btnPause->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", Q_NULLPTR));
        btnStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
        btnLast->setText(QApplication::translate("MainWindow", "\344\270\212\344\270\200\351\246\226", Q_NULLPTR));
        btnNext->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\351\246\226", Q_NULLPTR));
        btnSound->setText(QApplication::translate("MainWindow", "\351\235\231\351\237\263", Q_NULLPTR));
        LabCurMedia->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\222\255\346\224\276\346\255\214\346\233\262", Q_NULLPTR));
        LabRatio->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\222\255\346\224\276\346\257\224\347\216\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
