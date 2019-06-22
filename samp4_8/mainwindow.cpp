#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LabFileName = new QLabel("");
    ui->statusBar->addWidget(LabFileName);
    this->setCentralWidget(ui->scrollArea);//设置中心布局组件
    iniTree();//初始化目录树
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::iniTree()
{
    //初始化目录树
    QString datastr = "";//item的data存储的string
    ui->treeFiles->clear();
    QIcon icon;
    icon.addFile(":/imgs/AppIcon.icns");

    QTreeWidgetItem *item = new QTreeWidgetItem(MainWindow::itTopItem);
    item->setIcon(MainWindow::colItem,icon);//第一列图标
    item->setText(MainWindow::colItem,"图片文件");//第一列文字
    item->setText(MainWindow::colItemType,"type=itTopItem");//第二列
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable |
                   Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    item->setCheckState(colItem,Qt::Checked);
    item->setData(MainWindow::colItem,Qt::UserRole,QVariant(datastr));

    ui->treeFiles->addTopLevelItem(item);//添加顶层节点
}

void MainWindow::on_actAddFolder_triggered()
{
    //添加组节点
    QString dir = QFileDialog::getExistingDirectory();//选择目录

//    qDebug() << dir;

    if(!dir.isEmpty())
    {
        QTreeWidgetItem *parItem = ui->treeFiles->currentItem();//当前节点

        if(parItem == nullptr)
        {
            qDebug() << "Please select a Node to add!";
            return ;
        }

        addFolderItem(parItem,dir);//在父节点下面添加一个组节点
    }
}

void MainWindow::addFolderItem(QTreeWidgetItem *parItem, QString dirName)
{
    //添加组节点
    QIcon icon(":/imgs/AppIcon.icns");
    QString NodeText = getFinalFolderName(dirName);//获得最后的文件夹名称

//    qDebug() << NodeText;

    QTreeWidgetItem *item;
    item = new QTreeWidgetItem(MainWindow::itGroupItem);//节点类型itGroupItem
    item->setIcon(MainWindow::colItem,icon);
    item->setText(MainWindow::colItem,NodeText);
    item->setText(MainWindow::colItemType,"type=itGroupItem");
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable |
                   Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    item->setCheckState(colItem,Qt::Checked);
    item->setData(colItem,Qt::UserRole,QVariant(dirName));

    parItem->addChild(item);//在父节点下添加子节点
}

QString MainWindow::getFinalFolderName(const QString &fullPathName)
{
    //从完整的目录名称获得最后的文件夹名称
    int cnt = fullPathName.length();
    int i = fullPathName.lastIndexOf("/");
    QString str = fullPathName.right(cnt - i - 1);

    return str;
}

void MainWindow::on_actAddFiles_triggered()
{
    //添加图片文件节点
    QStringList files = QFileDialog::getOpenFileNames(this,"选择一个或多个文件","","Images(*.png)");
    if(files.isEmpty())
    {
        return ;
    }
    QTreeWidgetItem *parItem,*item;
    item = ui->treeFiles->currentItem();
    if(item->type() == itImageItem)
    {
        parItem = item->parent();
    }
    else
    {
        parItem = item;
    }

    for(int i = 0;i < files.size();i++)
    {
        QString aFileName = files.at(i);//得到一个文件名称
        addImageItem(parItem,aFileName);//添加一个图片节点
    }
}

void MainWindow::addImageItem(QTreeWidgetItem *parItem,QString aFileName)
{
    //添加图片文件节点
    QIcon icon(":/imgs/compass.icns");
    QString NodeText = getFinalFolderName(aFileName);//获得最后的文件名称
    QTreeWidgetItem *item;
    item = new QTreeWidgetItem(MainWindow::itImageItem);//节点类型itImageItem
    item->setIcon(colItem,icon);
    item->setText(colItem,NodeText);
    item->setText(colItemType,"type=itImageItem");
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled |
                   Qt::ItemIsAutoTristate | Qt::ItemIsUserCheckable);
    item->setCheckState(colItem,Qt::Checked);
    item->setData(colItem,Qt::UserRole,QVariant(aFileName));//完整文件名称
    parItem->addChild(item);//在父节点下面添加子节点
}

