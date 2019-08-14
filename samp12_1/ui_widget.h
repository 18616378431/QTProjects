/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include <qmybattery.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QmyBattery *battery;
    QSlider *slider;
    QLabel *LabInfo;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(460, 237);
        battery = new QmyBattery(Widget);
        battery->setObjectName(QStringLiteral("battery"));
        battery->setGeometry(QRect(20, 20, 421, 80));
        slider = new QSlider(Widget);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setGeometry(QRect(20, 130, 421, 22));
        slider->setMaximum(100);
        slider->setValue(60);
        slider->setOrientation(Qt::Horizontal);
        LabInfo = new QLabel(Widget);
        LabInfo->setObjectName(QStringLiteral("LabInfo"));
        LabInfo->setGeometry(QRect(20, 180, 241, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        LabInfo->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\347\224\265\351\207\217:60%", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
