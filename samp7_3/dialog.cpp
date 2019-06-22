#include "dialog.h"
#include "ui_dialog.h"

#include <QFileInfo>
#include <QDir>
#include <QFileDialog>
#include <QDebug>
#include <QDateTime>
#include <QTemporaryDir>
#include <QTemporaryFile>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_30_clicked()//use
{
    //QFileInfo.baseName()
    //各按钮通用处理函数
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
    QString str = fileInfo.baseName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}

void Dialog::showBtnInfo(QObject *btn)//use
{
    //显示btn信息到QPlainTextEdit
    QPushButton *theBtn = static_cast<QPushButton *>(btn);
    ui->plainTextEdit->appendPlainText(theBtn->text());
    ui->plainTextEdit->appendPlainText(theBtn->toolTip() + "\n");
}

void Dialog::on_pushButton_51_clicked()//use
{
    //QFile判断文件是否存在
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    bool the = QFile::exists(sous);

    if(the)
    {
        ui->plainTextEdit->appendPlainText(+ "true \n");
    }
    else
    {
        ui->plainTextEdit->appendPlainText(+ "false \n");
    }

}

void Dialog::on_pushButton_50_clicked()//use
{
    //QFile::rename();
    showBtnInfo(sender());

    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString newFile = fileInfo.path() + "/" + fileInfo.baseName() + ".XYZ";
    QFile::rename(sous,newFile);//重命名文件,更改后缀名
    ui->plainTextEdit->appendPlainText("源文件:" + sous);
    ui->plainTextEdit->appendPlainText("重命名为:" + newFile + "\n");
}

void Dialog::on_pushButton_11_clicked()
{
    //列出子目录
    QDir dir(ui->editDir->text());
    QStringList strList =dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
    ui->plainTextEdit->appendPlainText("所选目录下的所有目录:");
    for(int i = 0;i < strList.count();i++)
    {
        ui->plainTextEdit->appendPlainText(strList.at(i));
    }
    ui->plainTextEdit->appendPlainText("\n");
}

void Dialog::on_pushButton_17_clicked()
{
    //列出所有文件
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    QStringList strList = dir.entryList(QDir::Files);
    ui->plainTextEdit->appendPlainText("所选目录下的所有文件:");
    for(int i = 0;i < strList.count();i++)
    {
        ui->plainTextEdit->appendPlainText(strList.at(i));
    }
    ui->plainTextEdit->appendPlainText("\n");
}

void Dialog::on_directoryChanged(const QString path)//use
{
    //directoryChanged slot,file create、delete
    ui->plainTextEdit->appendPlainText(path);
    ui->plainTextEdit->appendPlainText("目录发生变化\n");
}

void Dialog::on_fileChanged(const QString path)//use
{
    //file changed slot,modify、rename
    ui->plainTextEdit->appendPlainText(path);
    ui->plainTextEdit->appendPlainText("文件发生变化\n");
}

void Dialog::on_pushButton_46_clicked()//use
{
    //开始监听
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("监听目录:" + ui->editDir->text() + "\n");
    fileWatcher.addPath(ui->editDir->text());//监听目录
    fileWatcher.addPath(ui->editFile->text());//监听文件

//    fileWatcher.addPaths(QStringList);

    //connect signal to slot
    QObject::connect(&fileWatcher,&QFileSystemWatcher::directoryChanged,
            this,&Dialog::on_directoryChanged);
    QObject::connect(&fileWatcher,&QFileSystemWatcher::fileChanged,
            this,&Dialog::on_fileChanged);
}

void Dialog::on_pushButton_47_clicked()//use
{
    //停止监听
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("停止监听:" + ui->editDir->text() + "\n");
    fileWatcher.removePath(ui->editDir->text());
    fileWatcher.removePath(ui->editFile->text());

//    fileWatcher.removePaths(QStringList);

    QObject::disconnect(&fileWatcher,&QFileSystemWatcher::directoryChanged,
            this,&Dialog::on_directoryChanged);
    QObject::disconnect(&fileWatcher,&QFileSystemWatcher::fileChanged,
               this,&Dialog::on_fileChanged);
}

