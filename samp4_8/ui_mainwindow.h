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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actAddFolder;
    QAction *actAddFiles;
    QAction *acZoomIn;
    QAction *actZoomOut;
    QAction *actZoomRealSize;
    QAction *actZoomFitW;
    QAction *actDeleteItem;
    QAction *actQuit;
    QAction *actZoomFitH;
    QAction *actScanItems;
    QAction *actDockVisible;
    QAction *actDockFloat;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LabPicture;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeFiles;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(752, 374);
        actAddFolder = new QAction(MainWindow);
        actAddFolder->setObjectName(QStringLiteral("actAddFolder"));
        actAddFiles = new QAction(MainWindow);
        actAddFiles->setObjectName(QStringLiteral("actAddFiles"));
        acZoomIn = new QAction(MainWindow);
        acZoomIn->setObjectName(QStringLiteral("acZoomIn"));
        actZoomOut = new QAction(MainWindow);
        actZoomOut->setObjectName(QStringLiteral("actZoomOut"));
        actZoomRealSize = new QAction(MainWindow);
        actZoomRealSize->setObjectName(QStringLiteral("actZoomRealSize"));
        actZoomFitW = new QAction(MainWindow);
        actZoomFitW->setObjectName(QStringLiteral("actZoomFitW"));
        actDeleteItem = new QAction(MainWindow);
        actDeleteItem->setObjectName(QStringLiteral("actDeleteItem"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        actZoomFitH = new QAction(MainWindow);
        actZoomFitH->setObjectName(QStringLiteral("actZoomFitH"));
        actScanItems = new QAction(MainWindow);
        actScanItems->setObjectName(QStringLiteral("actScanItems"));
        actDockVisible = new QAction(MainWindow);
        actDockVisible->setObjectName(QStringLiteral("actDockVisible"));
        actDockVisible->setCheckable(true);
        actDockFloat = new QAction(MainWindow);
        actDockFloat->setObjectName(QStringLiteral("actDockFloat"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 445, 279));
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        LabPicture = new QLabel(scrollAreaWidgetContents);
        LabPicture->setObjectName(QStringLiteral("LabPicture"));

        horizontalLayout_2->addWidget(LabPicture);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_3->addWidget(scrollArea);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 752, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeFiles = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeFiles);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeFiles);
        new QTreeWidgetItem(__qtreewidgetitem2);
        treeFiles->setObjectName(QStringLiteral("treeFiles"));

        horizontalLayout->addWidget(treeFiles);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actAddFolder);
        menu_2->addAction(acZoomIn);
        mainToolBar->addAction(actAddFolder);
        mainToolBar->addAction(actAddFiles);
        mainToolBar->addAction(actDeleteItem);
        mainToolBar->addAction(actScanItems);
        mainToolBar->addSeparator();
        mainToolBar->addAction(acZoomIn);
        mainToolBar->addAction(actZoomOut);
        mainToolBar->addAction(actZoomRealSize);
        mainToolBar->addAction(actZoomFitW);
        mainToolBar->addAction(actZoomFitH);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actDockFloat);
        mainToolBar->addAction(actDockVisible);
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actAddFolder->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddFolder->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actAddFolder->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actAddFiles->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddFiles->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actAddFiles->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        acZoomIn->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        acZoomIn->setToolTip(QApplication::translate("MainWindow", "\346\224\276\345\244\247\345\233\276\347\211\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        acZoomIn->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actZoomOut->setText(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomOut->setToolTip(QApplication::translate("MainWindow", "\347\274\251\345\260\217\345\233\276\347\211\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actZoomOut->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actZoomRealSize->setText(QApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomRealSize->setToolTip(QApplication::translate("MainWindow", "\345\233\276\347\211\207\345\256\236\351\231\205\345\244\247\345\260\217\346\230\276\347\244\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actZoomFitW->setText(QApplication::translate("MainWindow", "\351\200\202\345\220\210\345\256\275\345\272\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomFitW->setToolTip(QApplication::translate("MainWindow", "\351\200\202\345\220\210\345\256\275\345\272\246\346\230\276\347\244\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actZoomFitW->setShortcut(QApplication::translate("MainWindow", "Meta+W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actDeleteItem->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDeleteItem->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actZoomFitH->setText(QApplication::translate("MainWindow", "\351\200\202\345\220\210\351\253\230\345\272\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomFitH->setToolTip(QApplication::translate("MainWindow", "\351\200\202\345\220\210\351\253\230\345\272\246", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actZoomFitH->setShortcut(QApplication::translate("MainWindow", "Meta+H", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actScanItems->setText(QApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actScanItems->setToolTip(QApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDockVisible->setText(QApplication::translate("MainWindow", "\347\252\227\344\275\223\345\217\257\350\247\201", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDockVisible->setToolTip(QApplication::translate("MainWindow", "\347\252\227\344\275\223\345\217\257\350\247\201", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDockFloat->setText(QApplication::translate("MainWindow", "\347\252\227\344\275\223\346\265\256\345\212\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDockFloat->setToolTip(QApplication::translate("MainWindow", "\347\252\227\344\275\223\346\265\256\345\212\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabPicture->setText(QApplication::translate("MainWindow", "Place Your Pictures", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\347\233\256\345\275\225\346\240\221", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\350\247\206\345\233\276", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeFiles->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "\350\212\202\347\202\271\347\261\273\345\236\213", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\350\212\202\347\202\271", Q_NULLPTR));

        const bool __sortingEnabled = treeFiles->isSortingEnabled();
        treeFiles->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeFiles->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "\345\233\276\347\211\207\346\226\207\344\273\266", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "\345\210\206\347\273\204\350\212\202\347\202\271", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "\345\233\276\347\211\207\350\212\202\347\202\271", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = treeFiles->topLevelItem(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "\345\210\206\347\273\2042", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "\345\233\276\347\211\2072", Q_NULLPTR));
        treeFiles->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
