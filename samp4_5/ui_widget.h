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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTimeEdit *timeEdit;
    QDateTimeEdit *dateTimeEdit;
    QDateEdit *dateEdit;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *datetimeLineEdit;
    QLineEdit *timeLineEdit;
    QPushButton *btnReadDateTime;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *dateLineEdit;
    QPushButton *btnSetTime;
    QPushButton *btnSetDate;
    QPushButton *btnSetDateTime;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *calLineEdit;
    QCalendarWidget *calendarWidget;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *btnTimerBegin;
    QLineEdit *LabElapsTime;
    QPushButton *btnTimerStop;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *timerInterval;
    QPushButton *btnSetInterval;
    QLCDNumber *lcdNumberHour;
    QLCDNumber *lcdNumberMinute;
    QLCDNumber *lcdNumberSecond;
    QProgressBar *progressBar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1050, 457);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 571, 171));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 20, 549, 146));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        timeEdit = new QTimeEdit(gridLayoutWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        dateTimeEdit = new QDateTimeEdit(gridLayoutWidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));

        gridLayout->addWidget(dateTimeEdit, 3, 1, 1, 1);

        dateEdit = new QDateEdit(gridLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout->addWidget(dateEdit, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        datetimeLineEdit = new QLineEdit(gridLayoutWidget);
        datetimeLineEdit->setObjectName(QStringLiteral("datetimeLineEdit"));
        datetimeLineEdit->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(datetimeLineEdit, 3, 2, 1, 1);

        timeLineEdit = new QLineEdit(gridLayoutWidget);
        timeLineEdit->setObjectName(QStringLiteral("timeLineEdit"));
        timeLineEdit->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(timeLineEdit, 1, 2, 1, 1);

        btnReadDateTime = new QPushButton(gridLayoutWidget);
        btnReadDateTime->setObjectName(QStringLiteral("btnReadDateTime"));

        gridLayout->addWidget(btnReadDateTime, 0, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        dateLineEdit = new QLineEdit(gridLayoutWidget);
        dateLineEdit->setObjectName(QStringLiteral("dateLineEdit"));

        gridLayout->addWidget(dateLineEdit, 2, 2, 1, 1);

        btnSetTime = new QPushButton(gridLayoutWidget);
        btnSetTime->setObjectName(QStringLiteral("btnSetTime"));

        gridLayout->addWidget(btnSetTime, 1, 3, 1, 1);

        btnSetDate = new QPushButton(gridLayoutWidget);
        btnSetDate->setObjectName(QStringLiteral("btnSetDate"));

        gridLayout->addWidget(btnSetDate, 2, 3, 1, 1);

        btnSetDateTime = new QPushButton(gridLayoutWidget);
        btnSetDateTime->setObjectName(QStringLiteral("btnSetDateTime"));

        gridLayout->addWidget(btnSetDateTime, 3, 3, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(600, 10, 351, 281));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(40, 30, 221, 41));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        calLineEdit = new QLineEdit(gridLayoutWidget_2);
        calLineEdit->setObjectName(QStringLiteral("calLineEdit"));

        gridLayout_2->addWidget(calLineEdit, 0, 1, 1, 1);

        calendarWidget = new QCalendarWidget(groupBox_2);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(20, 90, 296, 173));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 190, 571, 171));
        gridLayoutWidget_3 = new QWidget(groupBox_3);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 30, 551, 71));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btnTimerBegin = new QPushButton(gridLayoutWidget_3);
        btnTimerBegin->setObjectName(QStringLiteral("btnTimerBegin"));

        gridLayout_3->addWidget(btnTimerBegin, 0, 0, 1, 1);

        LabElapsTime = new QLineEdit(gridLayoutWidget_3);
        LabElapsTime->setObjectName(QStringLiteral("LabElapsTime"));

        gridLayout_3->addWidget(LabElapsTime, 0, 3, 1, 1);

        btnTimerStop = new QPushButton(gridLayoutWidget_3);
        btnTimerStop->setObjectName(QStringLiteral("btnTimerStop"));

        gridLayout_3->addWidget(btnTimerStop, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        timerInterval = new QSpinBox(gridLayoutWidget_3);
        timerInterval->setObjectName(QStringLiteral("timerInterval"));
        timerInterval->setMaximum(10000);
        timerInterval->setValue(1000);

        gridLayout_3->addWidget(timerInterval, 1, 1, 1, 1);

        btnSetInterval = new QPushButton(gridLayoutWidget_3);
        btnSetInterval->setObjectName(QStringLiteral("btnSetInterval"));

        gridLayout_3->addWidget(btnSetInterval, 1, 2, 1, 1);

        lcdNumberHour = new QLCDNumber(groupBox_3);
        lcdNumberHour->setObjectName(QStringLiteral("lcdNumberHour"));
        lcdNumberHour->setGeometry(QRect(10, 110, 121, 51));
        lcdNumberMinute = new QLCDNumber(groupBox_3);
        lcdNumberMinute->setObjectName(QStringLiteral("lcdNumberMinute"));
        lcdNumberMinute->setGeometry(QRect(170, 110, 131, 51));
        lcdNumberMinute->setSmallDecimalPoint(false);
        lcdNumberMinute->setSegmentStyle(QLCDNumber::Filled);
        lcdNumberMinute->setProperty("value", QVariant(0));
        lcdNumberMinute->setProperty("intValue", QVariant(0));
        lcdNumberSecond = new QLCDNumber(groupBox_3);
        lcdNumberSecond->setObjectName(QStringLiteral("lcdNumberSecond"));
        lcdNumberSecond->setGeometry(QRect(330, 110, 141, 51));
        progressBar = new QProgressBar(Widget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(20, 400, 561, 23));
        progressBar->setMaximum(100);
        progressBar->setValue(0);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\346\227\245\346\234\237", Q_NULLPTR));
        btnReadDateTime->setText(QApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\346\227\266\351\227\264", Q_NULLPTR));
        btnSetTime->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264", Q_NULLPTR));
        btnSetDate->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237", Q_NULLPTR));
        btnSetDateTime->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "\346\227\245\345\216\206\351\200\211\346\213\251", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237:", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250", Q_NULLPTR));
        btnTimerBegin->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", Q_NULLPTR));
        btnTimerStop->setText(QApplication::translate("Widget", "\345\201\234\346\255\242", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\346\265\201\351\200\235\346\227\266\351\227\264:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\345\256\232\346\227\266\345\221\250\346\234\237", Q_NULLPTR));
        timerInterval->setSuffix(QApplication::translate("Widget", " ms", Q_NULLPTR));
        btnSetInterval->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\345\221\250\346\234\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