//slots
void Dialog::on_openFile_clicked()
{
    //open file
    QString curPath = QDir::currentPath();
    QString filter = "打开一个文件(*.h);;所有文件(*.*)";
    QString fileName = QFileDialog::getOpenFileName(this,"打开一个文件",curPath,filter);

    if(fileName.isEmpty())
    {
        return ;
    }

    ui->editFile->setText(fileName);
}

void Dialog::on_openDir_clicked()
{
    //open dir
    QString curPath = QDir::currentPath();

    QString dirName = QFileDialog::getExistingDirectory(this,"打开一个目录",curPath,QFileDialog::ShowDirsOnly);

    if(dirName.isEmpty())
    {
        return ;
    }

    ui->editDir->setText(dirName);
}

void Dialog::on_addPath_clicked()
{
    //begin listen
    this->on_pushButton_46_clicked();
}

void Dialog::on_removePath_clicked()
{
    //stop listen
    this->on_pushButton_47_clicked();
}

void Dialog::on_baseName_clicked()
{
    //QFileInfo.baseName();
    this->on_pushButton_30_clicked();
}

//QCoreApplication
void Dialog::on_coreApp_clicked()
{
    //QCoreApplication methods
    QString str = "";
    //应用程序启动路径
    str += "应用程序启动路径:" + QCoreApplication::applicationDirPath() + "\n";
    //应用程序带有路径的完整文件名
    str += "应用程序带有目录的完整文件名:" + QCoreApplication::applicationFilePath() + "\n";
    str += "应用程序名称:" + QCoreApplication::applicationName() + "\n";

    str += "应用搜索的库路径:\n";
    QStringList strList = QCoreApplication::libraryPaths();

    for(int i = 0;i < strList.count();i++)
    {
        str += strList.at(i) + "\n";
    }

    //设置应用程序机构名
    QCoreApplication::setOrganizationName("www");
    str += "获取应用程序机构名:" + QCoreApplication::organizationName() + "\n";

    ui->plainTextEdit->appendPlainText(str);

    //退出应用程序
//    QCoreApplication::exit();
}

void Dialog::on_clear_clicked()
{
    //clear
    ui->plainTextEdit->clear();
}

//QFile
void Dialog::on_copy_clicked()
{
    //copy
    QFileInfo fileInfo(ui->editFile->text());
    QString newFile = fileInfo.absolutePath() + "/ccc." + fileInfo.suffix();
    qDebug() << newFile;
    QFile::copy(ui->editFile->text(),newFile);
}

void Dialog::on_rename_clicked()
{
    //rename
    this->on_pushButton_50_clicked();
}

void Dialog::on_remove_clicked()
{
    //remove file
    QFile::remove(ui->editFile->text());
}

void Dialog::on_exists_clicked()
{
    //file exists
    this->on_pushButton_51_clicked();
}

void Dialog::on_setPermissions_clicked()
{
    //设置文件权限
    showBtnInfo(sender());
    QFile::setPermissions(ui->editFile->text(),QFile::Permission::ReadOwner);
}

void Dialog::on_permissions_clicked()
{
    //获取文件权限
    showBtnInfo(sender());
    qDebug() << QFile::permissions(ui->editFile->text());
//    ui->plainTextEdit->appendPlainText(QFile::permissions(ui->editFile->text()) + "\n");
}

void Dialog::setFileName(QString &file)
{
    QFile aFile;
    aFile.setFileName(file);

    ui->editFile->setText(file);
}

void Dialog::on_setFileName_clicked()
{
    //设置QFile当前文件,打开文件后不能再调用此函数
    QString curPath = QDir::currentPath();
    QString fileName = QFileDialog::getOpenFileName(this,"打开一个文件",curPath,"头文件(*.h);;所有文件(*.*)");

    this->setFileName(fileName);
}

