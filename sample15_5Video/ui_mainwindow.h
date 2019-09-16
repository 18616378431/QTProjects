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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qmyvideowidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QmyVideoWidget *videoWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnStop;
    QPushButton *btnSound;
    QSlider *sliderVolumn;
    QPushButton *btnFullScreen;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
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
        MainWindow->resize(606, 431);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        videoWidget = new QmyVideoWidget(centralWidget);
        videoWidget->setObjectName(QStringLiteral("videoWidget"));
        videoWidget->setGeometry(QRect(10, 10, 591, 261));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 280, 591, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QPushButton(horizontalLayoutWidget);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        horizontalLayout->addWidget(btnAdd);

        btnPlay = new QPushButton(horizontalLayoutWidget);
        btnPlay->setObjectName(QStringLiteral("btnPlay"));

        horizontalLayout->addWidget(btnPlay);

        btnPause = new QPushButton(horizontalLayoutWidget);
        btnPause->setObjectName(QStringLiteral("btnPause"));

        horizontalLayout->addWidget(btnPause);

        btnStop = new QPushButton(horizontalLayoutWidget);
        btnStop->setObjectName(QStringLiteral("btnStop"));

        horizontalLayout->addWidget(btnStop);

        btnSound = new QPushButton(horizontalLayoutWidget);
        btnSound->setObjectName(QStringLiteral("btnSound"));

        horizontalLayout->addWidget(btnSound);

        sliderVolumn = new QSlider(horizontalLayoutWidget);
        sliderVolumn->setObjectName(QStringLiteral("sliderVolumn"));
        sliderVolumn->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderVolumn);

        btnFullScreen = new QPushButton(horizontalLayoutWidget);
        btnFullScreen->setObjectName(QStringLiteral("btnFullScreen"));

        horizontalLayout->addWidget(btnFullScreen);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 330, 591, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        LabCurMedia = new QLabel(horizontalLayoutWidget_2);
        LabCurMedia->setObjectName(QStringLiteral("LabCurMedia"));

        horizontalLayout_2->addWidget(LabCurMedia);

        sliderPosition = new QSlider(horizontalLayoutWidget_2);
        sliderPosition->setObjectName(QStringLiteral("sliderPosition"));
        sliderPosition->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderPosition);

        LabRatio = new QLabel(horizontalLayoutWidget_2);
        LabRatio->setObjectName(QStringLiteral("LabRatio"));

        horizontalLayout_2->addWidget(LabRatio);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 606, 22));
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
        btnAdd->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        btnPlay->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", Q_NULLPTR));
        btnPause->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", Q_NULLPTR));
        btnStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
        btnSound->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", Q_NULLPTR));
        btnFullScreen->setText(QApplication::translate("MainWindow", "\345\205\250\345\261\217", Q_NULLPTR));
        LabCurMedia->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215", Q_NULLPTR));
        LabRatio->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276\350\277\233\345\272\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
