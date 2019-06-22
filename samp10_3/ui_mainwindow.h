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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnBarColor;
    QLabel *label_10;
    QCheckBox *chkBoxAxisBackground;
    QSlider *slideZoom;
    QCheckBox *chkBoxGrid;
    QComboBox *comboCamera;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *cBoxSelectionMode;
    QLabel *label_4;
    QCheckBox *choBoxBackground;
    QSlider *sliderV;
    QSlider *sliderH;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_8;
    QCheckBox *checkBox_3;
    QComboBox *cBoxBarStyle;
    QComboBox *cBoxTheme;
    QLabel *label_5;
    QLabel *label_7;
    QCheckBox *chkBoxItemLabel;
    QSpinBox *spinBox;
    QCheckBox *chkBoxReverse;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_7;
    QLabel *label_9;
    QLabel *label_11;
    QPushButton *btnGrad1;
    QPushButton *btnGrad2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(614, 620);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 351, 551));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 20, 341, 498));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnBarColor = new QPushButton(gridLayoutWidget);
        btnBarColor->setObjectName(QStringLiteral("btnBarColor"));

        gridLayout->addWidget(btnBarColor, 13, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 14, 0, 1, 1);

        chkBoxAxisBackground = new QCheckBox(gridLayoutWidget);
        chkBoxAxisBackground->setObjectName(QStringLiteral("chkBoxAxisBackground"));

        gridLayout->addWidget(chkBoxAxisBackground, 12, 0, 1, 1);

        slideZoom = new QSlider(gridLayoutWidget);
        slideZoom->setObjectName(QStringLiteral("slideZoom"));
        slideZoom->setMinimum(10);
        slideZoom->setMaximum(500);
        slideZoom->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(slideZoom, 3, 1, 1, 1);

        chkBoxGrid = new QCheckBox(gridLayoutWidget);
        chkBoxGrid->setObjectName(QStringLiteral("chkBoxGrid"));

        gridLayout->addWidget(chkBoxGrid, 9, 0, 1, 1);

        comboCamera = new QComboBox(gridLayoutWidget);
        comboCamera->setObjectName(QStringLiteral("comboCamera"));

        gridLayout->addWidget(comboCamera, 0, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 8, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        cBoxSelectionMode = new QComboBox(gridLayoutWidget);
        cBoxSelectionMode->setObjectName(QStringLiteral("cBoxSelectionMode"));

        gridLayout->addWidget(cBoxSelectionMode, 6, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        choBoxBackground = new QCheckBox(gridLayoutWidget);
        choBoxBackground->setObjectName(QStringLiteral("choBoxBackground"));

        gridLayout->addWidget(choBoxBackground, 8, 0, 1, 1);

        sliderV = new QSlider(gridLayoutWidget);
        sliderV->setObjectName(QStringLiteral("sliderV"));
        sliderV->setMaximum(90);
        sliderV->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderV, 2, 1, 1, 1);

        sliderH = new QSlider(gridLayoutWidget);
        sliderH->setObjectName(QStringLiteral("sliderH"));
        sliderH->setMinimum(-180);
        sliderH->setMaximum(180);
        sliderH->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderH, 1, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        checkBox_3 = new QCheckBox(gridLayoutWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 9, 1, 1, 1);

        cBoxBarStyle = new QComboBox(gridLayoutWidget);
        cBoxBarStyle->setObjectName(QStringLiteral("cBoxBarStyle"));

        gridLayout->addWidget(cBoxBarStyle, 5, 1, 1, 1);

        cBoxTheme = new QComboBox(gridLayoutWidget);
        cBoxTheme->setObjectName(QStringLiteral("cBoxTheme"));

        gridLayout->addWidget(cBoxTheme, 4, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        chkBoxItemLabel = new QCheckBox(gridLayoutWidget);
        chkBoxItemLabel->setObjectName(QStringLiteral("chkBoxItemLabel"));

        gridLayout->addWidget(chkBoxItemLabel, 11, 0, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setValue(10);

        gridLayout->addWidget(spinBox, 7, 1, 1, 1);

        chkBoxReverse = new QCheckBox(gridLayoutWidget);
        chkBoxReverse->setObjectName(QStringLiteral("chkBoxReverse"));

        gridLayout->addWidget(chkBoxReverse, 10, 1, 1, 1);

        checkBox_4 = new QCheckBox(gridLayoutWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout->addWidget(checkBox_4, 10, 0, 1, 1);

        checkBox_7 = new QCheckBox(gridLayoutWidget);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        gridLayout->addWidget(checkBox_7, 11, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 13, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 15, 0, 1, 1);

        btnGrad1 = new QPushButton(gridLayoutWidget);
        btnGrad1->setObjectName(QStringLiteral("btnGrad1"));

        gridLayout->addWidget(btnGrad1, 14, 1, 1, 1);

        btnGrad2 = new QPushButton(gridLayoutWidget);
        btnGrad2->setObjectName(QStringLiteral("btnGrad2"));

        gridLayout->addWidget(btnGrad2, 15, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 614, 22));
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
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        btnBarColor->setText(QApplication::translate("MainWindow", "\346\233\262\351\235\242\351\242\234\350\211\262", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\346\270\220\345\217\230\350\211\2621", Q_NULLPTR));
        chkBoxAxisBackground->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\346\240\207\347\255\276\350\203\214\346\231\257\345\217\257\350\247\201", Q_NULLPTR));
        chkBoxGrid->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257\347\275\221\346\240\274", Q_NULLPTR));
        comboCamera->clear();
        comboCamera->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "FrontLow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Front", Q_NULLPTR)
         << QApplication::translate("MainWindow", "FrontHigh", Q_NULLPTR)
         << QApplication::translate("MainWindow", "LeftLow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Left", Q_NULLPTR)
         << QApplication::translate("MainWindow", "LeftHigh", Q_NULLPTR)
         << QApplication::translate("MainWindow", "RightLow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Right", Q_NULLPTR)
         << QApplication::translate("MainWindow", "RightHigh", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BehindLow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Behind", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BehindHigh", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IsometricLeft", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IsometricLeftHigh", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IsometricRight", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IsometricRightHigh", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DirectlyAbove", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DirectlyAboveCW45", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DirectlyAboveCCW45", Q_NULLPTR)
         << QApplication::translate("MainWindow", "FrontBelow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "LeftBelow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "RightBelow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BehindBelow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DirectlyBelow", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("MainWindow", "\351\241\271\347\232\204\351\242\234\350\211\262", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\260\264\345\271\263\346\227\213\350\275\254", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\345\236\202\347\233\264\346\227\213\350\275\254", Q_NULLPTR));
        cBoxSelectionMode->clear();
        cBoxSelectionMode->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Item", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Row", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ItemAndRow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Column", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ItemAndColumn", Q_NULLPTR)
         << QApplication::translate("MainWindow", "RowAndColumn", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ItemRowAndColumn", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Slice", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "\347\274\251\346\224\276", Q_NULLPTR));
        choBoxBackground->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\243\222\345\233\276\346\240\267\345\274\217", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\351\242\204\350\256\276\350\247\206\350\247\222", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223\345\244\247\345\260\217", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "\345\205\211\346\273\221\346\225\210\346\236\234", Q_NULLPTR));
        cBoxBarStyle->clear();
        cBoxBarStyle->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "UserDefined", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Bar", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cube", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Pyramid", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cone", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cylinder", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BevelBar", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BevelCube", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Sphere", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Minimal", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Arrow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Point", Q_NULLPTR)
        );
        cBoxTheme->clear();
        cBoxTheme->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Qt", Q_NULLPTR)
         << QApplication::translate("MainWindow", "PrimaryColors", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Digia", Q_NULLPTR)
         << QApplication::translate("MainWindow", "StoneMoss", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ArmyBlue", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Retro", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ebony", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Isabelle", Q_NULLPTR)
         << QApplication::translate("MainWindow", "UserDefined", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "\344\270\273\351\242\230", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\250\241\345\274\217", Q_NULLPTR));
        chkBoxItemLabel->setText(QApplication::translate("MainWindow", "\351\241\271\347\232\204\346\240\207\347\255\276\345\217\257\350\247\201", Q_NULLPTR));
        chkBoxReverse->setText(QApplication::translate("MainWindow", "\346\225\260\345\200\274\345\235\220\346\240\207\350\275\264\345\217\215\345\220\221", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\200\222\345\275\261", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\346\240\207\351\242\230\345\217\257\350\247\201", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\345\215\225\344\270\200\351\242\234\350\211\262", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\346\270\220\345\217\230\350\211\2622", Q_NULLPTR));
        btnGrad1->setText(QString());
        btnGrad2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