void Dialog::on_mcopy_clicked()
{
    //成员函数copy文件
    showBtnInfo(sender());
    QFileInfo fileInfo(ui->editFile->text());
    QString newFile = fileInfo.absolutePath() + "/ccc." + fileInfo.suffix();
    qDebug() << newFile;
    QFile aFile;
    aFile.setFileName(ui->editFile->text());
    aFile.copy(ui->editFile->text(),newFile);

    ui->plainTextEdit->appendPlainText("源文件:" + ui->editFile->text() + "," +
                                       "目标文件:" + newFile + "\n");
}

void Dialog::on_mrename_clicked()
{
    //mrename
    showBtnInfo(sender());

    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString newFile = fileInfo.path() + "/" + fileInfo.baseName() + ".XYZ";
    QFile aFile;
    aFile.setFileName(sous);
    aFile.rename(newFile);//重命名文件,更改后缀名
    ui->plainTextEdit->appendPlainText("源文件:" + sous);
    ui->plainTextEdit->appendPlainText("重命名为:" + newFile + "\n");
}

void Dialog::on_mremove_clicked()
{
    //mremove
    showBtnInfo(sender());
    QFile aFile;
    aFile.setFileName(ui->editFile->text());
    aFile.remove();
}

void Dialog::on_mexists_clicked()
{
    //mexists
    showBtnInfo(sender());
    QFile aFile;
    aFile.setFileName(ui->editFile->text());
    bool ex = aFile.exists();

    if(ex)
    {
        ui->plainTextEdit->appendPlainText("true \n");
    }
    else
    {
        ui->plainTextEdit->appendPlainText("false \n");
    }
}

void Dialog::on_msetper_clicked()
{
    //m setPermissions
    showBtnInfo(sender());
    QFile aFile;
    aFile.setFileName(ui->editFile->text());
    aFile.setPermissions(QFile::ReadOwner);
}

void Dialog::on_mper_clicked()
{
    //m permissions
    showBtnInfo(sender());
    QFile aFile;
    aFile.setFileName(ui->editFile->text());
    qDebug() << aFile.permissions(ui->editFile->text());
}

void Dialog::on_msize_clicked()
{
    //m size
    showBtnInfo(sender());
    QFile aFile;
    aFile.setFileName(ui->editFile->text());
    ui->plainTextEdit->appendPlainText(QString::asprintf("%lld",aFile.size()) + "\n");
}

//QFileInfo
void Dialog::on_abBtnFilePath_clicked()
{
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,1);

}

void Dialog::fileInfoType(QFileInfo &fileInfo,int type)
{
    QString str;

    switch(type)
    {
    case 1://absoluteFilePath
        str = fileInfo.absoluteFilePath();
        break;
    case 2:
        str = fileInfo.absolutePath();
        break;
    case 3:
        str = fileInfo.fileName();
        break;
    case 4:
        str = fileInfo.filePath();
        break;
    case 5:
        str = QString::asprintf("%lld\n",fileInfo.size());
        break;
    case 6:
        str = fileInfo.path();
        break;
    case 7:
        str = fileInfo.completeBaseName();
        break;
    case 8:
        str = fileInfo.suffix();
        break;
    case 9:
        str = fileInfo.completeSuffix();
        break;
    case 10:
        str = QString::asprintf("%s\n",fileInfo.isDir() == true?"isDir(true)":"isDir(false)");
        break;
    case 11:
        str = QString::asprintf("%s\n",fileInfo.isFile() == true?"isFile(true)":"isFile(false)");
        break;
    case 12:
        str = QString::asprintf("%s\n",fileInfo.isExecutable() == true?"true":"false");
        break;
    case 13:
        str = fileInfo.created().toString();
        break;
    case 14:
        str = fileInfo.lastModified().toString();
        break;
    case 15:
        str = fileInfo.lastRead().toString();
        break;
    case 16:
        str = QString::asprintf("%s\n",fileInfo.exists() == true?"true":"false");
        break;
    case 17:
        str = QString::asprintf("%s\n",QFileInfo::exists(ui->editFile->text()) == true?"true":"false");
        break;
    }
    ui->plainTextEdit->appendPlainText(str);
}

