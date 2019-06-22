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
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSlider *redSlider;
    QSlider *alphaSlider;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label;
    QSlider *greenSlider;
    QSlider *blueSlider;
    QLabel *label_5;
    QSlider *hSlider;
    QLabel *label_6;
    QScrollBar *hScrollBar;
    QProgressBar *hProgressBar;
    QDial *dial;
    QLabel *label_7;
    QLCDNumber *lcdNumber;
    QLabel *label_8;
    QRadioButton *rBtnDec;
    QRadioButton *rBtnBin;
    QRadioButton *rBtnOct;
    QRadioButton *rBtnHex;
    QTextEdit *editText;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSlider *vSlider;
    QScrollBar *vScrollBar;
    QProgressBar *progressBar;
    QLabel *label_9;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *btnClose;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(630, 535);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 291, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        redSlider = new QSlider(gridLayoutWidget);
        redSlider->setObjectName(QStringLiteral("redSlider"));
        redSlider->setMaximum(255);
        redSlider->setOrientation(Qt::Horizontal);
        redSlider->setTickInterval(0);

        gridLayout->addWidget(redSlider, 2, 1, 1, 1);

        alphaSlider = new QSlider(gridLayoutWidget);
        alphaSlider->setObjectName(QStringLiteral("alphaSlider"));
        alphaSlider->setMaximum(255);
        alphaSlider->setValue(255);
        alphaSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(alphaSlider, 5, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        greenSlider = new QSlider(gridLayoutWidget);
        greenSlider->setObjectName(QStringLiteral("greenSlider"));
        greenSlider->setMaximum(255);
        greenSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(greenSlider, 3, 1, 1, 1);

        blueSlider = new QSlider(gridLayoutWidget);
        blueSlider->setObjectName(QStringLiteral("blueSlider"));
        blueSlider->setMaximum(255);
        blueSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(blueSlider, 4, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        hSlider = new QSlider(gridLayoutWidget);
        hSlider->setObjectName(QStringLiteral("hSlider"));
        hSlider->setMaximum(100);
        hSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hSlider, 6, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        hScrollBar = new QScrollBar(Widget);
        hScrollBar->setObjectName(QStringLiteral("hScrollBar"));
        hScrollBar->setGeometry(QRect(30, 230, 411, 16));
        hScrollBar->setMaximum(100);
        hScrollBar->setOrientation(Qt::Horizontal);
        hProgressBar = new QProgressBar(Widget);
        hProgressBar->setObjectName(QStringLiteral("hProgressBar"));
        hProgressBar->setGeometry(QRect(30, 270, 411, 23));
        hProgressBar->setValue(24);
        dial = new QDial(Widget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(30, 410, 111, 101));
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 370, 141, 21));
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(190, 400, 111, 111));
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(340, 370, 121, 21));
        rBtnDec = new QRadioButton(Widget);
        rBtnDec->setObjectName(QStringLiteral("rBtnDec"));
        rBtnDec->setGeometry(QRect(340, 400, 100, 20));
        rBtnDec->setChecked(true);
        rBtnBin = new QRadioButton(Widget);
        rBtnBin->setObjectName(QStringLiteral("rBtnBin"));
        rBtnBin->setGeometry(QRect(340, 430, 100, 20));
        rBtnOct = new QRadioButton(Widget);
        rBtnOct->setObjectName(QStringLiteral("rBtnOct"));
        rBtnOct->setGeometry(QRect(340, 460, 100, 20));
        rBtnHex = new QRadioButton(Widget);
        rBtnHex->setObjectName(QStringLiteral("rBtnHex"));
        rBtnHex->setGeometry(QRect(340, 490, 100, 20));
        editText = new QTextEdit(Widget);
        editText->setObjectName(QStringLiteral("editText"));
        editText->setGeometry(QRect(320, 20, 121, 191));
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(450, 40, 160, 241));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        vSlider = new QSlider(horizontalLayoutWidget);
        vSlider->setObjectName(QStringLiteral("vSlider"));
        vSlider->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(vSlider);

        vScrollBar = new QScrollBar(horizontalLayoutWidget);
        vScrollBar->setObjectName(QStringLiteral("vScrollBar"));
        vScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(vScrollBar);

        progressBar = new QProgressBar(horizontalLayoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setValue(24);
        progressBar->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar);

        label_9 = new QLabel(Widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(450, 15, 61, 21));
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(450, 360, 160, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnClose = new QPushButton(verticalLayoutWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        verticalLayout->addWidget(btnClose);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(Widget);
        QObject::connect(btnClose, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "Green", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "Blue", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "Red", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "Slider\345\222\214QColor", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "Alpha", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\346\260\264\345\271\263", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "Dial\345\222\214LCDNumber", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", "LCD\346\230\276\347\244\272\350\277\233\345\210\266", Q_NULLPTR));
        rBtnDec->setText(QApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", Q_NULLPTR));
        rBtnBin->setText(QApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", Q_NULLPTR));
        rBtnOct->setText(QApplication::translate("Widget", "\345\205\253\350\277\233\345\210\266", Q_NULLPTR));
        rBtnHex->setText(QApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget", "\345\236\202\347\233\264", Q_NULLPTR));
        btnClose->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
