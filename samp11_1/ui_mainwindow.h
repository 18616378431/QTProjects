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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpenDB;
    QAction *actRecAppend;
    QAction *actRecInsert;
    QAction *actRecDelete;
    QAction *actPhoto;
    QAction *actPhotoClear;
    QAction *actScan;
    QAction *actSubmit;
    QAction *actRevert;
    QAction *actQuit;
    QWidget *centralWidget;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxSort;
    QWidget *widget;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_2;
    QComboBox *comboField;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QTableView *tableView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QSpinBox *dbSpinEmpNo;
    QLabel *label_5;
    QLineEdit *dbEditName;
    QLabel *label_6;
    QComboBox *dbComboSex;
    QLabel *label_7;
    QSpinBox *dbSpinHeight;
    QLabel *label_8;
    QDateEdit *dbEditBirth;
    QLabel *label_9;
    QLineEdit *dbEditMobile;
    QLabel *label_10;
    QComboBox *dbComboProvince;
    QLabel *label_11;
    QLineEdit *dbEditCity;
    QLabel *label_12;
    QComboBox *dbComboDep;
    QLabel *label_13;
    QComboBox *dbComboEdu;
    QLabel *label_14;
    QSpinBox *dbSpinSalary;
    QLabel *label_15;
    QTextEdit *dbEditMemo;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *dbLabPhoto;
    QLabel *label_17;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(992, 549);
        actOpenDB = new QAction(MainWindow);
        actOpenDB->setObjectName(QStringLiteral("actOpenDB"));
        actRecAppend = new QAction(MainWindow);
        actRecAppend->setObjectName(QStringLiteral("actRecAppend"));
        actRecInsert = new QAction(MainWindow);
        actRecInsert->setObjectName(QStringLiteral("actRecInsert"));
        actRecDelete = new QAction(MainWindow);
        actRecDelete->setObjectName(QStringLiteral("actRecDelete"));
        actPhoto = new QAction(MainWindow);
        actPhoto->setObjectName(QStringLiteral("actPhoto"));
        actPhotoClear = new QAction(MainWindow);
        actPhotoClear->setObjectName(QStringLiteral("actPhotoClear"));
        actScan = new QAction(MainWindow);
        actScan->setObjectName(QStringLiteral("actScan"));
        actSubmit = new QAction(MainWindow);
        actSubmit->setObjectName(QStringLiteral("actSubmit"));
        actRevert = new QAction(MainWindow);
        actRevert->setObjectName(QStringLiteral("actRevert"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(10, 10, 971, 461));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBoxSort = new QGroupBox(layoutWidget);
        groupBoxSort->setObjectName(QStringLiteral("groupBoxSort"));
        groupBoxSort->setMinimumSize(QSize(0, 100));
        widget = new QWidget(groupBoxSort);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 20, 422, 71));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 2, 1, 1, 1);

        comboField = new QComboBox(widget);
        comboField->setObjectName(QStringLiteral("comboField"));

        gridLayout->addWidget(comboField, 1, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        gridLayout->addWidget(radioButton, 2, 0, 1, 1);

        radioButton_3 = new QRadioButton(widget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout->addWidget(radioButton_3, 1, 2, 1, 1);

        radioButton_4 = new QRadioButton(widget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        gridLayout->addWidget(radioButton_4, 1, 3, 1, 1);

        radioButton_5 = new QRadioButton(widget);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        gridLayout->addWidget(radioButton_5, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBoxSort);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        splitter->addWidget(layoutWidget);
        formLayoutWidget = new QWidget(splitter);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        dbSpinEmpNo = new QSpinBox(formLayoutWidget);
        dbSpinEmpNo->setObjectName(QStringLiteral("dbSpinEmpNo"));
        dbSpinEmpNo->setMaximum(99999);

        formLayout->setWidget(0, QFormLayout::FieldRole, dbSpinEmpNo);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        dbEditName = new QLineEdit(formLayoutWidget);
        dbEditName->setObjectName(QStringLiteral("dbEditName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dbEditName);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        dbComboSex = new QComboBox(formLayoutWidget);
        dbComboSex->setObjectName(QStringLiteral("dbComboSex"));

        formLayout->setWidget(2, QFormLayout::FieldRole, dbComboSex);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        dbSpinHeight = new QSpinBox(formLayoutWidget);
        dbSpinHeight->setObjectName(QStringLiteral("dbSpinHeight"));

        formLayout->setWidget(3, QFormLayout::FieldRole, dbSpinHeight);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        dbEditBirth = new QDateEdit(formLayoutWidget);
        dbEditBirth->setObjectName(QStringLiteral("dbEditBirth"));

        formLayout->setWidget(4, QFormLayout::FieldRole, dbEditBirth);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        dbEditMobile = new QLineEdit(formLayoutWidget);
        dbEditMobile->setObjectName(QStringLiteral("dbEditMobile"));

        formLayout->setWidget(5, QFormLayout::FieldRole, dbEditMobile);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_10);

        dbComboProvince = new QComboBox(formLayoutWidget);
        dbComboProvince->setObjectName(QStringLiteral("dbComboProvince"));

        formLayout->setWidget(6, QFormLayout::FieldRole, dbComboProvince);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_11);

        dbEditCity = new QLineEdit(formLayoutWidget);
        dbEditCity->setObjectName(QStringLiteral("dbEditCity"));

        formLayout->setWidget(7, QFormLayout::FieldRole, dbEditCity);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_12);

        dbComboDep = new QComboBox(formLayoutWidget);
        dbComboDep->setObjectName(QStringLiteral("dbComboDep"));

        formLayout->setWidget(8, QFormLayout::FieldRole, dbComboDep);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_13);

        dbComboEdu = new QComboBox(formLayoutWidget);
        dbComboEdu->setObjectName(QStringLiteral("dbComboEdu"));

        formLayout->setWidget(9, QFormLayout::FieldRole, dbComboEdu);

        label_14 = new QLabel(formLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_14);

        dbSpinSalary = new QSpinBox(formLayoutWidget);
        dbSpinSalary->setObjectName(QStringLiteral("dbSpinSalary"));
        dbSpinSalary->setMaximum(99999);

        formLayout->setWidget(10, QFormLayout::FieldRole, dbSpinSalary);

        label_15 = new QLabel(formLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_15);

        dbEditMemo = new QTextEdit(formLayoutWidget);
        dbEditMemo->setObjectName(QStringLiteral("dbEditMemo"));
        dbEditMemo->setMaximumSize(QSize(300, 100));

        formLayout->setWidget(11, QFormLayout::FieldRole, dbEditMemo);

        splitter->addWidget(formLayoutWidget);
        splitter_2->addWidget(splitter);
        gridLayoutWidget_2 = new QWidget(splitter_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        dbLabPhoto = new QLabel(gridLayoutWidget_2);
        dbLabPhoto->setObjectName(QStringLiteral("dbLabPhoto"));

        gridLayout_2->addWidget(dbLabPhoto, 0, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_2->addWidget(label_17, 1, 0, 1, 1);

        splitter_2->addWidget(gridLayoutWidget_2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 992, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actOpenDB);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actRecAppend);
        mainToolBar->addAction(actRecInsert);
        mainToolBar->addAction(actRecDelete);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actPhoto);
        mainToolBar->addAction(actPhotoClear);
        mainToolBar->addAction(actScan);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actSubmit);
        mainToolBar->addAction(actRevert);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actOpenDB->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpenDB->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRecAppend->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRecAppend->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRecInsert->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRecInsert->setToolTip(QApplication::translate("MainWindow", "\346\217\222\345\205\245", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRecDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRecDelete->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actPhoto->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\347\205\247\347\211\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPhoto->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256\347\205\247\347\211\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actPhotoClear->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPhotoClear->setToolTip(QApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actScan->setText(QApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actScan->setToolTip(QApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSubmit->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSubmit->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRevert->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRevert->setToolTip(QApplication::translate("MainWindow", "\345\217\226\346\266\210", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBoxSort->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "\351\231\215\345\272\217", Q_NULLPTR));
        comboField->clear();
        comboField->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "empNo", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainWindow", "\346\216\222\345\272\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\216\222\345\272\217\345\255\227\346\256\265", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\350\277\207\346\273\244", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "\345\215\207\345\272\217", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "\347\224\267", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "\345\245\263", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("MainWindow", "\345\205\250\346\230\276\347\244\272", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\267\245\345\217\267", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253", Q_NULLPTR));
        dbComboSex->clear();
        dbComboSex->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\347\224\2671", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MainWindow", "\350\272\253\351\253\230", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", Q_NULLPTR));
        dbEditBirth->setDisplayFormat(QApplication::translate("MainWindow", "yyyy-M-d", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\345\207\272\347\224\237\347\234\201\344\273\275", Q_NULLPTR));
        dbComboProvince->clear();
        dbComboProvince->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\271\226\345\215\2271", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\262\263\345\214\227", Q_NULLPTR)
        );
        label_11->setText(QApplication::translate("MainWindow", "\345\237\216\345\270\202", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\351\203\250\351\227\250", Q_NULLPTR));
        dbComboDep->clear();
        dbComboDep->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\351\224\200\345\224\256\351\203\2501", Q_NULLPTR)
        );
        label_13->setText(QApplication::translate("MainWindow", "\345\255\246\345\216\206", Q_NULLPTR));
        dbComboEdu->clear();
        dbComboEdu->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\244\247\345\255\246\346\234\254\347\247\2211", Q_NULLPTR)
        );
        label_14->setText(QApplication::translate("MainWindow", "\345\267\245\350\265\204", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "\345\244\207\346\263\250", Q_NULLPTR));
        dbLabPhoto->setText(QApplication::translate("MainWindow", "\347\205\247\347\211\207", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "photo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
