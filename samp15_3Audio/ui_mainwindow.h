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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actRecord;
    QAction *actPause;
    QAction *actStop;
    QAction *actQuit;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnGetFile;
    QLineEdit *editOutputFile;
    QLabel *LabPassTime;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboChannels;
    QLabel *label_2;
    QLabel *label_5;
    QComboBox *comboCodec;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *comboDevices;
    QComboBox *comboSampleRate;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QSpinBox *spin_byteCount;
    QSpinBox *spin_frameCount;
    QSpinBox *spin_duration;
    QLabel *label_9;
    QSpinBox *spin_sampleCount;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QSpinBox *spin_channelCount;
    QLabel *label_10;
    QLineEdit *edit_sampleType;
    QLabel *label_14;
    QLineEdit *edit_codec;
    QSpinBox *spin_sampleSize;
    QLineEdit *edit_byteOrder;
    QLabel *label_11;
    QLabel *label_15;
    QLabel *label_12;
    QSpinBox *spin_sampleRate;
    QLabel *label_13;
    QLabel *label_16;
    QSpinBox *spin_bytesPerFrame;
    QGroupBox *groupBox_4;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QSlider *sliderQuality;
    QComboBox *comboBitrate;
    QRadioButton *radioQuality;
    QRadioButton *radioButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(608, 644);
        actRecord = new QAction(MainWindow);
        actRecord->setObjectName(QStringLiteral("actRecord"));
        actPause = new QAction(MainWindow);
        actPause->setObjectName(QStringLiteral("actPause"));
        actStop = new QAction(MainWindow);
        actStop->setObjectName(QStringLiteral("actStop"));
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
        btnGetFile = new QPushButton(horizontalLayoutWidget);
        btnGetFile->setObjectName(QStringLiteral("btnGetFile"));

        horizontalLayout->addWidget(btnGetFile);

        editOutputFile = new QLineEdit(horizontalLayoutWidget);
        editOutputFile->setObjectName(QStringLiteral("editOutputFile"));

        horizontalLayout->addWidget(editOutputFile);

        LabPassTime = new QLabel(horizontalLayoutWidget);
        LabPassTime->setObjectName(QStringLiteral("LabPassTime"));

        horizontalLayout->addWidget(LabPassTime);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 70, 291, 221));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 271, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboChannels = new QComboBox(gridLayoutWidget);
        comboChannels->setObjectName(QStringLiteral("comboChannels"));

        gridLayout->addWidget(comboChannels, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        comboCodec = new QComboBox(gridLayoutWidget);
        comboCodec->setObjectName(QStringLiteral("comboCodec"));

        gridLayout->addWidget(comboCodec, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        comboDevices = new QComboBox(gridLayoutWidget);
        comboDevices->setObjectName(QStringLiteral("comboDevices"));

        gridLayout->addWidget(comboDevices, 0, 1, 1, 1);

        comboSampleRate = new QComboBox(gridLayoutWidget);
        comboSampleRate->setObjectName(QStringLiteral("comboSampleRate"));

        gridLayout->addWidget(comboSampleRate, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 70, 291, 221));
        gridLayoutWidget_3 = new QWidget(groupBox_2);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 30, 271, 181));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(gridLayoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        spin_byteCount = new QSpinBox(gridLayoutWidget_3);
        spin_byteCount->setObjectName(QStringLiteral("spin_byteCount"));
        spin_byteCount->setMaximum(65535);

        gridLayout_3->addWidget(spin_byteCount, 0, 1, 1, 1);

        spin_frameCount = new QSpinBox(gridLayoutWidget_3);
        spin_frameCount->setObjectName(QStringLiteral("spin_frameCount"));
        spin_frameCount->setMaximum(65535);

        gridLayout_3->addWidget(spin_frameCount, 2, 1, 1, 1);

        spin_duration = new QSpinBox(gridLayoutWidget_3);
        spin_duration->setObjectName(QStringLiteral("spin_duration"));
        spin_duration->setMaximum(65535);

        gridLayout_3->addWidget(spin_duration, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 3, 0, 1, 1);

        spin_sampleCount = new QSpinBox(gridLayoutWidget_3);
        spin_sampleCount->setObjectName(QStringLiteral("spin_sampleCount"));
        spin_sampleCount->setMaximum(65535);

        gridLayout_3->addWidget(spin_sampleCount, 3, 1, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(310, 300, 291, 271));
        gridLayoutWidget_4 = new QWidget(groupBox_3);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 30, 271, 231));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        spin_channelCount = new QSpinBox(gridLayoutWidget_4);
        spin_channelCount->setObjectName(QStringLiteral("spin_channelCount"));
        spin_channelCount->setMaximum(65535);

        gridLayout_4->addWidget(spin_channelCount, 0, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        edit_sampleType = new QLineEdit(gridLayoutWidget_4);
        edit_sampleType->setObjectName(QStringLiteral("edit_sampleType"));

        gridLayout_4->addWidget(edit_sampleType, 3, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_4);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_4->addWidget(label_14, 4, 0, 1, 1);

        edit_codec = new QLineEdit(gridLayoutWidget_4);
        edit_codec->setObjectName(QStringLiteral("edit_codec"));

        gridLayout_4->addWidget(edit_codec, 2, 1, 1, 1);

        spin_sampleSize = new QSpinBox(gridLayoutWidget_4);
        spin_sampleSize->setObjectName(QStringLiteral("spin_sampleSize"));
        spin_sampleSize->setMaximum(65535);

        gridLayout_4->addWidget(spin_sampleSize, 4, 1, 1, 1);

        edit_byteOrder = new QLineEdit(gridLayoutWidget_4);
        edit_byteOrder->setObjectName(QStringLiteral("edit_byteOrder"));

        gridLayout_4->addWidget(edit_byteOrder, 1, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 1, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_4);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_4->addWidget(label_15, 5, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 2, 0, 1, 1);

        spin_sampleRate = new QSpinBox(gridLayoutWidget_4);
        spin_sampleRate->setObjectName(QStringLiteral("spin_sampleRate"));
        spin_sampleRate->setMaximum(65535);

        gridLayout_4->addWidget(spin_sampleRate, 5, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_4->addWidget(label_13, 3, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_4);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_4->addWidget(label_16, 6, 0, 1, 1);

        spin_bytesPerFrame = new QSpinBox(gridLayoutWidget_4);
        spin_bytesPerFrame->setObjectName(QStringLiteral("spin_bytesPerFrame"));
        spin_bytesPerFrame->setMaximum(65535);

        gridLayout_4->addWidget(spin_bytesPerFrame, 6, 1, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 300, 291, 271));
        gridLayoutWidget_2 = new QWidget(groupBox_4);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 30, 271, 231));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        sliderQuality = new QSlider(gridLayoutWidget_2);
        sliderQuality->setObjectName(QStringLiteral("sliderQuality"));
        sliderQuality->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderQuality, 0, 1, 1, 1);

        comboBitrate = new QComboBox(gridLayoutWidget_2);
        comboBitrate->setObjectName(QStringLiteral("comboBitrate"));

        gridLayout_2->addWidget(comboBitrate, 1, 1, 1, 1);

        radioQuality = new QRadioButton(gridLayoutWidget_2);
        radioQuality->setObjectName(QStringLiteral("radioQuality"));
        radioQuality->setChecked(true);

        gridLayout_2->addWidget(radioQuality, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(gridLayoutWidget_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 608, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actRecord);
        mainToolBar->addAction(actPause);
        mainToolBar->addAction(actStop);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actRecord->setText(QApplication::translate("MainWindow", "\345\275\225\351\237\263", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRecord->setToolTip(QApplication::translate("MainWindow", "\345\275\225\351\237\263", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actPause->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPause->setToolTip(QApplication::translate("MainWindow", "\346\232\202\345\201\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actStop->setToolTip(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnGetFile->setText(QApplication::translate("MainWindow", "\345\275\225\351\237\263\350\276\223\345\207\272\346\226\207\344\273\266", Q_NULLPTR));
        LabPassTime->setText(QApplication::translate("MainWindow", "\345\267\262\345\275\225\345\210\266x\347\247\222", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\275\225\351\237\263\350\256\276\347\275\256(QAudioEncoderSettings)", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\350\256\276\345\244\207", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\351\200\232\351\201\223\346\225\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\351\207\207\346\240\267\347\216\207", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\351\237\263\351\242\221\347\274\226\347\240\201", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\216\242\346\265\213QAudioBuffer\344\277\241\346\201\257", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\347\274\223\345\206\262\345\214\272\345\270\247\346\225\260", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\347\274\223\345\206\262\345\214\272\346\227\266\351\225\277(ms)", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\347\274\223\345\206\262\345\214\272\345\255\227\350\212\202\346\225\260", Q_NULLPTR));
        spin_byteCount->setSuffix(QApplication::translate("MainWindow", " bytes", Q_NULLPTR));
        spin_duration->setSuffix(QApplication::translate("MainWindow", " ms", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\351\207\207\346\240\267\346\225\260", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "QAudioFormat\344\277\241\346\201\257", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "channelCount", Q_NULLPTR));
        edit_sampleType->setText(QApplication::translate("MainWindow", "UnSignedInt", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "sampleSize", Q_NULLPTR));
        edit_codec->setText(QApplication::translate("MainWindow", "audio/pcm", Q_NULLPTR));
        spin_sampleSize->setSuffix(QApplication::translate("MainWindow", " bits", Q_NULLPTR));
        edit_byteOrder->setText(QApplication::translate("MainWindow", "LittleEndian", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "byteOrder", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "sampleRate", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "codec", Q_NULLPTR));
        spin_sampleRate->setSuffix(QApplication::translate("MainWindow", " Hz", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "sampleType", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "bytesPerFrame", Q_NULLPTR));
        spin_bytesPerFrame->setSuffix(QApplication::translate("MainWindow", " bytes", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\347\274\226\347\240\201\346\250\241\345\274\217", Q_NULLPTR));
        radioQuality->setText(QApplication::translate("MainWindow", "\345\233\272\345\256\232\345\223\201\350\264\250", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "\345\233\272\345\256\232\346\257\224\347\211\271\347\216\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
