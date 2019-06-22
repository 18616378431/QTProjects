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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actListIni;
    QAction *actListInsert;
    QAction *actListClear;
    QAction *actListAppend;
    QAction *actListDelete;
    QAction *actSelAll;
    QAction *actSelNone;
    QAction *actSelInvs;
    QAction *actQuit;
    QAction *actSelPopMenu;
    QWidget *centralWidget;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QToolButton *tBtnListInsert;
    QToolButton *tBtnListAppend;
    QToolButton *tBtnListDelete;
    QToolButton *tBtnListClear;
    QToolButton *tBtnListIni;
    QWidget *page_2;
    QWidget *page_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *chkBoxListEditable;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QToolButton *tBtnSelectItem;
    QToolButton *btnSelAll;
    QToolButton *btnSelNone;
    QToolButton *btnSelInvs;
    QWidget *tab_2;
    QWidget *tab_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(679, 369);
        actListIni = new QAction(MainWindow);
        actListIni->setObjectName(QStringLiteral("actListIni"));
        actListInsert = new QAction(MainWindow);
        actListInsert->setObjectName(QStringLiteral("actListInsert"));
        actListClear = new QAction(MainWindow);
        actListClear->setObjectName(QStringLiteral("actListClear"));
        actListAppend = new QAction(MainWindow);
        actListAppend->setObjectName(QStringLiteral("actListAppend"));
        actListDelete = new QAction(MainWindow);
        actListDelete->setObjectName(QStringLiteral("actListDelete"));
        actSelAll = new QAction(MainWindow);
        actSelAll->setObjectName(QStringLiteral("actSelAll"));
        actSelNone = new QAction(MainWindow);
        actSelNone->setObjectName(QStringLiteral("actSelNone"));
        actSelInvs = new QAction(MainWindow);
        actSelInvs->setObjectName(QStringLiteral("actSelInvs"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        actSelPopMenu = new QAction(MainWindow);
        actSelPopMenu->setObjectName(QStringLiteral("actSelPopMenu"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(10, 10, 661, 291));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(100, 0));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 186, 180));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 121, 171));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tBtnListInsert = new QToolButton(layoutWidget);
        tBtnListInsert->setObjectName(QStringLiteral("tBtnListInsert"));

        gridLayout_2->addWidget(tBtnListInsert, 3, 0, 1, 1);

        tBtnListAppend = new QToolButton(layoutWidget);
        tBtnListAppend->setObjectName(QStringLiteral("tBtnListAppend"));

        gridLayout_2->addWidget(tBtnListAppend, 4, 0, 1, 1);

        tBtnListDelete = new QToolButton(layoutWidget);
        tBtnListDelete->setObjectName(QStringLiteral("tBtnListDelete"));

        gridLayout_2->addWidget(tBtnListDelete, 5, 0, 1, 1);

        tBtnListClear = new QToolButton(layoutWidget);
        tBtnListClear->setObjectName(QStringLiteral("tBtnListClear"));

        gridLayout_2->addWidget(tBtnListClear, 2, 0, 1, 1);

        tBtnListIni = new QToolButton(layoutWidget);
        tBtnListIni->setObjectName(QStringLiteral("tBtnListIni"));

        gridLayout_2->addWidget(tBtnListIni, 1, 0, 1, 1);

        QIcon icon;
        icon.addFile(QStringLiteral("../samp2_4/AppIcon.icns"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page, icon, QString::fromUtf8("QListWidget\346\223\215\344\275\234"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 186, 180));
        toolBox->addItem(page_2, QString::fromUtf8("QTreeWidget\346\223\215\344\275\234"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 186, 180));
        toolBox->addItem(page_3, QString::fromUtf8("QTableWidget\346\223\215\344\275\234"));
        splitter->addWidget(toolBox);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        listWidget = new QListWidget(tab);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 111, 451, 151));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 10, 451, 41));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 0, 1, 1, 1);

        chkBoxListEditable = new QCheckBox(gridLayoutWidget);
        chkBoxListEditable->setObjectName(QStringLiteral("chkBoxListEditable"));

        gridLayout_3->addWidget(chkBoxListEditable, 0, 2, 1, 1);

        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 60, 451, 41));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        tBtnSelectItem = new QToolButton(gridLayoutWidget_2);
        tBtnSelectItem->setObjectName(QStringLiteral("tBtnSelectItem"));

        gridLayout_4->addWidget(tBtnSelectItem, 0, 0, 1, 1);

        btnSelAll = new QToolButton(gridLayoutWidget_2);
        btnSelAll->setObjectName(QStringLiteral("btnSelAll"));

        gridLayout_4->addWidget(btnSelAll, 0, 1, 1, 1);

        btnSelNone = new QToolButton(gridLayoutWidget_2);
        btnSelNone->setObjectName(QStringLiteral("btnSelNone"));

        gridLayout_4->addWidget(btnSelNone, 0, 2, 1, 1);

        btnSelInvs = new QToolButton(gridLayoutWidget_2);
        btnSelInvs->setObjectName(QStringLiteral("btnSelInvs"));

        gridLayout_4->addWidget(btnSelInvs, 0, 3, 1, 1);

        tabWidget->addTab(tab, QString());
        listWidget->raise();
        gridLayoutWidget->raise();
        gridLayoutWidget_2->raise();
        listWidget->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        splitter->addWidget(tabWidget);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 679, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actListIni);
        mainToolBar->addAction(actListClear);
        mainToolBar->addAction(actListInsert);
        mainToolBar->addAction(actListAppend);
        mainToolBar->addAction(actListDelete);

        retranslateUi(MainWindow);
        QObject::connect(actSelPopMenu, SIGNAL(triggered()), actSelInvs, SLOT(trigger()));
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actListIni->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListIni->setToolTip(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actListIni->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actListInsert->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListInsert->setToolTip(QApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actListInsert->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actListClear->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListClear->setToolTip(QApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actListAppend->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListAppend->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actListAppend->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actListDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListDelete->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actListDelete->setShortcut(QApplication::translate("MainWindow", "Backspace", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actSelAll->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelAll->setToolTip(QApplication::translate("MainWindow", "\345\205\250\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelNone->setText(QApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelNone->setToolTip(QApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelInvs->setText(QApplication::translate("MainWindow", "\345\217\215\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelInvs->setToolTip(QApplication::translate("MainWindow", "\345\217\215\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelPopMenu->setText(QApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelPopMenu->setToolTip(QApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tBtnListInsert->setText(QApplication::translate("MainWindow", "tBtnListInsert", Q_NULLPTR));
        tBtnListAppend->setText(QApplication::translate("MainWindow", "tBtnListAppend", Q_NULLPTR));
        tBtnListDelete->setText(QApplication::translate("MainWindow", "tBtnListDelete", Q_NULLPTR));
        tBtnListClear->setText(QApplication::translate("MainWindow", "tBtnListClear", Q_NULLPTR));
        tBtnListIni->setText(QApplication::translate("MainWindow", "tBtnListIni", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "QListWidget\346\223\215\344\275\234", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "QTreeWidget\346\223\215\344\275\234", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "QTableWidget\346\223\215\344\275\234", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226:", Q_NULLPTR));
        chkBoxListEditable->setText(QApplication::translate("MainWindow", "\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        tBtnSelectItem->setText(QApplication::translate("MainWindow", "tBtnSelectItem", Q_NULLPTR));
        btnSelAll->setText(QApplication::translate("MainWindow", "tBtnSelAll", Q_NULLPTR));
        btnSelNone->setText(QApplication::translate("MainWindow", "tBtnSelNone", Q_NULLPTR));
        btnSelInvs->setText(QApplication::translate("MainWindow", "tBtnSelInvs", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "QListWidget", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "QTreeWidget", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "QTableWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
