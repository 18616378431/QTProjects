#ifndef QFORMDOC_H
#define QFORMDOC_H

#include <QWidget>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QFileInfo>
#include <QFontDialog>

namespace Ui {
class QFormDoc;
}

class QFormDoc : public QWidget
{
    Q_OBJECT
private:
    QString mCurrentFile;//当前文件
    bool mFileOpened = false;//文件已打开

public:
    explicit QFormDoc(QWidget *parent = 0);
    ~QFormDoc();
    //主窗口里调用,实现对MDI自窗口的操作
    void loadFromFile(QString &aFileName);//打开文件
    QString currentFileName();//返回当前文件名
    bool isFileOpened();//文件已经打开
    void setEditFont();//设置字体
    void textCut();//cut
    void textCopy();//copy
    void textPaste();//paste

private:
    Ui::QFormDoc *ui;
};

#endif // QFORMDOC_H
