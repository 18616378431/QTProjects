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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actIni;
    QAction *actSurvey;
    QAction *actQuit;
    QWidget *centralWidget;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QTableView *tableView;
    QTreeWidget *treeWidget;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QChartView *chartViewBar;
    QPushButton *btnBuildBarChart;
    QWidget *tab2;
    QChartView *chartViewPie;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *spinPieSize;
    QLabel *label_2;
    QPushButton *btnPie;
    QComboBox *cBoxCourse;
    QLabel *label;
    QLabel *label_3;
    QDoubleSpinBox *spinHoleSize;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QWidget *tab3;
    QChartView *chartViewStackedBar;
    QPushButton *btnStackedBar;
    QWidget *tab4;
    QChartView *chartViewPercentBar;
    QPushButton *btnPercentBar;
    QWidget *tab5;
    QChartView *chartViewScatter;
    QPushButton *btnScatter;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1107, 555);
        actIni = new QAction(MainWindow);
        actIni->setObjectName(QStringLiteral("actIni"));
        actSurvey = new QAction(MainWindow);
        actSurvey->setObjectName(QStringLiteral("actSurvey"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(10, 10, 1091, 471));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setMaximumSize(QSize(16777215, 16777215));
        splitter->setOrientation(Qt::Vertical);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QStringLiteral("tableView"));
        splitter->addWidget(tableView);
        treeWidget = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("\346\225\260\345\255\246"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        splitter->addWidget(treeWidget);
        splitter_2->addWidget(splitter);
        tabWidget = new QTabWidget(splitter_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab1 = new QWidget();
        tab1->setObjectName(QStringLiteral("tab1"));
        chartViewBar = new QChartView(tab1);
        chartViewBar->setObjectName(QStringLiteral("chartViewBar"));
        chartViewBar->setGeometry(QRect(10, 40, 701, 391));
        btnBuildBarChart = new QPushButton(tab1);
        btnBuildBarChart->setObjectName(QStringLiteral("btnBuildBarChart"));
        btnBuildBarChart->setGeometry(QRect(10, 0, 113, 32));
        tabWidget->addTab(tab1, QString());
        btnBuildBarChart->raise();
        chartViewBar->raise();
        tab2 = new QWidget();
        tab2->setObjectName(QStringLiteral("tab2"));
        chartViewPie = new QChartView(tab2);
        chartViewPie->setObjectName(QStringLiteral("chartViewPie"));
        chartViewPie->setGeometry(QRect(10, 40, 691, 401));
        gridLayoutWidget = new QWidget(tab2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 0, 691, 36));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinPieSize = new QDoubleSpinBox(gridLayoutWidget);
        spinPieSize->setObjectName(QStringLiteral("spinPieSize"));
        spinPieSize->setSingleStep(0.1);
        spinPieSize->setValue(0.7);

        gridLayout->addWidget(spinPieSize, 0, 6, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        btnPie = new QPushButton(gridLayoutWidget);
        btnPie->setObjectName(QStringLiteral("btnPie"));

        gridLayout->addWidget(btnPie, 0, 2, 1, 1);

        cBoxCourse = new QComboBox(gridLayoutWidget);
        cBoxCourse->setObjectName(QStringLiteral("cBoxCourse"));

        gridLayout->addWidget(cBoxCourse, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 5, 1, 1);

        spinHoleSize = new QDoubleSpinBox(gridLayoutWidget);
        spinHoleSize->setObjectName(QStringLiteral("spinHoleSize"));
        spinHoleSize->setSingleStep(0.1);
        spinHoleSize->setValue(0.2);

        gridLayout->addWidget(spinHoleSize, 0, 4, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 7, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 0, 8, 1, 1);

        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QStringLiteral("tab3"));
        chartViewStackedBar = new QChartView(tab3);
        chartViewStackedBar->setObjectName(QStringLiteral("chartViewStackedBar"));
        chartViewStackedBar->setGeometry(QRect(0, 30, 711, 421));
        btnStackedBar = new QPushButton(tab3);
        btnStackedBar->setObjectName(QStringLiteral("btnStackedBar"));
        btnStackedBar->setGeometry(QRect(10, 0, 113, 32));
        tabWidget->addTab(tab3, QString());
        tab4 = new QWidget();
        tab4->setObjectName(QStringLiteral("tab4"));
        chartViewPercentBar = new QChartView(tab4);
        chartViewPercentBar->setObjectName(QStringLiteral("chartViewPercentBar"));
        chartViewPercentBar->setGeometry(QRect(10, 40, 701, 401));
        btnPercentBar = new QPushButton(tab4);
        btnPercentBar->setObjectName(QStringLiteral("btnPercentBar"));
        btnPercentBar->setGeometry(QRect(10, 10, 141, 32));
        tabWidget->addTab(tab4, QString());
        tab5 = new QWidget();
        tab5->setObjectName(QStringLiteral("tab5"));
        chartViewScatter = new QChartView(tab5);
        chartViewScatter->setObjectName(QStringLiteral("chartViewScatter"));
        chartViewScatter->setGeometry(QRect(10, 40, 701, 401));
        btnScatter = new QPushButton(tab5);
        btnScatter->setObjectName(QStringLiteral("btnScatter"));
        btnScatter->setGeometry(QRect(10, 10, 113, 32));
        tabWidget->addTab(tab5, QString());
        splitter_2->addWidget(tabWidget);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1107, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actIni);
        mainToolBar->addAction(actSurvey);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actIni->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\346\225\260\346\215\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actIni->setToolTip(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\346\225\260\346\215\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSurvey->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\273\237\350\256\241", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSurvey->setToolTip(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\273\237\350\256\241", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("MainWindow", "\345\271\263\345\235\207\345\210\206", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindow", "\350\213\261\350\257\255", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "\350\257\255\346\226\207", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\345\210\206\346\225\260\346\256\265", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "60\345\210\206\344\273\245\344\270\213", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "60\357\275\23669\345\210\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "70\357\275\23679\345\210\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "80\357\275\23689\345\210\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "90\345\210\206\344\273\245\344\270\212", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "\345\271\263\345\235\207\345\210\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "\346\234\200\351\253\230\345\210\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(7);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "\346\234\200\344\275\216\345\210\206", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

        btnBuildBarChart->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\346\237\261\347\212\266\345\233\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("MainWindow", "BarChart", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "HoleSize", Q_NULLPTR));
        btnPie->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\351\245\274\345\233\276", Q_NULLPTR));
        cBoxCourse->clear();
        cBoxCourse->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\350\257\255\346\226\207", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\225\260\345\255\246", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\350\213\261\350\257\255", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\271\263\345\235\207\345\210\206", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainWindow", "\345\210\206\346\236\220\346\225\260\346\215\256", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "PieSize", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\344\270\273\351\242\230", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Light", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("MainWindow", "PieChart", Q_NULLPTR));
        btnStackedBar->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\345\240\206\345\217\240\346\237\261\347\212\266\345\233\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("MainWindow", "StackedChart", Q_NULLPTR));
        btnPercentBar->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\347\231\276\345\210\206\346\257\224\346\237\261\347\212\266\345\233\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab4), QApplication::translate("MainWindow", "PercentCharChart", Q_NULLPTR));
        btnScatter->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\346\225\243\347\202\271\345\233\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab5), QApplication::translate("MainWindow", "ScatterChart", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
