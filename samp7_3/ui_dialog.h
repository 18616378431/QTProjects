/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QToolBox *toolBox;
    QWidget *page6;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_5;
    QPushButton *coreApp;
    QWidget *page_3;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QPushButton *remove;
    QPushButton *copy;
    QPushButton *rename;
    QPushButton *setPermissions;
    QPushButton *exists;
    QPushButton *permissions;
    QPushButton *mcopy;
    QPushButton *mexists;
    QPushButton *msetper;
    QPushButton *setFileName;
    QPushButton *mrename;
    QPushButton *mremove;
    QPushButton *mper;
    QPushButton *msize;
    QLabel *label_5;
    QWidget *page;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *completeSuffix;
    QPushButton *abBtnPath;
    QPushButton *abBtnFilePath;
    QPushButton *fileName;
    QPushButton *filePath;
    QPushButton *suffix;
    QPushButton *baseName;
    QPushButton *completeBaseName;
    QPushButton *infopath;
    QPushButton *infoszie;
    QPushButton *isDir;
    QPushButton *isFile;
    QPushButton *lastRead;
    QPushButton *isExecutable;
    QPushButton *lastModify;
    QPushButton *created;
    QPushButton *exists_2;
    QPushButton *staticExists;
    QWidget *page_2;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_7;
    QPushButton *dirstatic;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_9;
    QPushButton *entryList;
    QPushButton *mkdir;
    QPushButton *rmdir;
    QPushButton *qdremove;
    QPushButton *qdexists;
    QPushButton *qdAbPath;
    QPushButton *dirName;
    QPushButton *qdAbFilePath;
    QPushButton *setPath;
    QPushButton *qdrename;
    QPushButton *qdfilePath;
    QPushButton *canonicalPath;
    QPushButton *removeRecursively;
    QWidget *page_4;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_8;
    QPushButton *qtempremove;
    QPushButton *setAutoRemove;
    QPushButton *path;
    QPushButton *temporaryFile;
    QWidget *page_5;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QPushButton *removePath;
    QPushButton *directories;
    QPushButton *addPath;
    QPushButton *files;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QPushButton *openFile;
    QPushButton *openDir;
    QPushButton *clear;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QLineEdit *editFile;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *editDir;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(991, 638);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 971, 621));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(layoutWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page6 = new QWidget();
        page6->setObjectName(QStringLiteral("page6"));
        page6->setGeometry(QRect(0, 0, 480, 397));
        gridLayoutWidget_3 = new QWidget(page6);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 0, 291, 381));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        coreApp = new QPushButton(gridLayoutWidget_3);
        coreApp->setObjectName(QStringLiteral("coreApp"));

        gridLayout_5->addWidget(coreApp, 0, 0, 1, 1);

        toolBox->addItem(page6, QString::fromUtf8("QCoreApplication\347\261\273"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 480, 397));
        gridLayoutWidget_4 = new QWidget(page_3);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 0, 461, 391));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_6->addWidget(label_4, 0, 0, 1, 2);

        remove = new QPushButton(gridLayoutWidget_4);
        remove->setObjectName(QStringLiteral("remove"));

        gridLayout_6->addWidget(remove, 2, 0, 1, 1);

        copy = new QPushButton(gridLayoutWidget_4);
        copy->setObjectName(QStringLiteral("copy"));

        gridLayout_6->addWidget(copy, 1, 0, 1, 1);

        rename = new QPushButton(gridLayoutWidget_4);
        rename->setObjectName(QStringLiteral("rename"));

        gridLayout_6->addWidget(rename, 1, 1, 1, 1);

        setPermissions = new QPushButton(gridLayoutWidget_4);
        setPermissions->setObjectName(QStringLiteral("setPermissions"));

        gridLayout_6->addWidget(setPermissions, 3, 0, 1, 1);

        exists = new QPushButton(gridLayoutWidget_4);
        exists->setObjectName(QStringLiteral("exists"));

        gridLayout_6->addWidget(exists, 2, 1, 1, 1);

        permissions = new QPushButton(gridLayoutWidget_4);
        permissions->setObjectName(QStringLiteral("permissions"));

        gridLayout_6->addWidget(permissions, 3, 1, 1, 1);

        mcopy = new QPushButton(gridLayoutWidget_4);
        mcopy->setObjectName(QStringLiteral("mcopy"));

        gridLayout_6->addWidget(mcopy, 5, 1, 1, 1);

        mexists = new QPushButton(gridLayoutWidget_4);
        mexists->setObjectName(QStringLiteral("mexists"));

        gridLayout_6->addWidget(mexists, 7, 0, 1, 1);

        msetper = new QPushButton(gridLayoutWidget_4);
        msetper->setObjectName(QStringLiteral("msetper"));

        gridLayout_6->addWidget(msetper, 7, 1, 1, 1);

        setFileName = new QPushButton(gridLayoutWidget_4);
        setFileName->setObjectName(QStringLiteral("setFileName"));

        gridLayout_6->addWidget(setFileName, 5, 0, 1, 1);

        mrename = new QPushButton(gridLayoutWidget_4);
        mrename->setObjectName(QStringLiteral("mrename"));

        gridLayout_6->addWidget(mrename, 6, 0, 1, 1);

        mremove = new QPushButton(gridLayoutWidget_4);
        mremove->setObjectName(QStringLiteral("mremove"));

        gridLayout_6->addWidget(mremove, 6, 1, 1, 1);

        mper = new QPushButton(gridLayoutWidget_4);
        mper->setObjectName(QStringLiteral("mper"));

        gridLayout_6->addWidget(mper, 8, 0, 1, 1);

        msize = new QPushButton(gridLayoutWidget_4);
        msize->setObjectName(QStringLiteral("msize"));

        gridLayout_6->addWidget(msize, 8, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_6->addWidget(label_5, 4, 0, 1, 2);

        toolBox->addItem(page_3, QString::fromUtf8("QFile\347\261\273"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 480, 397));
        gridLayoutWidget = new QWidget(page);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 325, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        completeSuffix = new QPushButton(gridLayoutWidget);
        completeSuffix->setObjectName(QStringLiteral("completeSuffix"));
        completeSuffix->setAutoDefault(false);

        gridLayout->addWidget(completeSuffix, 4, 1, 1, 1);

        abBtnPath = new QPushButton(gridLayoutWidget);
        abBtnPath->setObjectName(QStringLiteral("abBtnPath"));
        abBtnPath->setAutoDefault(false);

        gridLayout->addWidget(abBtnPath, 0, 1, 1, 1);

        abBtnFilePath = new QPushButton(gridLayoutWidget);
        abBtnFilePath->setObjectName(QStringLiteral("abBtnFilePath"));
        abBtnFilePath->setAutoDefault(false);

        gridLayout->addWidget(abBtnFilePath, 0, 0, 1, 1);

        fileName = new QPushButton(gridLayoutWidget);
        fileName->setObjectName(QStringLiteral("fileName"));
        fileName->setAutoDefault(false);

        gridLayout->addWidget(fileName, 1, 0, 1, 1);

        filePath = new QPushButton(gridLayoutWidget);
        filePath->setObjectName(QStringLiteral("filePath"));
        filePath->setAutoDefault(false);

        gridLayout->addWidget(filePath, 1, 1, 1, 1);

        suffix = new QPushButton(gridLayoutWidget);
        suffix->setObjectName(QStringLiteral("suffix"));
        suffix->setAutoDefault(false);

        gridLayout->addWidget(suffix, 4, 0, 1, 1);

        baseName = new QPushButton(gridLayoutWidget);
        baseName->setObjectName(QStringLiteral("baseName"));
        baseName->setAutoDefault(false);

        gridLayout->addWidget(baseName, 3, 0, 1, 1);

        completeBaseName = new QPushButton(gridLayoutWidget);
        completeBaseName->setObjectName(QStringLiteral("completeBaseName"));
        completeBaseName->setAutoDefault(false);

        gridLayout->addWidget(completeBaseName, 3, 1, 1, 1);

        infopath = new QPushButton(gridLayoutWidget);
        infopath->setObjectName(QStringLiteral("infopath"));
        infopath->setAutoDefault(false);

        gridLayout->addWidget(infopath, 2, 1, 1, 1);

        infoszie = new QPushButton(gridLayoutWidget);
        infoszie->setObjectName(QStringLiteral("infoszie"));
        infoszie->setAutoDefault(false);

        gridLayout->addWidget(infoszie, 2, 0, 1, 1);

        isDir = new QPushButton(gridLayoutWidget);
        isDir->setObjectName(QStringLiteral("isDir"));
        isDir->setAutoDefault(false);

        gridLayout->addWidget(isDir, 5, 0, 1, 1);

        isFile = new QPushButton(gridLayoutWidget);
        isFile->setObjectName(QStringLiteral("isFile"));
        isFile->setAutoDefault(false);

        gridLayout->addWidget(isFile, 5, 1, 1, 1);

        lastRead = new QPushButton(gridLayoutWidget);
        lastRead->setObjectName(QStringLiteral("lastRead"));

        gridLayout->addWidget(lastRead, 7, 1, 1, 1);

        isExecutable = new QPushButton(gridLayoutWidget);
        isExecutable->setObjectName(QStringLiteral("isExecutable"));

        gridLayout->addWidget(isExecutable, 6, 0, 1, 1);

        lastModify = new QPushButton(gridLayoutWidget);
        lastModify->setObjectName(QStringLiteral("lastModify"));

        gridLayout->addWidget(lastModify, 7, 0, 1, 1);

        created = new QPushButton(gridLayoutWidget);
        created->setObjectName(QStringLiteral("created"));

        gridLayout->addWidget(created, 6, 1, 1, 1);

        exists_2 = new QPushButton(gridLayoutWidget);
        exists_2->setObjectName(QStringLiteral("exists_2"));

        gridLayout->addWidget(exists_2, 8, 0, 1, 1);

        staticExists = new QPushButton(gridLayoutWidget);
        staticExists->setObjectName(QStringLiteral("staticExists"));

        gridLayout->addWidget(staticExists, 8, 1, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("QFileInfo\347\261\273"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 480, 397));
        gridLayoutWidget_5 = new QWidget(page_2);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(10, 0, 451, 61));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        dirstatic = new QPushButton(gridLayoutWidget_5);
        dirstatic->setObjectName(QStringLiteral("dirstatic"));

        gridLayout_7->addWidget(dirstatic, 0, 0, 1, 1);

        gridLayoutWidget_6 = new QWidget(page_2);
        gridLayoutWidget_6->setObjectName(QStringLiteral("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(10, 80, 451, 301));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        entryList = new QPushButton(gridLayoutWidget_6);
        entryList->setObjectName(QStringLiteral("entryList"));

        gridLayout_9->addWidget(entryList, 3, 0, 1, 1);

        mkdir = new QPushButton(gridLayoutWidget_6);
        mkdir->setObjectName(QStringLiteral("mkdir"));

        gridLayout_9->addWidget(mkdir, 3, 1, 1, 1);

        rmdir = new QPushButton(gridLayoutWidget_6);
        rmdir->setObjectName(QStringLiteral("rmdir"));

        gridLayout_9->addWidget(rmdir, 4, 0, 1, 1);

        qdremove = new QPushButton(gridLayoutWidget_6);
        qdremove->setObjectName(QStringLiteral("qdremove"));

        gridLayout_9->addWidget(qdremove, 4, 1, 1, 1);

        qdexists = new QPushButton(gridLayoutWidget_6);
        qdexists->setObjectName(QStringLiteral("qdexists"));

        gridLayout_9->addWidget(qdexists, 2, 1, 1, 1);

        qdAbPath = new QPushButton(gridLayoutWidget_6);
        qdAbPath->setObjectName(QStringLiteral("qdAbPath"));

        gridLayout_9->addWidget(qdAbPath, 0, 1, 1, 1);

        dirName = new QPushButton(gridLayoutWidget_6);
        dirName->setObjectName(QStringLiteral("dirName"));

        gridLayout_9->addWidget(dirName, 2, 0, 1, 1);

        qdAbFilePath = new QPushButton(gridLayoutWidget_6);
        qdAbFilePath->setObjectName(QStringLiteral("qdAbFilePath"));

        gridLayout_9->addWidget(qdAbFilePath, 0, 0, 1, 1);

        setPath = new QPushButton(gridLayoutWidget_6);
        setPath->setObjectName(QStringLiteral("setPath"));

        gridLayout_9->addWidget(setPath, 5, 1, 1, 1);

        qdrename = new QPushButton(gridLayoutWidget_6);
        qdrename->setObjectName(QStringLiteral("qdrename"));

        gridLayout_9->addWidget(qdrename, 5, 0, 1, 1);

        qdfilePath = new QPushButton(gridLayoutWidget_6);
        qdfilePath->setObjectName(QStringLiteral("qdfilePath"));

        gridLayout_9->addWidget(qdfilePath, 1, 1, 1, 1);

        canonicalPath = new QPushButton(gridLayoutWidget_6);
        canonicalPath->setObjectName(QStringLiteral("canonicalPath"));

        gridLayout_9->addWidget(canonicalPath, 1, 0, 1, 1);

        removeRecursively = new QPushButton(gridLayoutWidget_6);
        removeRecursively->setObjectName(QStringLiteral("removeRecursively"));

        gridLayout_9->addWidget(removeRecursively, 6, 0, 1, 1);

        toolBox->addItem(page_2, QString::fromUtf8("QDir\347\261\273"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 480, 397));
        gridLayoutWidget_7 = new QWidget(page_4);
        gridLayoutWidget_7->setObjectName(QStringLiteral("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(10, 10, 451, 371));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        qtempremove = new QPushButton(gridLayoutWidget_7);
        qtempremove->setObjectName(QStringLiteral("qtempremove"));

        gridLayout_8->addWidget(qtempremove, 1, 0, 1, 1);

        setAutoRemove = new QPushButton(gridLayoutWidget_7);
        setAutoRemove->setObjectName(QStringLiteral("setAutoRemove"));

        gridLayout_8->addWidget(setAutoRemove, 0, 0, 1, 1);

        path = new QPushButton(gridLayoutWidget_7);
        path->setObjectName(QStringLiteral("path"));

        gridLayout_8->addWidget(path, 0, 1, 1, 1);

        temporaryFile = new QPushButton(gridLayoutWidget_7);
        temporaryFile->setObjectName(QStringLiteral("temporaryFile"));

        gridLayout_8->addWidget(temporaryFile, 2, 0, 1, 1);

        toolBox->addItem(page_4, QString::fromUtf8("QTemporaryDir\345\222\214QTemporaryFile"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 480, 397));
        gridLayoutWidget_2 = new QWidget(page_5);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 0, 311, 381));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        removePath = new QPushButton(gridLayoutWidget_2);
        removePath->setObjectName(QStringLiteral("removePath"));
        removePath->setAutoDefault(false);

        gridLayout_4->addWidget(removePath, 1, 0, 1, 1);

        directories = new QPushButton(gridLayoutWidget_2);
        directories->setObjectName(QStringLiteral("directories"));
        directories->setAutoDefault(false);

        gridLayout_4->addWidget(directories, 2, 0, 1, 1);

        addPath = new QPushButton(gridLayoutWidget_2);
        addPath->setObjectName(QStringLiteral("addPath"));
        addPath->setAutoDefault(false);

        gridLayout_4->addWidget(addPath, 0, 0, 1, 1);

        files = new QPushButton(gridLayoutWidget_2);
        files->setObjectName(QStringLiteral("files"));
        files->setAutoDefault(false);

        gridLayout_4->addWidget(files, 3, 0, 1, 1);

        toolBox->addItem(page_5, QString::fromUtf8("QFileSystemWatcher\347\261\273"));

        horizontalLayout->addWidget(toolBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        openFile = new QPushButton(layoutWidget);
        openFile->setObjectName(QStringLiteral("openFile"));
        openFile->setAutoDefault(false);

        gridLayout_2->addWidget(openFile, 0, 0, 1, 1);

        openDir = new QPushButton(layoutWidget);
        openDir->setObjectName(QStringLiteral("openDir"));
        openDir->setAutoDefault(false);

        gridLayout_2->addWidget(openDir, 0, 1, 1, 1);

        clear = new QPushButton(layoutWidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setAutoDefault(false);

        gridLayout_2->addWidget(clear, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        plainTextEdit = new QPlainTextEdit(layoutWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout_3->addWidget(plainTextEdit, 2, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        editFile = new QLineEdit(layoutWidget);
        editFile->setObjectName(QStringLiteral("editFile"));

        gridLayout_3->addWidget(editFile, 0, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        editDir = new QLineEdit(layoutWidget);
        editDir->setObjectName(QStringLiteral("editDir"));

        gridLayout_3->addWidget(editDir, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Dialog);

        toolBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        coreApp->setText(QApplication::translate("Dialog", "QCoreApplication's Operation", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page6), QApplication::translate("Dialog", "QCoreApplication\347\261\273", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "\351\235\231\346\200\201\345\207\275\346\225\260", Q_NULLPTR));
        remove->setText(QApplication::translate("Dialog", "remove()", Q_NULLPTR));
        copy->setText(QApplication::translate("Dialog", "copy()", Q_NULLPTR));
        rename->setText(QApplication::translate("Dialog", "rename()", Q_NULLPTR));
        setPermissions->setText(QApplication::translate("Dialog", "setPermissions()", Q_NULLPTR));
        exists->setText(QApplication::translate("Dialog", "exists()", Q_NULLPTR));
        permissions->setText(QApplication::translate("Dialog", "permissions()", Q_NULLPTR));
        mcopy->setText(QApplication::translate("Dialog", "copy()", Q_NULLPTR));
        mexists->setText(QApplication::translate("Dialog", "exists()", Q_NULLPTR));
        msetper->setText(QApplication::translate("Dialog", "setPermissions()", Q_NULLPTR));
        setFileName->setText(QApplication::translate("Dialog", "setFileName()", Q_NULLPTR));
        mrename->setText(QApplication::translate("Dialog", "rename()", Q_NULLPTR));
        mremove->setText(QApplication::translate("Dialog", "remove()", Q_NULLPTR));
        mper->setText(QApplication::translate("Dialog", "permissions()", Q_NULLPTR));
        msize->setText(QApplication::translate("Dialog", "size()", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "\346\210\220\345\221\230\345\207\275\346\225\260", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("Dialog", "QFile\347\261\273", Q_NULLPTR));
        completeSuffix->setText(QApplication::translate("Dialog", "completeSuffix()", Q_NULLPTR));
        abBtnPath->setText(QApplication::translate("Dialog", "absolutePath()", Q_NULLPTR));
        abBtnFilePath->setText(QApplication::translate("Dialog", "absuloteFilePath()", Q_NULLPTR));
        fileName->setText(QApplication::translate("Dialog", "fileName()", Q_NULLPTR));
        filePath->setText(QApplication::translate("Dialog", "filePath()", Q_NULLPTR));
        suffix->setText(QApplication::translate("Dialog", "suffix()", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        baseName->setToolTip(QApplication::translate("Dialog", "baseName toolTip", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        baseName->setText(QApplication::translate("Dialog", "baseName()", Q_NULLPTR));
        completeBaseName->setText(QApplication::translate("Dialog", "completeBaseName()", Q_NULLPTR));
        infopath->setText(QApplication::translate("Dialog", "path()", Q_NULLPTR));
        infoszie->setText(QApplication::translate("Dialog", "size()", Q_NULLPTR));
        isDir->setText(QApplication::translate("Dialog", "isDir()", Q_NULLPTR));
        isFile->setText(QApplication::translate("Dialog", "isFile()", Q_NULLPTR));
        lastRead->setText(QApplication::translate("Dialog", "lastRead", Q_NULLPTR));
        isExecutable->setText(QApplication::translate("Dialog", "isExecutable", Q_NULLPTR));
        lastModify->setText(QApplication::translate("Dialog", "lastModify", Q_NULLPTR));
        created->setText(QApplication::translate("Dialog", "created", Q_NULLPTR));
        exists_2->setText(QApplication::translate("Dialog", "exists", Q_NULLPTR));
        staticExists->setText(QApplication::translate("Dialog", "staticExists", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("Dialog", "QFileInfo\347\261\273", Q_NULLPTR));
        dirstatic->setText(QApplication::translate("Dialog", "QDir  static", Q_NULLPTR));
        entryList->setText(QApplication::translate("Dialog", "entryList", Q_NULLPTR));
        mkdir->setText(QApplication::translate("Dialog", "mkdir", Q_NULLPTR));
        rmdir->setText(QApplication::translate("Dialog", "rmdir", Q_NULLPTR));
        qdremove->setText(QApplication::translate("Dialog", "remove", Q_NULLPTR));
        qdexists->setText(QApplication::translate("Dialog", "exists", Q_NULLPTR));
        qdAbPath->setText(QApplication::translate("Dialog", "absolutePath", Q_NULLPTR));
        dirName->setText(QApplication::translate("Dialog", "dirName", Q_NULLPTR));
        qdAbFilePath->setText(QApplication::translate("Dialog", "absoluteFilePath", Q_NULLPTR));
        setPath->setText(QApplication::translate("Dialog", "setPath", Q_NULLPTR));
        qdrename->setText(QApplication::translate("Dialog", "rename", Q_NULLPTR));
        qdfilePath->setText(QApplication::translate("Dialog", "filePath", Q_NULLPTR));
        canonicalPath->setText(QApplication::translate("Dialog", "canonicalPath", Q_NULLPTR));
        removeRecursively->setText(QApplication::translate("Dialog", "removeRecursively", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("Dialog", "QDir\347\261\273", Q_NULLPTR));
        qtempremove->setText(QApplication::translate("Dialog", "remove", Q_NULLPTR));
        setAutoRemove->setText(QApplication::translate("Dialog", "setAutoRemove", Q_NULLPTR));
        path->setText(QApplication::translate("Dialog", "path", Q_NULLPTR));
        temporaryFile->setText(QApplication::translate("Dialog", "temporaryFile", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("Dialog", "QTemporaryDir\345\222\214QTemporaryFile", Q_NULLPTR));
        removePath->setText(QApplication::translate("Dialog", "removePath()\345\201\234\346\255\242\347\233\221\345\220\254", Q_NULLPTR));
        directories->setText(QApplication::translate("Dialog", "directories()", Q_NULLPTR));
        addPath->setText(QApplication::translate("Dialog", "addPath()\345\274\200\345\247\213\347\233\221\345\220\254", Q_NULLPTR));
        files->setText(QApplication::translate("Dialog", "files()", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("Dialog", "QFileSystemWatcher\347\261\273", Q_NULLPTR));
        openFile->setText(QApplication::translate("Dialog", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        openDir->setText(QApplication::translate("Dialog", "\346\211\223\345\274\200\347\233\256\345\275\225", Q_NULLPTR));
        clear->setText(QApplication::translate("Dialog", "\346\270\205\351\231\244\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "\346\226\207\344\273\266", Q_NULLPTR));
        editFile->setText(QApplication::translate("Dialog", "/Users/wangjiankang/Documents/QTProjects/samp7_3/test/ccc.h", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "\347\233\256\345\275\225", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "\344\277\241\346\201\257", Q_NULLPTR));
        editDir->setText(QApplication::translate("Dialog", "/Users/wangjiankang/Documents/QTProjects/samp7_3/test", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
