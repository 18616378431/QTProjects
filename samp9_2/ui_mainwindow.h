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
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actRefresh;
    QAction *actZoomIn;
    QAction *actZoomOut;
    QAction *actRestore;
    QAction *actQuit;
    QWidget *centralWidget;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page1;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnSetChartTitle;
    QLineEdit *editTitle;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QCheckBox *checkBox_2;
    QPushButton *btnLegendFont;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QSpinBox *spinMarginLeft;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinMarginBottom;
    QSpinBox *spinMarginTop;
    QLabel *label_3;
    QSpinBox *spinMarginRight;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_4;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QComboBox *comboBox;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QWidget *page2;
    QGroupBox *groupBox_5;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QRadioButton *radioSeries0;
    QRadioButton *radioSeries1;
    QGroupBox *groupBox_6;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QCheckBox *chkPointVisible;
    QPushButton *pushButton_6;
    QCheckBox *chkSeriesVisible;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QLineEdit *editSeriesName;
    QLabel *label_7;
    QSlider *sliderSeriesOpacity;
    QGroupBox *groupBox_7;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_7;
    QCheckBox *chkPointLabelVisible;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QGroupBox *groupBox_8;
    QWidget *gridLayoutWidget_8;
    QGridLayout *gridLayout_8;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QWidget *page3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox_9;
    QWidget *gridLayoutWidget_9;
    QGridLayout *gridLayout_9;
    QRadioButton *radioX;
    QRadioButton *radioY;
    QGroupBox *groupBox_10;
    QWidget *gridLayoutWidget_10;
    QGridLayout *gridLayout_10;
    QLabel *label_9;
    QLabel *label_8;
    QSpinBox *spinAxisMin;
    QCheckBox *chkAxisLineVisible;
    QSpinBox *spinAxisMax;
    QPushButton *pushButton;
    QGroupBox *groupBox_11;
    QWidget *gridLayoutWidget_11;
    QGridLayout *gridLayout_11;
    QPushButton *pushButton_3;
    QLineEdit *editAxisTitle;
    QCheckBox *chkBoxAxisTitle;
    QPushButton *pushButton_11;
    QGroupBox *groupBox_13;
    QWidget *gridLayoutWidget_13;
    QGridLayout *gridLayout_13;
    QCheckBox *chkGridLineVisible;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QWidget *page;
    QGroupBox *groupBox_14;
    QWidget *gridLayoutWidget_14;
    QGridLayout *gridLayout_14;
    QSpinBox *spinTickCount;
    QCheckBox *chkAxisTickVisible;
    QLabel *label_10;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QGroupBox *groupBox_15;
    QWidget *gridLayoutWidget_15;
    QGridLayout *gridLayout_15;
    QPushButton *pushButton_19;
    QLabel *label_11;
    QSpinBox *spinMinorTickCount;
    QCheckBox *chkMinorTickVisible;
    QPushButton *pushButton_20;
    QGroupBox *groupBox_12;
    QWidget *gridLayoutWidget_12;
    QGridLayout *gridLayout_12;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QLineEdit *editAxisLabelFormat;
    QCheckBox *chkBoxLabelsVisible;
    QChartView *chartView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1013, 934);
        actRefresh = new QAction(MainWindow);
        actRefresh->setObjectName(QStringLiteral("actRefresh"));
        actZoomIn = new QAction(MainWindow);
        actZoomIn->setObjectName(QStringLiteral("actZoomIn"));
        actZoomOut = new QAction(MainWindow);
        actZoomOut->setObjectName(QStringLiteral("actZoomOut"));
        actRestore = new QAction(MainWindow);
        actRestore->setObjectName(QStringLiteral("actRestore"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(10, 10, 991, 841));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMaximumSize(QSize(230, 16777215));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        page1->setGeometry(QRect(0, 0, 230, 693));
        groupBox = new QGroupBox(page1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 221, 111));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 40, 201, 67));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnSetChartTitle = new QPushButton(gridLayoutWidget);
        btnSetChartTitle->setObjectName(QStringLiteral("btnSetChartTitle"));

        gridLayout->addWidget(btnSetChartTitle, 0, 1, 1, 1);

        editTitle = new QLineEdit(gridLayoutWidget);
        editTitle->setObjectName(QStringLiteral("editTitle"));

        gridLayout->addWidget(editTitle, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(page1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 120, 221, 141));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 30, 201, 107));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(gridLayoutWidget_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 2, 0, 1, 1);

        radioButton = new QRadioButton(gridLayoutWidget_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        gridLayout_2->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_4 = new QRadioButton(gridLayoutWidget_2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        gridLayout_2->addWidget(radioButton_4, 1, 1, 1, 1);

        radioButton_3 = new QRadioButton(gridLayoutWidget_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout_2->addWidget(radioButton_3, 1, 0, 1, 1);

        radioButton_2 = new QRadioButton(gridLayoutWidget_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 0, 1, 1, 1);

        checkBox_2 = new QCheckBox(gridLayoutWidget_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout_2->addWidget(checkBox_2, 2, 1, 1, 1);

        btnLegendFont = new QPushButton(gridLayoutWidget_2);
        btnLegendFont->setObjectName(QStringLiteral("btnLegendFont"));

        gridLayout_2->addWidget(btnLegendFont, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 3, 1, 1, 1);

        groupBox_3 = new QGroupBox(page1);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 270, 221, 181));
        gridLayoutWidget_3 = new QWidget(groupBox_3);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 30, 201, 128));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        spinMarginLeft = new QSpinBox(gridLayoutWidget_3);
        spinMarginLeft->setObjectName(QStringLiteral("spinMarginLeft"));
        spinMarginLeft->setValue(99);

        gridLayout_3->addWidget(spinMarginLeft, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        spinMarginBottom = new QSpinBox(gridLayoutWidget_3);
        spinMarginBottom->setObjectName(QStringLiteral("spinMarginBottom"));
        spinMarginBottom->setValue(99);

        gridLayout_3->addWidget(spinMarginBottom, 3, 1, 1, 1);

        spinMarginTop = new QSpinBox(gridLayoutWidget_3);
        spinMarginTop->setObjectName(QStringLiteral("spinMarginTop"));
        spinMarginTop->setValue(99);

        gridLayout_3->addWidget(spinMarginTop, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        spinMarginRight = new QSpinBox(gridLayoutWidget_3);
        spinMarginRight->setObjectName(QStringLiteral("spinMarginRight"));
        spinMarginRight->setValue(99);

        gridLayout_3->addWidget(spinMarginRight, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 160, 113, 32));
        groupBox_4 = new QGroupBox(page1);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 450, 221, 111));
        gridLayoutWidget_4 = new QWidget(groupBox_4);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 30, 230, 71));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(gridLayoutWidget_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_4->addWidget(comboBox, 0, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget_4);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout_4->addWidget(comboBox_2, 1, 1, 1, 1);

        toolBox->addItem(page1, QString::fromUtf8("\345\233\276\350\241\250\350\256\276\347\275\256"));
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        page2->setGeometry(QRect(0, 0, 230, 693));
        groupBox_5 = new QGroupBox(page2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 0, 221, 101));
        gridLayoutWidget_5 = new QWidget(groupBox_5);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(10, 30, 211, 51));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        radioSeries0 = new QRadioButton(gridLayoutWidget_5);
        radioSeries0->setObjectName(QStringLiteral("radioSeries0"));
        radioSeries0->setChecked(true);

        gridLayout_5->addWidget(radioSeries0, 0, 0, 1, 1);

        radioSeries1 = new QRadioButton(gridLayoutWidget_5);
        radioSeries1->setObjectName(QStringLiteral("radioSeries1"));

        gridLayout_5->addWidget(radioSeries1, 0, 1, 1, 1);

        groupBox_6 = new QGroupBox(page2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 110, 221, 181));
        gridLayoutWidget_6 = new QWidget(groupBox_6);
        gridLayoutWidget_6->setObjectName(QStringLiteral("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(10, 30, 212, 126));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        chkPointVisible = new QCheckBox(gridLayoutWidget_6);
        chkPointVisible->setObjectName(QStringLiteral("chkPointVisible"));

        gridLayout_6->addWidget(chkPointVisible, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget_6);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_6->addWidget(pushButton_6, 0, 0, 1, 1);

        chkSeriesVisible = new QCheckBox(gridLayoutWidget_6);
        chkSeriesVisible->setObjectName(QStringLiteral("chkSeriesVisible"));

        gridLayout_6->addWidget(chkSeriesVisible, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget_6);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout_6->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget_6);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_6->addWidget(pushButton_7, 2, 0, 1, 1);

        editSeriesName = new QLineEdit(gridLayoutWidget_6);
        editSeriesName->setObjectName(QStringLiteral("editSeriesName"));

        gridLayout_6->addWidget(editSeriesName, 0, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_6);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_6->addWidget(label_7, 3, 0, 1, 1);

        sliderSeriesOpacity = new QSlider(gridLayoutWidget_6);
        sliderSeriesOpacity->setObjectName(QStringLiteral("sliderSeriesOpacity"));
        sliderSeriesOpacity->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(sliderSeriesOpacity, 3, 1, 1, 1);

        groupBox_7 = new QGroupBox(page2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 300, 221, 191));
        gridLayoutWidget_7 = new QWidget(groupBox_7);
        gridLayoutWidget_7->setObjectName(QStringLiteral("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(10, 30, 201, 151));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        chkPointLabelVisible = new QCheckBox(gridLayoutWidget_7);
        chkPointLabelVisible->setObjectName(QStringLiteral("chkPointLabelVisible"));

        gridLayout_7->addWidget(chkPointLabelVisible, 0, 0, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget_7);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout_7->addWidget(pushButton_9, 1, 0, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget_7);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        gridLayout_7->addWidget(pushButton_10, 2, 0, 1, 1);

        groupBox_8 = new QGroupBox(page2);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 500, 221, 131));
        gridLayoutWidget_8 = new QWidget(groupBox_8);
        gridLayoutWidget_8->setObjectName(QStringLiteral("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(10, 40, 201, 71));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_8);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        checkBox_6 = new QCheckBox(gridLayoutWidget_8);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setChecked(true);

        gridLayout_8->addWidget(checkBox_6, 0, 0, 1, 1);

        checkBox_7 = new QCheckBox(gridLayoutWidget_8);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        gridLayout_8->addWidget(checkBox_7, 1, 0, 1, 1);

        toolBox->addItem(page2, QString::fromUtf8("\346\233\262\347\272\277\350\256\276\347\275\256"));
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        page3->setGeometry(QRect(0, 0, 230, 693));
        scrollArea = new QScrollArea(page3);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 221, 721));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 219, 719));
        groupBox_9 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(0, 10, 221, 81));
        gridLayoutWidget_9 = new QWidget(groupBox_9);
        gridLayoutWidget_9->setObjectName(QStringLiteral("gridLayoutWidget_9"));
        gridLayoutWidget_9->setGeometry(QRect(10, 30, 201, 41));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_9);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        radioX = new QRadioButton(gridLayoutWidget_9);
        radioX->setObjectName(QStringLiteral("radioX"));
        radioX->setChecked(true);

        gridLayout_9->addWidget(radioX, 0, 0, 1, 1);

        radioY = new QRadioButton(gridLayoutWidget_9);
        radioY->setObjectName(QStringLiteral("radioY"));

        gridLayout_9->addWidget(radioY, 0, 1, 1, 1);

        groupBox_10 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(0, 100, 221, 151));
        gridLayoutWidget_10 = new QWidget(groupBox_10);
        gridLayoutWidget_10->setObjectName(QStringLiteral("gridLayoutWidget_10"));
        gridLayoutWidget_10->setGeometry(QRect(10, 20, 201, 124));
        gridLayout_10 = new QGridLayout(gridLayoutWidget_10);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(gridLayoutWidget_10);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_10->addWidget(label_9, 1, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_10);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_10->addWidget(label_8, 0, 0, 1, 1);

        spinAxisMin = new QSpinBox(gridLayoutWidget_10);
        spinAxisMin->setObjectName(QStringLiteral("spinAxisMin"));

        gridLayout_10->addWidget(spinAxisMin, 0, 1, 1, 1);

        chkAxisLineVisible = new QCheckBox(gridLayoutWidget_10);
        chkAxisLineVisible->setObjectName(QStringLiteral("chkAxisLineVisible"));

        gridLayout_10->addWidget(chkAxisLineVisible, 2, 0, 1, 1);

        spinAxisMax = new QSpinBox(gridLayoutWidget_10);
        spinAxisMax->setObjectName(QStringLiteral("spinAxisMax"));

        gridLayout_10->addWidget(spinAxisMax, 1, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget_10);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_10->addWidget(pushButton, 3, 0, 1, 1);

        groupBox_11 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(0, 260, 221, 151));
        gridLayoutWidget_11 = new QWidget(groupBox_11);
        gridLayoutWidget_11->setObjectName(QStringLiteral("gridLayoutWidget_11"));
        gridLayoutWidget_11->setGeometry(QRect(0, 20, 211, 121));
        gridLayout_11 = new QGridLayout(gridLayoutWidget_11);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(gridLayoutWidget_11);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_11->addWidget(pushButton_3, 0, 0, 1, 1);

        editAxisTitle = new QLineEdit(gridLayoutWidget_11);
        editAxisTitle->setObjectName(QStringLiteral("editAxisTitle"));

        gridLayout_11->addWidget(editAxisTitle, 0, 1, 1, 1);

        chkBoxAxisTitle = new QCheckBox(gridLayoutWidget_11);
        chkBoxAxisTitle->setObjectName(QStringLiteral("chkBoxAxisTitle"));

        gridLayout_11->addWidget(chkBoxAxisTitle, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget_11);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        gridLayout_11->addWidget(pushButton_11, 1, 1, 1, 1);

        groupBox_13 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(0, 420, 211, 111));
        gridLayoutWidget_13 = new QWidget(groupBox_13);
        gridLayoutWidget_13->setObjectName(QStringLiteral("gridLayoutWidget_13"));
        gridLayoutWidget_13->setGeometry(QRect(0, 20, 211, 92));
        gridLayout_13 = new QGridLayout(gridLayoutWidget_13);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        chkGridLineVisible = new QCheckBox(gridLayoutWidget_13);
        chkGridLineVisible->setObjectName(QStringLiteral("chkGridLineVisible"));

        gridLayout_13->addWidget(chkGridLineVisible, 0, 0, 1, 1);

        pushButton_15 = new QPushButton(gridLayoutWidget_13);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        gridLayout_13->addWidget(pushButton_15, 1, 0, 1, 1);

        pushButton_16 = new QPushButton(gridLayoutWidget_13);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));

        gridLayout_13->addWidget(pushButton_16, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        toolBox->addItem(page3, QString::fromUtf8("\345\235\220\346\240\207\350\275\264\350\256\276\347\275\256"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 230, 693));
        groupBox_14 = new QGroupBox(page);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setGeometry(QRect(0, 0, 231, 161));
        gridLayoutWidget_14 = new QWidget(groupBox_14);
        gridLayoutWidget_14->setObjectName(QStringLiteral("gridLayoutWidget_14"));
        gridLayoutWidget_14->setGeometry(QRect(10, 30, 211, 124));
        gridLayout_14 = new QGridLayout(gridLayoutWidget_14);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        spinTickCount = new QSpinBox(gridLayoutWidget_14);
        spinTickCount->setObjectName(QStringLiteral("spinTickCount"));

        gridLayout_14->addWidget(spinTickCount, 0, 1, 1, 1);

        chkAxisTickVisible = new QCheckBox(gridLayoutWidget_14);
        chkAxisTickVisible->setObjectName(QStringLiteral("chkAxisTickVisible"));
        chkAxisTickVisible->setChecked(true);

        gridLayout_14->addWidget(chkAxisTickVisible, 1, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_14);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_14->addWidget(label_10, 0, 0, 1, 1);

        pushButton_17 = new QPushButton(gridLayoutWidget_14);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));

        gridLayout_14->addWidget(pushButton_17, 2, 0, 1, 1);

        pushButton_18 = new QPushButton(gridLayoutWidget_14);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));

        gridLayout_14->addWidget(pushButton_18, 3, 0, 1, 1);

        groupBox_15 = new QGroupBox(page);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        groupBox_15->setGeometry(QRect(0, 170, 221, 161));
        gridLayoutWidget_15 = new QWidget(groupBox_15);
        gridLayoutWidget_15->setObjectName(QStringLiteral("gridLayoutWidget_15"));
        gridLayoutWidget_15->setGeometry(QRect(0, 30, 221, 124));
        gridLayout_15 = new QGridLayout(gridLayoutWidget_15);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        pushButton_19 = new QPushButton(gridLayoutWidget_15);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));

        gridLayout_15->addWidget(pushButton_19, 2, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_15);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_15->addWidget(label_11, 0, 0, 1, 1);

        spinMinorTickCount = new QSpinBox(gridLayoutWidget_15);
        spinMinorTickCount->setObjectName(QStringLiteral("spinMinorTickCount"));

        gridLayout_15->addWidget(spinMinorTickCount, 0, 1, 1, 1);

        chkMinorTickVisible = new QCheckBox(gridLayoutWidget_15);
        chkMinorTickVisible->setObjectName(QStringLiteral("chkMinorTickVisible"));

        gridLayout_15->addWidget(chkMinorTickVisible, 1, 0, 1, 1);

        pushButton_20 = new QPushButton(gridLayoutWidget_15);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));

        gridLayout_15->addWidget(pushButton_20, 3, 0, 1, 1);

        groupBox_12 = new QGroupBox(page);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(0, 340, 221, 131));
        gridLayoutWidget_12 = new QWidget(groupBox_12);
        gridLayoutWidget_12->setObjectName(QStringLiteral("gridLayoutWidget_12"));
        gridLayoutWidget_12->setGeometry(QRect(0, 30, 211, 91));
        gridLayout_12 = new QGridLayout(gridLayoutWidget_12);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        pushButton_12 = new QPushButton(gridLayoutWidget_12);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        gridLayout_12->addWidget(pushButton_12, 0, 0, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget_12);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        gridLayout_12->addWidget(pushButton_13, 1, 0, 1, 1);

        pushButton_14 = new QPushButton(gridLayoutWidget_12);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        gridLayout_12->addWidget(pushButton_14, 1, 1, 1, 1);

        editAxisLabelFormat = new QLineEdit(gridLayoutWidget_12);
        editAxisLabelFormat->setObjectName(QStringLiteral("editAxisLabelFormat"));

        gridLayout_12->addWidget(editAxisLabelFormat, 0, 1, 1, 1);

        chkBoxLabelsVisible = new QCheckBox(gridLayoutWidget_12);
        chkBoxLabelsVisible->setObjectName(QStringLiteral("chkBoxLabelsVisible"));
        chkBoxLabelsVisible->setChecked(true);

        gridLayout_12->addWidget(chkBoxLabelsVisible, 2, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("\345\235\220\346\240\207\350\275\264\350\256\276\347\275\2561"));
        splitter->addWidget(toolBox);
        chartView = new QChartView(splitter);
        chartView->setObjectName(QStringLiteral("chartView"));
        splitter->addWidget(chartView);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1013, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actRefresh);
        mainToolBar->addAction(actZoomIn);
        mainToolBar->addAction(actZoomOut);
        mainToolBar->addAction(actRestore);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        toolBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actRefresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\347\273\230\345\233\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRefresh->setToolTip(QApplication::translate("MainWindow", "\345\210\267\346\226\260\347\273\230\345\233\276", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actZoomIn->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomIn->setToolTip(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actZoomOut->setText(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomOut->setToolTip(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRestore->setText(QApplication::translate("MainWindow", "\345\216\237\345\247\213\345\244\247\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRestore->setToolTip(QApplication::translate("MainWindow", "\345\216\237\345\247\213\345\244\247\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\240\207\351\242\230", Q_NULLPTR));
        btnSetChartTitle->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
        editTitle->setText(QApplication::translate("MainWindow", "\347\256\200\345\215\225\345\207\275\346\225\260\346\233\262\347\272\277", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\207\351\242\230\345\255\227\344\275\223", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\233\276\344\276\213", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\345\233\276\344\276\213\345\217\257\350\247\201", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "\344\270\212\346\226\271", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "\345\217\263\346\226\271", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "\345\267\246\346\226\271", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "\344\270\213\346\226\271", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "\350\203\214\346\231\257\345\217\257\350\247\201", Q_NULLPTR));
        btnLegendFont->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\346\240\207\347\255\276\351\242\234\350\211\262", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\350\276\271\350\267\235", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\344\270\213\350\276\271\350\267\235", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\267\246\350\276\271\350\267\235", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\217\263\350\276\271\350\267\235", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\344\270\212\350\276\271\350\267\235", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\276\271\350\267\235", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\345\212\250\347\224\273\346\225\210\346\236\234", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NoAnimation", Q_NULLPTR)
         << QApplication::translate("MainWindow", "GridAxisAnimations", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "\345\212\250\347\224\273\346\225\210\346\236\234", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\344\270\273\351\242\230", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Light", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Test", Q_NULLPTR)
        );
        toolBox->setItemText(toolBox->indexOf(page1), QApplication::translate("MainWindow", "\345\233\276\350\241\250\350\256\276\347\275\256", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\223\215\344\275\234\345\272\217\345\210\227", Q_NULLPTR));
        radioSeries0->setText(QApplication::translate("MainWindow", "Sin \346\233\262\347\272\277", Q_NULLPTR));
        radioSeries1->setText(QApplication::translate("MainWindow", "Cos \346\233\262\347\272\277", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\346\233\262\347\272\277\345\244\226\350\247\202", Q_NULLPTR));
        chkPointVisible->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\345\217\257\350\247\201", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "\345\272\217\345\210\227\345\220\215\347\247\260", Q_NULLPTR));
        chkSeriesVisible->setText(QApplication::translate("MainWindow", "\345\272\217\345\210\227\345\217\257\350\247\201", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "\346\233\262\347\272\277Pen", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "\346\233\262\347\272\277\351\242\234\350\211\262", Q_NULLPTR));
        editSeriesName->setText(QApplication::translate("MainWindow", "Sin \346\233\262\347\272\277", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\351\200\217\346\230\216\345\272\246", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\346\240\207\347\255\276", Q_NULLPTR));
        chkPointLabelVisible->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\346\240\207\347\255\276\345\217\257\350\247\201", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "\346\240\207\347\255\276\351\242\234\350\211\262", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "\346\240\207\347\255\276\345\255\227\344\275\223", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\346\240\207\347\255\276\346\240\274\345\274\217", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("MainWindow", "@myPoint", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("MainWindow", "(@xPoint,@yPoint)", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page2), QApplication::translate("MainWindow", "\346\233\262\347\272\277\350\256\276\347\275\256", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\235\220\346\240\207\350\275\264\345\257\271\350\261\241", Q_NULLPTR));
        radioX->setText(QApplication::translate("MainWindow", "X\350\275\264", Q_NULLPTR));
        radioY->setText(QApplication::translate("MainWindow", "Y\350\275\264", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\346\200\273\344\275\223", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\345\200\274", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\346\234\200\345\260\217\345\200\274", Q_NULLPTR));
        chkAxisLineVisible->setText(QApplication::translate("MainWindow", "isVisible", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\235\220\346\240\207\350\275\264\350\214\203\345\233\264", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "\350\275\264\346\240\207\351\242\230", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\207\351\242\230", Q_NULLPTR));
        editAxisTitle->setText(QApplication::translate("MainWindow", "time(secs)", Q_NULLPTR));
        chkBoxAxisTitle->setText(QApplication::translate("MainWindow", "isTitleVisible", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "GridLine", Q_NULLPTR));
        chkGridLineVisible->setText(QApplication::translate("MainWindow", "IsGridLineVisible", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "gridLineColor", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("MainWindow", "gridLinePen", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page3), QApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\350\256\276\347\275\256", Q_NULLPTR));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "Axis and Ticks", Q_NULLPTR));
        chkAxisTickVisible->setText(QApplication::translate("MainWindow", "isLineVIsible", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Ticks\344\270\252\346\225\260", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "linePen", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("MainWindow", "linePenColor", Q_NULLPTR));
        groupBox_15->setTitle(QApplication::translate("MainWindow", "MinorTick", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MainWindow", "minorGridLineColor", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "MinorTick\344\270\252\346\225\260", Q_NULLPTR));
        chkMinorTickVisible->setText(QApplication::translate("MainWindow", "isMinorGridLineVisible", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("MainWindow", "minorGridLinePen", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "\350\275\264\345\210\273\345\272\246\346\240\207\347\255\276", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "\346\240\207\347\255\276\346\240\274\345\274\217", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\351\242\234\350\211\262", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223", Q_NULLPTR));
        editAxisLabelFormat->setText(QApplication::translate("MainWindow", "%.1f", Q_NULLPTR));
        chkBoxLabelsVisible->setText(QApplication::translate("MainWindow", "labelsVisible", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\350\256\276\347\275\2561", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
