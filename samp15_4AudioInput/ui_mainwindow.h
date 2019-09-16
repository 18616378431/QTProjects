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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actDeviceTest;
    QAction *actStart;
    QAction *actStop;
    QAction *actQuit;
    QWidget *centralWidget;
    QSplitter *splitter_2;
    QGroupBox *groupBoxDevice;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboDevices;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *comboCodec;
    QComboBox *comboSampleRate;
    QLabel *label_5;
    QComboBox *comboChannels;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboSampleTypes;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboSampleSize;
    QComboBox *comboByteOrder;
    QLabel *label_8;
    QSplitter *splitter;
    QGroupBox *groupBoxChart;
    QChartView *chartView;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LabBufferSize;
    QLabel *LabBlockSize;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(683, 494);
        actDeviceTest = new QAction(MainWindow);
        actDeviceTest->setObjectName(QStringLiteral("actDeviceTest"));
        actStart = new QAction(MainWindow);
        actStart->setObjectName(QStringLiteral("actStart"));
        actStop = new QAction(MainWindow);
        actStop->setObjectName(QStringLiteral("actStop"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(10, 10, 661, 411));
        splitter_2->setOrientation(Qt::Horizontal);
        groupBoxDevice = new QGroupBox(splitter_2);
        groupBoxDevice->setObjectName(QStringLiteral("groupBoxDevice"));
        groupBoxDevice->setMinimumSize(QSize(200, 0));
        horizontalLayoutWidget = new QWidget(groupBoxDevice);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 221, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboDevices = new QComboBox(horizontalLayoutWidget);
        comboDevices->setObjectName(QStringLiteral("comboDevices"));

        horizontalLayout->addWidget(comboDevices);

        gridLayoutWidget = new QWidget(groupBoxDevice);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 70, 221, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboCodec = new QComboBox(gridLayoutWidget);
        comboCodec->setObjectName(QStringLiteral("comboCodec"));

        gridLayout->addWidget(comboCodec, 0, 1, 1, 1);

        comboSampleRate = new QComboBox(gridLayoutWidget);
        comboSampleRate->setObjectName(QStringLiteral("comboSampleRate"));

        gridLayout->addWidget(comboSampleRate, 1, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        comboChannels = new QComboBox(gridLayoutWidget);
        comboChannels->setObjectName(QStringLiteral("comboChannels"));

        gridLayout->addWidget(comboChannels, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        comboSampleTypes = new QComboBox(gridLayoutWidget);
        comboSampleTypes->setObjectName(QStringLiteral("comboSampleTypes"));

        gridLayout->addWidget(comboSampleTypes, 3, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        comboSampleSize = new QComboBox(gridLayoutWidget);
        comboSampleSize->setObjectName(QStringLiteral("comboSampleSize"));

        gridLayout->addWidget(comboSampleSize, 4, 1, 1, 1);

        comboByteOrder = new QComboBox(gridLayoutWidget);
        comboByteOrder->setObjectName(QStringLiteral("comboByteOrder"));

        gridLayout->addWidget(comboByteOrder, 5, 1, 1, 1);

        label_8 = new QLabel(groupBoxDevice);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 310, 211, 101));
        splitter_2->addWidget(groupBoxDevice);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBoxChart = new QGroupBox(splitter);
        groupBoxChart->setObjectName(QStringLiteral("groupBoxChart"));
        groupBoxChart->setMinimumSize(QSize(0, 300));
        chartView = new QChartView(groupBoxChart);
        chartView->setObjectName(QStringLiteral("chartView"));
        chartView->setGeometry(QRect(5, 31, 800, 500));
        chartView->setMinimumSize(QSize(800, 500));
        splitter->addWidget(groupBoxChart);
        horizontalLayoutWidget_2 = new QWidget(splitter);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        LabBufferSize = new QLabel(horizontalLayoutWidget_2);
        LabBufferSize->setObjectName(QStringLiteral("LabBufferSize"));

        horizontalLayout_2->addWidget(LabBufferSize);

        LabBlockSize = new QLabel(horizontalLayoutWidget_2);
        LabBlockSize->setObjectName(QStringLiteral("LabBlockSize"));

        horizontalLayout_2->addWidget(LabBlockSize);

        splitter->addWidget(horizontalLayoutWidget_2);
        splitter_2->addWidget(splitter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 683, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actDeviceTest);
        mainToolBar->addAction(actStart);
        mainToolBar->addAction(actStop);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actDeviceTest->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\351\237\263\351\242\221\350\256\276\347\275\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDeviceTest->setToolTip(QApplication::translate("MainWindow", "\346\265\213\350\257\225\351\237\263\351\242\221\350\256\276\347\275\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actStart->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actStart->setToolTip(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actStop->setToolTip(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBoxDevice->setTitle(QApplication::translate("MainWindow", "\346\224\257\346\214\201\347\232\204\351\237\263\351\242\221\350\276\223\345\205\245\350\256\276\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\351\237\263\351\242\221\350\276\223\345\205\245\350\256\276\345\244\207", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "codec", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "SampleType", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Frequency (Hz)", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Channels", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Sample size(bits)", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Endianness", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\344\270\272\344\272\206\345\244\204\347\220\206\346\226\271\344\276\277,\346\234\254\347\250\213\345\272\217\345\233\272\345\256\232\351\207\207\346\240\267\346\226\271\345\274\217:\n"
"\n"
"8000Hz,1 \351\200\232\351\201\223,audio/pcm\n"
"\n"
"8 bits,UnSigned int,LittleEndian", Q_NULLPTR));
        groupBoxChart->setTitle(QApplication::translate("MainWindow", "\345\256\236\346\227\266\350\276\223\345\205\245\351\237\263\351\242\221\346\263\242\345\275\242", Q_NULLPTR));
        LabBufferSize->setText(QApplication::translate("MainWindow", "QAudioInput::bufferSize()=4000", Q_NULLPTR));
        LabBlockSize->setText(QApplication::translate("MainWindow", "QIODevice\346\225\260\346\215\256\345\235\227\345\255\227\350\212\202\346\225\260=800", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