void Dialog::on_abBtnPath_clicked()
{
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,2);
}

void Dialog::on_fileName_clicked()
{
    //fileName()
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,3);
}

void Dialog::on_filePath_clicked()
{
    //filePath
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,4);
}

void Dialog::on_infoszie_clicked()
{
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,5);
}

void Dialog::on_infopath_clicked()
{
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,6);
}

void Dialog::on_completeBaseName_clicked()
{
    //completeBaseName
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,7);
}

void Dialog::on_suffix_clicked()
{
    //suffix
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,8);
}

void Dialog::on_completeSuffix_clicked()
{
    //completeSuffix
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,9);
}

void Dialog::on_isDir_clicked()
{
    //isDir
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,10);
}

void Dialog::on_isFile_clicked()
{
    //isFile
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,11);
}

void Dialog::on_isExecutable_clicked()
{
    //isExecutable
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,12);
}

void Dialog::on_created_clicked()
{
    //created
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,13);
}

void Dialog::on_lastModify_clicked()
{
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,14);
}

void Dialog::on_lastRead_clicked()
{
    //lastRead
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,15);
}

void Dialog::on_exists_2_clicked()
{
    showBtnInfo(sender());

    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,16);
}

void Dialog::on_staticExists_clicked()
{
    //static exists
    QFileInfo fileInfo(ui->editFile->text());
//    fileInfo.setFile(ui->editFile->text());

    fileInfoType(fileInfo,17);
}

//QDir 静态函数
void Dialog::on_dirstatic_clicked()
{
    //临时文件目录名称
    QString str = "";
    str += "临时文件目录名称:" + QDir::tempPath() + "\n";
    str += "根目录名称:" + QDir::rootPath() + "\n";
    str += "主目录名称:" + QDir::homePath() + "\n";

    QString curPath = QDir::currentPath() ;
    str += "当前目录名称:" + curPath + "\n";

    QString sSet = QDir::setCurrent(curPath) == true?"true":"false";
    str += "设置当前目录:" + sSet + "\n";

    QFileInfoList list = QDir::drives();
    str += "系统根目录列表:\n";
    for(int i = 0;i < list.count();i++)
    {
        str += list.at(i).absoluteFilePath();
    }

    ui->plainTextEdit->appendPlainText(str);
}

//QDir成员函数
void Dialog::dirMember(int type)
{
    showBtnInfo(sender());
    QString dirName = ui->editDir->text();
    QString fileName = ui->editFile->text();
    QDir dir(dirName);
    QString str = "";
    QString ex = "";
    QStringList strList;

    switch(type)
    {
    case 1:
        str += "含文件名的绝对路径:" + dir.absoluteFilePath(fileName) + "\n";
        break;
    case 2:
        str += "当前目录的绝对路径:" + dir.absolutePath() + "\n";
        break;
    case 3:
        str += "当前目录的标准路径:" + dir.canonicalPath() + "\n";
        break;
    case 4:
        str += "文件的目录名:" + dir.filePath(fileName) + "\n";
        break;
    case 5:
        str += "最后一级目录名称:" + dir.dirName() + "\n";
        break;
    case 6:
        ex = dir.exists() == true?"true":"false";
        str += "当前目录是否存在:" + ex + "\n";
        break;
    case 7:
        strList = dir.entryList();
        str += "当前目录下的所有文件名及子目录\n";
        for(int i = 0;i < strList.count();i++)
        {
            str += strList.at(i) + "\n";
        }
        break;
    case 8:
        ex = dir.mkdir(dirName + "/subtest") == true?"true":"false";
        str += "在当前目录下创建目录:" + ex + "\n";
        break;
    case 9://fail
        ex = dir.rmdir(dirName + "/subtest/") == true?"true":"false";
        str += "删除指定目录:" + ex + "\n";
        break;
    case 10:
        ex = dir.remove(dirName + "/subtest/ccc.h") == true?"true":"false";
        str += "删除当前目录下指定文件:" + ex + "\n";
        break;
    case 11:
        ex = dir.rename(fileName,"ttt") == true?"true":"false";
        str += "重命名文件:" + ex + "\n";
        break;
    case 12:
        dir.setPath(dirName);
        str += "设置当前目录:\n";
        break;
    case 13:
        ex = dir.removeRecursively() == true?"true":"false";
        str += "删除当前目录及其下所有文件:" + ex + "\n";
        break;
    }

    ui->plainTextEdit->appendPlainText(str);
}

