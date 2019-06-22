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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSplitter *splitter_3;
    QSplitter *splitter_2;
    QTreeView *treeView;
    QSplitter *splitter;
    QListView *listView;
    QTableView *tableView;
    QGroupBox *groupBox;
    QLabel *LabFileName;
    QLabel *LabFileSize;
    QLabel *LabType;
    QLabel *LabPath;
    QCheckBox *chkIsDir;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(939, 703);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter_3 = new QSplitter(centralWidget);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(10, 10, 921, 631));
        splitter_3->setOrientation(Qt::Vertical);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        treeView = new QTreeView(splitter_2);
        treeView->setObjectName(QStringLiteral("treeView"));
        splitter_2->addWidget(treeView);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        listView = new QListView(splitter);
        listView->setObjectName(QStringLiteral("listView"));
        splitter->addWidget(listView);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QStringLiteral("tableView"));
        splitter->addWidget(tableView);
        splitter_2->addWidget(splitter);
        splitter_3->addWidget(splitter_2);
        groupBox = new QGroupBox(splitter_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        LabFileName = new QLabel(groupBox);
        LabFileName->setObjectName(QStringLiteral("LabFileName"));
        LabFileName->setGeometry(QRect(20, 30, 60, 16));
        LabFileSize = new QLabel(groupBox);
        LabFileSize->setObjectName(QStringLiteral("LabFileSize"));
        LabFileSize->setGeometry(QRect(210, 30, 111, 16));
        LabType = new QLabel(groupBox);
        LabType->setObjectName(QStringLiteral("LabType"));
        LabType->setGeometry(QRect(360, 30, 81, 16));
        LabPath = new QLabel(groupBox);
        LabPath->setObjectName(QStringLiteral("LabPath"));
        LabPath->setGeometry(QRect(20, 50, 541, 16));
        chkIsDir = new QCheckBox(groupBox);
        chkIsDir->setObjectName(QStringLiteral("chkIsDir"));
        chkIsDir->setGeometry(QRect(480, 30, 87, 20));
        splitter_3->addWidget(groupBox);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 939, 22));
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
        LabFileName->setText(QApplication::translate("MainWindow", "5.9.1", Q_NULLPTR));
        LabFileSize->setText(QApplication::translate("MainWindow", "0 KB", Q_NULLPTR));
        LabType->setText(QApplication::translate("MainWindow", "File Folder", Q_NULLPTR));
        LabPath->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        chkIsDir->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271\346\230\257\347\233\256\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
