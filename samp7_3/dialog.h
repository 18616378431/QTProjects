#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QFileSystemWatcher>
#include <QFileInfo>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;

private:
    QFileSystemWatcher fileWatcher;

    void on_pushButton_30_clicked();//pushbutton enter
    void showBtnInfo(QObject *btn);//show info
    void on_pushButton_51_clicked();//file exists
    void on_pushButton_50_clicked();//rename file
    void on_pushButton_11_clicked();//list dir's dirs
    void on_pushButton_17_clicked();//list dir's files
    void on_pushButton_46_clicked();//addPath()
    void on_pushButton_47_clicked();//removePath()

    void setFileName(QString &file);
    void fileInfoType(QFileInfo &fileInfo,int type);

    //QDir成员函数适配器
    void dirMember(int type);

private slots:
    void on_directoryChanged(const QString path);
    void on_fileChanged(const QString path);
    void on_openFile_clicked();
    void on_openDir_clicked();
    void on_addPath_clicked();
    void on_removePath_clicked();
    void on_baseName_clicked();
    void on_coreApp_clicked();
    void on_clear_clicked();
    void on_copy_clicked();
    void on_rename_clicked();
    void on_remove_clicked();
    void on_exists_clicked();
    void on_setPermissions_clicked();
    void on_permissions_clicked();
    void on_setFileName_clicked();
    void on_mcopy_clicked();
    void on_mrename_clicked();
    void on_mremove_clicked();
    void on_mexists_clicked();
    void on_msetper_clicked();
    void on_mper_clicked();
    void on_msize_clicked();
    void on_abBtnFilePath_clicked();
    void on_abBtnPath_clicked();
    void on_fileName_clicked();
    void on_filePath_clicked();
    void on_infoszie_clicked();
    void on_infopath_clicked();
    void on_completeBaseName_clicked();
    void on_suffix_clicked();
    void on_completeSuffix_clicked();
    void on_isDir_clicked();
    void on_isFile_clicked();
    void on_isExecutable_clicked();
    void on_created_clicked();
    void on_lastModify_clicked();
    void on_lastRead_clicked();
    void on_exists_2_clicked();
    void on_staticExists_clicked();
    void on_dirstatic_clicked();
    void on_qdAbFilePath_clicked();
    void on_qdAbPath_clicked();
    void on_canonicalPath_clicked();
    void on_qdfilePath_clicked();
    void on_dirName_clicked();
    void on_qdexists_clicked();
    void on_entryList_clicked();
    void on_mkdir_clicked();
    void on_rmdir_clicked();
    void on_qdremove_clicked();
    void on_qdrename_clicked();
    void on_setPath_clicked();
    void on_removeRecursively_clicked();
    void on_setAutoRemove_clicked();
    void on_path_clicked();
    void on_qtempremove_clicked();
    void on_temporaryFile_clicked();
    void on_directories_clicked();
    void on_files_clicked();
};

#endif // DIALOG_H