void Dialog::on_qdAbFilePath_clicked()
{
    //含文件名的绝对路径
    dirMember(1);
}

void Dialog::on_qdAbPath_clicked()
{
    //当前目录的绝对路径
    dirMember(2);
}

void Dialog::on_canonicalPath_clicked()
{
    //当前目录的标准路径
    dirMember(3);
}

void Dialog::on_qdfilePath_clicked()
{
    //返回文件的目录名
    dirMember(4);
}

void Dialog::on_dirName_clicked()
{
    //最后一级目录的名称
    dirMember(5);
}

void Dialog::on_qdexists_clicked()
{
    //当前目录是否存在
    dirMember(6);
}

void Dialog::on_entryList_clicked()
{
    //返回当前目录下的所有文件名及子目录
    dirMember(7);
}

void Dialog::on_mkdir_clicked()
{
    //在当前目录下创建目录
    dirMember(8);
}

void Dialog::on_rmdir_clicked()
{
    //删除指定目录
    dirMember(9);
}

void Dialog::on_qdremove_clicked()
{
    //删除目录下指定文件
    dirMember(10);
}

void Dialog::on_qdrename_clicked()
{
    //重命名
    dirMember(11);
}

void Dialog::on_setPath_clicked()
{
    //设置当前目录
    dirMember(12);
}

void Dialog::on_removeRecursively_clicked()
{
    //递归移除当前目录及子目录
    dirMember(13);
}

//QTemporaryDir QTemporaryFile
void Dialog::on_setAutoRemove_clicked()
{
    //设置是否自动删除
    showBtnInfo(sender());
    QTemporaryDir tempDir;
    tempDir.setAutoRemove(true);
}

void Dialog::on_path_clicked()
{
    //返回创建的临时目录名称
    showBtnInfo(sender());
    QTemporaryDir tempDir;
    QString str = tempDir.path();
    ui->plainTextEdit->appendPlainText(str);
}

void Dialog::on_qtempremove_clicked()
{
    //删除临时目录及下的所有文件
    showBtnInfo(sender());
    QTemporaryDir tempDir;
    qDebug() << tempDir.remove();
    ui->plainTextEdit->appendPlainText("删除临时目录及其下的所有文件\n");
}

void Dialog::on_temporaryFile_clicked()
{
    //打开临时文件
    //使用QCoreApplication::applicationName()作为文件名.XXXXXX六个随机数字作为文件后缀
    showBtnInfo(sender());
    QTemporaryFile tempFile;
    tempFile.setAutoRemove(true);
    tempFile.open();
    qDebug() << tempFile.fileName();

    ui->plainTextEdit->appendPlainText("临时文件名称:" + tempFile.fileName() + "\n");
}

//QFileSystemWatcher
void Dialog::on_directories_clicked()
{
    //返回监听的目录列表
    showBtnInfo(sender());
    QStringList strList;
    QString str = "";
    strList = fileWatcher.directories();
    for(int i  = 0;i < strList.count();i++)
    {
        str += strList.at(i) + "\n";
    }
    ui->plainTextEdit->appendPlainText(str);
}

void Dialog::on_files_clicked()
{
    //监听的文件列表
    showBtnInfo(sender());
    QStringList strList;
    QString str = "";
    strList = fileWatcher.files();
    for(int i  = 0;i < strList.count();i++)
    {
        str += strList.at(i) + "\n";
    }
    ui->plainTextEdit->appendPlainText(str);
}
