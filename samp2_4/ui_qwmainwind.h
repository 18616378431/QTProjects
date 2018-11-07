/********************************************************************************
** Form generated from reading UI file 'qwmainwind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWIND_H
#define UI_QWMAINWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWind
{
public:
    QAction *actOpen;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFontBold;
    QAction *actFontItalic;
    QAction *actFontUnder;
    QAction *actClose;
    QAction *actClear;
    QAction *actFont;
    QAction *actNew;
    QAction *actToolbarLab;
    QWidget *centralWidget;
    QTextEdit *txtEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWMainWind)
    {
        if (QWMainWind->objectName().isEmpty())
            QWMainWind->setObjectName(QStringLiteral("QWMainWind"));
        QWMainWind->resize(800, 600);
        actOpen = new QAction(QWMainWind);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon);
        actCut = new QAction(QWMainWind);
        actCut->setObjectName(QStringLiteral("actCut"));
        actCopy = new QAction(QWMainWind);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        actPaste = new QAction(QWMainWind);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        actFontBold = new QAction(QWMainWind);
        actFontBold->setObjectName(QStringLiteral("actFontBold"));
        actFontBold->setCheckable(true);
        actFontItalic = new QAction(QWMainWind);
        actFontItalic->setObjectName(QStringLiteral("actFontItalic"));
        actFontItalic->setCheckable(true);
        actFontUnder = new QAction(QWMainWind);
        actFontUnder->setObjectName(QStringLiteral("actFontUnder"));
        actFontUnder->setCheckable(true);
        actClose = new QAction(QWMainWind);
        actClose->setObjectName(QStringLiteral("actClose"));
        actClear = new QAction(QWMainWind);
        actClear->setObjectName(QStringLiteral("actClear"));
        actFont = new QAction(QWMainWind);
        actFont->setObjectName(QStringLiteral("actFont"));
        actNew = new QAction(QWMainWind);
        actNew->setObjectName(QStringLiteral("actNew"));
        actToolbarLab = new QAction(QWMainWind);
        actToolbarLab->setObjectName(QStringLiteral("actToolbarLab"));
        actToolbarLab->setCheckable(true);
        centralWidget = new QWidget(QWMainWind);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        txtEdit = new QTextEdit(centralWidget);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));
        txtEdit->setGeometry(QRect(0, 0, 801, 531));
        QWMainWind->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QWMainWind);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        QWMainWind->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QWMainWind);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QWMainWind->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWMainWind);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QWMainWind->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actNew);
        menu->addAction(actOpen);
        menu->addSeparator();
        menu->addAction(actClose);
        menu_2->addAction(actCut);
        menu_2->addAction(actCopy);
        menu_2->addAction(actPaste);
        menu_2->addAction(actClear);
        menu_3->addAction(actFontBold);
        menu_3->addAction(actFontItalic);
        menu_3->addAction(actFontUnder);
        menu_3->addAction(actToolbarLab);
        mainToolBar->addAction(actNew);
        mainToolBar->addAction(actOpen);
        mainToolBar->addAction(actClose);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actCut);
        mainToolBar->addAction(actCopy);
        mainToolBar->addAction(actPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFontItalic);
        mainToolBar->addAction(actFontBold);
        mainToolBar->addAction(actFontUnder);
        mainToolBar->addSeparator();

        retranslateUi(QWMainWind);
        QObject::connect(actPaste, SIGNAL(triggered()), txtEdit, SLOT(paste()));
        QObject::connect(actCut, SIGNAL(triggered()), txtEdit, SLOT(cut()));
        QObject::connect(actCopy, SIGNAL(triggered()), txtEdit, SLOT(copy()));
        QObject::connect(actClose, SIGNAL(triggered()), QWMainWind, SLOT(close()));
        QObject::connect(actClear, SIGNAL(triggered()), txtEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(QWMainWind);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWind)
    {
        QWMainWind->setWindowTitle(QApplication::translate("QWMainWind", "QWMainWind", Q_NULLPTR));
        actOpen->setText(QApplication::translate("QWMainWind", "\346\211\223\345\274\200...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("QWMainWind", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actOpen->setShortcut(QApplication::translate("QWMainWind", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actCut->setText(QApplication::translate("QWMainWind", "\345\211\252\345\210\207...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("QWMainWind", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCut->setShortcut(QApplication::translate("QWMainWind", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actCopy->setText(QApplication::translate("QWMainWind", "\345\244\215\345\210\266...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("QWMainWind", "\345\244\215\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCopy->setShortcut(QApplication::translate("QWMainWind", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actPaste->setText(QApplication::translate("QWMainWind", "\347\262\230\350\264\264...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("QWMainWind", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actPaste->setShortcut(QApplication::translate("QWMainWind", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actFontBold->setText(QApplication::translate("QWMainWind", "\347\262\227\344\275\223...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontBold->setToolTip(QApplication::translate("QWMainWind", "\347\262\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFontItalic->setText(QApplication::translate("QWMainWind", "\346\226\234\344\275\223...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontItalic->setToolTip(QApplication::translate("QWMainWind", "\346\226\234\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFontUnder->setText(QApplication::translate("QWMainWind", "\344\270\213\345\210\222\347\272\277...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontUnder->setToolTip(QApplication::translate("QWMainWind", "\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClose->setText(QApplication::translate("QWMainWind", "\351\200\200\345\207\272...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClose->setToolTip(QApplication::translate("QWMainWind", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClear->setText(QApplication::translate("QWMainWind", "\346\270\205\347\251\272...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClear->setToolTip(QApplication::translate("QWMainWind", "\346\270\205\347\251\272\345\206\205\345\256\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFont->setText(QApplication::translate("QWMainWind", "\345\255\227\344\275\223...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFont->setToolTip(QApplication::translate("QWMainWind", "\345\255\227\344\275\223\350\256\276\347\275\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actNew->setText(QApplication::translate("QWMainWind", "\346\226\260\345\273\272...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actNew->setToolTip(QApplication::translate("QWMainWind", "\346\226\260\345\273\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actNew->setShortcut(QApplication::translate("QWMainWind", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actToolbarLab->setText(QApplication::translate("QWMainWind", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actToolbarLab->setToolTip(QApplication::translate("QWMainWind", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menu->setTitle(QApplication::translate("QWMainWind", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("QWMainWind", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("QWMainWind", "\346\240\274\345\274\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWMainWind: public Ui_QWMainWind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWIND_H
