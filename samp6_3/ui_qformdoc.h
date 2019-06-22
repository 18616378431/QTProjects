/********************************************************************************
** Form generated from reading UI file 'qformdoc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFORMDOC_H
#define UI_QFORMDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFormDoc
{
public:
    QAction *actOpen;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFont;
    QAction *actClose;
    QAction *actUndo;
    QAction *actRedo;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *QFormDoc)
    {
        if (QFormDoc->objectName().isEmpty())
            QFormDoc->setObjectName(QStringLiteral("QFormDoc"));
        QFormDoc->resize(400, 300);
        actOpen = new QAction(QFormDoc);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        actCut = new QAction(QFormDoc);
        actCut->setObjectName(QStringLiteral("actCut"));
        actCopy = new QAction(QFormDoc);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        actPaste = new QAction(QFormDoc);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        actFont = new QAction(QFormDoc);
        actFont->setObjectName(QStringLiteral("actFont"));
        actClose = new QAction(QFormDoc);
        actClose->setObjectName(QStringLiteral("actClose"));
        actUndo = new QAction(QFormDoc);
        actUndo->setObjectName(QStringLiteral("actUndo"));
        actRedo = new QAction(QFormDoc);
        actRedo->setObjectName(QStringLiteral("actRedo"));
        plainTextEdit = new QPlainTextEdit(QFormDoc);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 20, 361, 261));

        retranslateUi(QFormDoc);
        QObject::connect(actClose, SIGNAL(triggered()), QFormDoc, SLOT(close()));

        QMetaObject::connectSlotsByName(QFormDoc);
    } // setupUi

    void retranslateUi(QWidget *QFormDoc)
    {
        QFormDoc->setWindowTitle(QApplication::translate("QFormDoc", "Form", Q_NULLPTR));
        actOpen->setText(QApplication::translate("QFormDoc", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("QFormDoc", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCut->setText(QApplication::translate("QFormDoc", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("QFormDoc", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCut->setShortcut(QApplication::translate("QFormDoc", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actCopy->setText(QApplication::translate("QFormDoc", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("QFormDoc", "\345\244\215\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCopy->setShortcut(QApplication::translate("QFormDoc", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actPaste->setText(QApplication::translate("QFormDoc", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("QFormDoc", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actPaste->setShortcut(QApplication::translate("QFormDoc", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actFont->setText(QApplication::translate("QFormDoc", "\345\255\227\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFont->setToolTip(QApplication::translate("QFormDoc", "\350\256\276\347\275\256\345\255\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClose->setText(QApplication::translate("QFormDoc", "\345\205\263\351\227\255", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClose->setToolTip(QApplication::translate("QFormDoc", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actUndo->setText(QApplication::translate("QFormDoc", "\346\222\244\351\224\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actUndo->setToolTip(QApplication::translate("QFormDoc", "\346\222\244\351\224\200\347\274\226\350\276\221\346\223\215\344\275\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actUndo->setShortcut(QApplication::translate("QFormDoc", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actRedo->setText(QApplication::translate("QFormDoc", "\351\207\215\345\244\215", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRedo->setToolTip(QApplication::translate("QFormDoc", "\351\207\215\345\244\215\347\274\226\350\276\221\346\223\215\344\275\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QFormDoc: public Ui_QFormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFORMDOC_H
