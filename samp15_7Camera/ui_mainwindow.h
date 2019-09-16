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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcameraviewfinder.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actStartCamera;
    QAction *actStopCamera;
    QAction *actVideoRecord;
    QAction *actCapture;
    QAction *actQuit;
    QAction *actVideoStop;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboCamera;
    QCheckBox *checkStillImage;
    QCheckBox *checkVideo;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chkMute;
    QPushButton *btnVideoSaveFile;
    QLineEdit *editOutputFile;
    QLabel *LabDuration;
    QGroupBox *groupBox_2;
    QCameraViewfinder *viewFinder;
    QGroupBox *groupBox_3;
    QLabel *LabCapturedImage;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 431);
        actStartCamera = new QAction(MainWindow);
        actStartCamera->setObjectName(QStringLiteral("actStartCamera"));
        actStopCamera = new QAction(MainWindow);
        actStopCamera->setObjectName(QStringLiteral("actStopCamera"));
        actVideoRecord = new QAction(MainWindow);
        actVideoRecord->setObjectName(QStringLiteral("actVideoRecord"));
        actCapture = new QAction(MainWindow);
        actCapture->setObjectName(QStringLiteral("actCapture"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        actVideoStop = new QAction(MainWindow);
        actVideoStop->setObjectName(QStringLiteral("actVideoStop"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 581, 111));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 561, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboCamera = new QComboBox(horizontalLayoutWidget);
        comboCamera->setObjectName(QStringLiteral("comboCamera"));

        horizontalLayout->addWidget(comboCamera);

        checkStillImage = new QCheckBox(horizontalLayoutWidget);
        checkStillImage->setObjectName(QStringLiteral("checkStillImage"));

        horizontalLayout->addWidget(checkStillImage);

        checkVideo = new QCheckBox(horizontalLayoutWidget);
        checkVideo->setObjectName(QStringLiteral("checkVideo"));

        horizontalLayout->addWidget(checkVideo);

        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 70, 561, 33));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        chkMute = new QCheckBox(horizontalLayoutWidget_2);
        chkMute->setObjectName(QStringLiteral("chkMute"));

        horizontalLayout_2->addWidget(chkMute);

        btnVideoSaveFile = new QPushButton(horizontalLayoutWidget_2);
        btnVideoSaveFile->setObjectName(QStringLiteral("btnVideoSaveFile"));

        horizontalLayout_2->addWidget(btnVideoSaveFile);

        editOutputFile = new QLineEdit(horizontalLayoutWidget_2);
        editOutputFile->setObjectName(QStringLiteral("editOutputFile"));

        horizontalLayout_2->addWidget(editOutputFile);

        LabDuration = new QLabel(horizontalLayoutWidget_2);
        LabDuration->setObjectName(QStringLiteral("LabDuration"));

        horizontalLayout_2->addWidget(LabDuration);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 130, 301, 221));
        viewFinder = new QCameraViewfinder(groupBox_2);
        viewFinder->setObjectName(QStringLiteral("viewFinder"));
        viewFinder->setGeometry(QRect(0, 20, 301, 201));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(320, 130, 271, 221));
        LabCapturedImage = new QLabel(groupBox_3);
        LabCapturedImage->setObjectName(QStringLiteral("LabCapturedImage"));
        LabCapturedImage->setGeometry(QRect(0, 20, 271, 201));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actStartCamera);
        mainToolBar->addAction(actStopCamera);
        mainToolBar->addAction(actCapture);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actVideoRecord);
        mainToolBar->addAction(actVideoStop);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actStartCamera->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actStartCamera->setToolTip(QApplication::translate("MainWindow", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actStopCamera->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actStopCamera->setToolTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actVideoRecord->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\275\225\345\203\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actVideoRecord->setToolTip(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\275\225\345\203\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCapture->setText(QApplication::translate("MainWindow", "\346\212\223\345\233\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCapture->setToolTip(QApplication::translate("MainWindow", "\346\212\223\345\233\276", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actVideoStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\345\275\225\345\203\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actVideoStop->setToolTip(QApplication::translate("MainWindow", "\345\201\234\346\255\242\345\275\225\345\203\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\345\217\202\346\225\260", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\350\256\276\345\244\207", Q_NULLPTR));
        checkStillImage->setText(QApplication::translate("MainWindow", "\346\224\257\346\214\201\346\212\223\345\233\276", Q_NULLPTR));
        checkVideo->setText(QApplication::translate("MainWindow", "\346\224\257\346\214\201\345\275\225\345\203\217", Q_NULLPTR));
        chkMute->setText(QApplication::translate("MainWindow", "\345\275\225\345\203\217\346\227\266\351\235\231\351\237\263", Q_NULLPTR));
        btnVideoSaveFile->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\344\277\235\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
        editOutputFile->setText(QApplication::translate("MainWindow", "/Users/wangjiankang/Pictures/video.mp4", Q_NULLPTR));
        LabDuration->setText(QApplication::translate("MainWindow", "\345\275\225\345\210\266\346\227\266\351\227\264", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\351\242\204\350\247\210", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\346\212\223\345\217\226\345\233\276\347\211\207", Q_NULLPTR));
        LabCapturedImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
