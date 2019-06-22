/********************************************************************************
** Form generated from reading UI file 'qwmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWINDOW_H
#define UI_QWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWindow
{
public:
    QAction *actDoc_New;
    QAction *actDoc_Open;
    QAction *actCloseAll;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFont;
    QAction *actViewMode;
    QAction *actCascade;
    QAction *actTile;
    QAction *actQuit;
    QWidget *centralWidget;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWMainWindow)
    {
        if (QWMainWindow->objectName().isEmpty())
            QWMainWindow->setObjectName(QStringLiteral("QWMainWindow"));
        QWMainWindow->resize(632, 421);
        actDoc_New = new QAction(QWMainWindow);
        actDoc_New->setObjectName(QStringLiteral("actDoc_New"));
        actDoc_Open = new QAction(QWMainWindow);
        actDoc_Open->setObjectName(QStringLiteral("actDoc_Open"));
        actCloseAll = new QAction(QWMainWindow);
        actCloseAll->setObjectName(QStringLiteral("actCloseAll"));
        actCut = new QAction(QWMainWindow);
        actCut->setObjectName(QStringLiteral("actCut"));
        actCopy = new QAction(QWMainWindow);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        actPaste = new QAction(QWMainWindow);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        actFont = new QAction(QWMainWindow);
        actFont->setObjectName(QStringLiteral("actFont"));
        actViewMode = new QAction(QWMainWindow);
        actViewMode->setObjectName(QStringLiteral("actViewMode"));
        actViewMode->setCheckable(true);
        actCascade = new QAction(QWMainWindow);
        actCascade->setObjectName(QStringLiteral("actCascade"));
        actTile = new QAction(QWMainWindow);
        actTile->setObjectName(QStringLiteral("actTile"));
        actQuit = new QAction(QWMainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralWidget = new QWidget(QWMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(10, 10, 611, 331));
        QWMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QWMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 632, 22));
        QWMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QWMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QWMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QWMainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actDoc_New);
        mainToolBar->addAction(actDoc_Open);
        mainToolBar->addAction(actCloseAll);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actCut);
        mainToolBar->addAction(actCopy);
        mainToolBar->addAction(actPaste);
        mainToolBar->addAction(actFont);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actViewMode);
        mainToolBar->addAction(actCascade);
        mainToolBar->addAction(actTile);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(QWMainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), QWMainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(QWMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWindow)
    {
        QWMainWindow->setWindowTitle(QApplication::translate("QWMainWindow", "QWMainWindow", Q_NULLPTR));
        actDoc_New->setText(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272\346\226\207\346\241\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDoc_New->setToolTip(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272\346\226\207\346\241\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDoc_Open->setText(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDoc_Open->setToolTip(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCloseAll->setText(QApplication::translate("QWMainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCloseAll->setToolTip(QApplication::translate("QWMainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCut->setText(QApplication::translate("QWMainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("QWMainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCopy->setText(QApplication::translate("QWMainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("QWMainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actPaste->setText(QApplication::translate("QWMainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("QWMainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFont->setText(QApplication::translate("QWMainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFont->setToolTip(QApplication::translate("QWMainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actViewMode->setText(QApplication::translate("QWMainWindow", "MDI\346\250\241\345\274\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actViewMode->setToolTip(QApplication::translate("QWMainWindow", "MDI\346\250\241\345\274\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCascade->setText(QApplication::translate("QWMainWindow", "\347\272\247\350\201\224\345\261\225\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCascade->setToolTip(QApplication::translate("QWMainWindow", "\347\272\247\350\201\224\345\261\225\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actTile->setText(QApplication::translate("QWMainWindow", "\345\271\263\351\223\272\345\261\225\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actTile->setToolTip(QApplication::translate("QWMainWindow", "\345\271\263\351\223\272\345\261\225\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QWMainWindow: public Ui_QWMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWINDOW_H