void MainWindow::on_treeFiles_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    //当前节点变化时的处理
    Q_UNUSED(previous);
    if(current == NULL)
    {
        return ;
    }
    int var = current->type();
    switch(var)
    {
    case itTopItem://顶层节点
        ui->actAddFolder->setEnabled(true);
        ui->actAddFiles->setEnabled(true);
        ui->actDeleteItem->setEnabled(false);//顶层节点不可删除
        break;
    case itGroupItem://组节点
        ui->actAddFolder->setEnabled(true);
        ui->actAddFiles->setEnabled(true);
        ui->actDeleteItem->setEnabled(true);
        break;
    case itImageItem://图片文件节点
        ui->actAddFolder->setEnabled(false);//图片节点不能添加目录节点
        ui->actAddFiles->setEnabled(true);
        ui->actDeleteItem->setEnabled(true);
        displayImage(current);//Dock展示图片
        break;
    }
}

void MainWindow::on_actDeleteItem_triggered()
{
    //删除节点
    QTreeWidgetItem *item = ui->treeFiles->currentItem();//当前节点
    QTreeWidgetItem *parItem = item->parent();//父节点
    parItem->removeChild(item);//移除子节点并不会删除
    delete item;

    //删除顶层节点
//    QTreeWidget::takeTopLevelItem(index);
}

void MainWindow::on_actScanItems_triggered()
{
    //遍历节点
    for(int i = 0;i < ui->treeFiles->topLevelItemCount();i++)
    {
        QTreeWidgetItem *item = ui->treeFiles->topLevelItem(i);//顶层节点
        changeItemCaption(item);//更改节点标题
    }
}

void MainWindow::changeItemCaption(QTreeWidgetItem *item)
{
    QString str = "*" + item->text(colItem);//节点标题前加*
    item->setText(colItem,str);
    if(item->childCount() > 0)
    {
        for(int i = 0;i < item->childCount();i++)//遍历子节点
        {
            changeItemCaption(item->child(i));//递归遍历子节点
        }
    }
}

void MainWindow::displayImage(QTreeWidgetItem *item)
{
    //显示图片,节点item存储了图片文件名
    QString filename = item->data(colItem,Qt::UserRole).toString();
    LabFileName->setText(filename);
    curPixmap.load(filename);
    on_actZoomFitH_triggered();//自动适应高度显示
}

void MainWindow::on_actZoomFitH_triggered()
{
    //适应高度显示图片
    int H = ui->scrollArea->height();
    int realH = curPixmap.height();
    pixRatio = float(H) / realH;//当前显示比例,浮点数
    QPixmap pix = curPixmap.scaledToHeight(H - 30);
    ui->LabPicture->setPixmap(pix);
}

void MainWindow::on_acZoomIn_triggered()
{
    //放大显示
    pixRatio = pixRatio * 1.2;
    int w = pixRatio * curPixmap.width();
    int h = pixRatio * curPixmap.height();
    QPixmap pix = curPixmap.scaled(w,h);
    ui->LabPicture->setPixmap(pix);
}

void MainWindow::on_actZoomRealSize_triggered()
{
    //实际大小显示
    pixRatio = 1;
    ui->LabPicture->setPixmap(curPixmap);
}

void MainWindow::on_actZoomOut_triggered()
{
    //缩小显示
    pixRatio = pixRatio * 0.8;
    int w = pixRatio * curPixmap.width();
    int h = pixRatio * curPixmap.height();
    QPixmap pix = curPixmap.scaled(w,h);
    ui->LabPicture->setPixmap(pix);
}

void MainWindow::on_actZoomFitW_triggered()
{
    //适应宽度
    int W = curPixmap.width();
    int realW = curPixmap.width();
    pixRatio = float(W) / realW;
    QPixmap pix = curPixmap.scaledToWidth(W - 30);
    ui->LabPicture->setPixmap(pix);
}

void MainWindow::on_actDockFloat_triggered(bool checked)
{
    //停靠区浮动性
    ui->dockWidget->setFloating(checked);
//    qDebug() << __FUNCTION__;
}

void MainWindow::on_dockWidget_visibilityChanged(bool visible)
{
    //停靠区可见性变化
    ui->actDockVisible->setChecked(visible);
//    qDebug() << __FUNCTION__;
}


void MainWindow::on_dockWidget_topLevelChanged(bool topLevel)
{
    //停靠区浮动变化
    ui->actDockFloat->setChecked(topLevel);
//    qDebug() << __FUNCTION__;
}

void MainWindow::on_actDockVisible_toggled(bool arg1)
{
    //停靠区的可见性
    ui->dockWidget->setVisible(arg1);
//    qDebug() << __FUNCTION__;
}
