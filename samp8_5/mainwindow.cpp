#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTime>
#include <QGraphicsItem>
#include <QColorDialog>
#include <QFontDialog>
#include <QInputDialog>

#include <QDebug>

template<typename T>
void setBrushColor(T & item)
{
    //函数模板
    QColor color = item->brush().color();
    color = QColorDialog::getColor(color,NULL,"选择填充颜色");
    if(color.isValid())
    {
        item->setBrush(QBrush(color));
    }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //创建状态栏标签
    labViewCord = new QLabel("View 坐标:");
    labViewCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labViewCord);

    labSceneCord = new QLabel("Scene 坐标:");
    labSceneCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labSceneCord);

    labItemCord = new QLabel("Item 坐标:");
    labItemCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labItemCord);

    labItemInfo = new QLabel("ItemInfo:");
    labItemInfo->setMinimumWidth(150);
    ui->statusBar->addWidget(labItemInfo);

    //场景与视图关联
    scene = new QGraphicsScene(-300,-200,600,200);
    ui->View->setScene(scene);
    ui->View->setCursor(Qt::CrossCursor);//鼠标光标形状
    ui->View->setMouseTracking(true);
    ui->View->setDragMode(QGraphicsView::RubberBandDrag);

    this->setCentralWidget(ui->View);

    //关联View的信号与槽
    QObject::connect(ui->View,SIGNAL(mouseMovePoint(QPoint)),
                     this,SLOT(on_mouseMovePoint(QPoint)));
    QObject::connect(ui->View,SIGNAL(mouseClicked(QPoint)),
                     this,SLOT(on_mouseClicked(QPoint)));
    QObject::connect(ui->View,SIGNAL(mouseDoubleClick(QPoint)),
                     this,SLOT(on_mouseDoubleClick(QPoint)));
    QObject::connect(ui->View,SIGNAL(keyPress(QKeyEvent*)),
                     this,SLOT(on_keyPress(QKeyEvent*)));
    //随机数初始化
    qsrand(QTime::currentTime().second());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mouseMovePoint(QPoint point)
{
    //鼠标移动
    labViewCord->setText(QString::asprintf("View 坐标:%d %d",point.x(),point.y()));
    QPointF pointF = ui->View->mapToScene(point);
    labSceneCord->setText(QString::asprintf("Scene 坐标:%.0f %.0f",pointF.x(),pointF.y()));
}
void MainWindow::on_mouseClicked(QPoint point)
{
    //鼠标单击
    QPointF pointScene = ui->View->mapToScene(point);
    QGraphicsItem *item = nullptr;
    item = scene->itemAt(pointScene,ui->View->transform());
    if(item != nullptr)
    {
        QPointF pointItem = item->mapFromScene(pointScene);
        labItemCord->setText(QString::asprintf("Item 坐标:%.0f %.0f",pointItem.x(),pointItem.y()));
        labItemInfo->setText(item->data(ItemDesciption).toString() + ",ItemId:" + item->data(ItemId).toString());
    }
}
void MainWindow::on_mouseDoubleClick(QPoint point)
{
    //鼠标双击
    QPointF pointScene = ui->View->mapToScene(point);//转换到场景坐标
    QGraphicsItem *item = NULL;
    item = scene->itemAt(pointScene,ui->View->transform());//获取光标下的绘图项

    if(item == NULL)
    {
        return ;
    }

    switch(item->type())
    {
    case QGraphicsRectItem::Type://矩形项
    {
        //强制类型转换
        QGraphicsRectItem *theItem = qgraphicsitem_cast<QGraphicsRectItem *>(item);
        setBrushColor(theItem);
        break;
    }
    case QGraphicsEllipseItem::Type://椭圆和圆
    {
        QGraphicsEllipseItem *theItem = qgraphicsitem_cast<QGraphicsEllipseItem *>(item);
        setBrushColor(theItem);
        break;
    }
    case QGraphicsPolygonItem::Type://梯形和三角形
    {
        QGraphicsPolygonItem *theItem=qgraphicsitem_cast<QGraphicsPolygonItem*>(item);
        setBrushColor(theItem);
        break;
    }
    case QGraphicsLineItem::Type://直线
    {
        QGraphicsLineItem *theItem = qgraphicsitem_cast<QGraphicsLineItem *>(item);
        QPen pen = theItem->pen();
        QColor color = pen.color();
        color = QColorDialog::getColor(color,NULL,"选择线条颜色");
        if(color.isValid())
        {
            pen.setColor(color);
            theItem->setPen(pen);
        }
        break;
    }
    case QGraphicsTextItem::Type://文字,设置字体
    {
        QGraphicsTextItem *theItem = qgraphicsitem_cast<QGraphicsTextItem *>(item);
        QFont font = theItem->font();
        bool ok = false;
        font = QFontDialog::getFont(&ok,font,NULL,"设置字体");
        if(ok)
        {
            theItem->setFont(font);
        }
        break;
    }
    }
}
void MainWindow::on_keyPress(QKeyEvent *event)
{
    //按键事件
    if(scene->selectedItems().count() != 1)
    {
        return ;//没有选中绘图项,或选中了多项
    }
    QGraphicsItem *item = scene->selectedItems().at(0);

    if(event->key() == Qt::Key_Backspace)//删除 Key_Delete
    {
        scene->removeItem(item);
    }
    else if(event->key() == Qt::Key_Space)//空格键,顺时针旋转90度
    {
        item->setRotation(90 + item->rotation());
    }
    else if(event->key() == Qt::Key_Control)//放大 Key_PageUp
    {
        item->setScale(0.1 + item->scale());
    }
    else if(event->key() == Qt::Key_Alt)//缩小 Key_PageDown
    {
        item->setScale(item->scale() - 0.1);
    }
    else if(event->key() == Qt::Key_Left)//左移
    {
        item->setX(item->x() - 1);
    }
    else if(event->key() == Qt::Key_Right)//右移
    {
        item->setX(item->x() + 1);
    }
    else if(event->key() == Qt::Key_Up)//上移
    {
        item->setY(item->y() - 1);
    }
    else if(event->key() == Qt::Key_Down)//下移
    {
        item->setY(item->y() + 1);
    }
}

void MainWindow::on_actItem_Ellipse_triggered()
{
    //添加一个椭圆
    QGraphicsEllipseItem *item = new QGraphicsEllipseItem(-50,-30,100,60);
    item->setFlags(QGraphicsItem::ItemIsSelectable |
                   QGraphicsItem::ItemIsMovable |
                   QGraphicsItem::ItemIsFocusable);
    item->setBrush(QBrush(Qt::blue));//填充颜色
    item->setZValue(++frontZ);//叠放次序
    item->setPos(-50 + (qrand() % 100),-50 + (qrand() % 100));//初始位置
    item->setData(ItemId,++seqNum);//自定义数据ItemId
    item->setData(ItemDesciption,"椭圆");//自定义数据,ItemDesciption

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}

void MainWindow::on_actZoomIn_triggered()
{
    //放大
    int cnt = scene->selectedItems().count();

    if(cnt == 1)
    {
        QGraphicsItem *item = scene->selectedItems().at(0);
        item->setScale(0.1 + item->scale());
    }
    else
    {
        ui->View->scale(1.1,1.1);
    }
}

void MainWindow::on_actZoomOut_triggered()
{
    //缩小
    int cnt = scene->selectedItems().count();

    if(cnt == 1)
    {
        QGraphicsItem *item = scene->selectedItems().at(0);
        item->setScale(item->scale() - 0.1);
    }
    else
    {
        ui->View->scale(0.9,0.9);
    }
}

void MainWindow::on_actRotateLeft_triggered()
{
    //逆时针旋转
    int cnt = scene->selectedItems().count();

    if(cnt == 1)
    {
        QGraphicsItem *item = scene->selectedItems().at(0);
        item->setRotation(-30 + item->rotation());
    }
    else
    {
        ui->View->rotate(-30);
    }
}

void MainWindow::on_actRotateRight_triggered()
{
    //顺时针旋转
    int cnt = scene->selectedItems().count();

    if(cnt == 1)
    {
        QGraphicsItem *item = scene->selectedItems().at(0);
        item->setRotation(30 + item->rotation());
    }
    else
    {
        ui->View->rotate(30);
    }
}

void MainWindow::on_actRestore_triggered()
{
    //恢复坐标变换(待调试)
    int cnt = scene->selectedItems().count();

    qDebug() << cnt;

    if(cnt == 1)
    {
        QGraphicsItem *item = scene->selectedItems().at(0);
        item->resetTransform();//
    }
    else
    {
        ui->View->resetTransform();
    }
}

void MainWindow::on_actEdit_Front_triggered()
{
    //前置
    qDebug() << frontZ;

    int cnt = scene->selectedItems().count();

    if(cnt > 0)
    {
        //只处理第一个图形项
        QGraphicsItem *item = scene->selectedItems().at(0);
        item->setZValue(++frontZ);
    }
}

void MainWindow::on_actEdit_Back_triggered()
{
    //后置
    qDebug() << backZ;

    int cnt = scene->selectedItems().count();

    if(cnt > 0)
    {
        QGraphicsItem *item = scene->selectedItems().at(0);
        item->setZValue(--backZ);
    }
}

void MainWindow::on_actGroup_triggered()
{
    //组合
    int cnt = scene->selectedItems().count();

    if(cnt > 1)
    {
        QGraphicsItemGroup *group = new QGraphicsItemGroup;//创建组合
        scene->addItem(group);
        for(int i = 0;i < cnt;i++)
        {
            QGraphicsItem *item = scene->selectedItems().at(0);
            item->setSelected(false);//清除虚线框
            item->clearFocus();
            group->addToGroup(item);//添加到组合
        }
        group->setFlags(QGraphicsItem::ItemIsSelectable |
                        QGraphicsItem::ItemIsMovable |
                        QGraphicsItem::ItemIsFocusable);
        group->setZValue(++frontZ);
        scene->clearSelection();
        group->setSelected(true);
    }
}

void MainWindow::on_actGroupBreak_triggered()
{
    //打散 假设选中的图形项是group 未做类型判断
    int cnt = scene->selectedItems().count();

    if(cnt == 1)
    {
        QGraphicsItemGroup *group;
        group = (QGraphicsItemGroup *)scene->selectedItems().at(0);
        scene->destroyItemGroup(group);
    }
}

void MainWindow::on_actEdit_Delete_triggered()
{
    //删除所有选中的图形项
    int cnt = scene->selectedItems().count();

    if(cnt > 0)
    {
        for(int i = 0;i < cnt;i++)
        {
            QGraphicsItem *item = scene->selectedItems().at(0);
            scene->removeItem(item);//删除图形项
        }
    }
}

void MainWindow::on_actItem_Rect_triggered()
{
    //创建矩形
    QGraphicsRectItem *item = new QGraphicsRectItem(-50,-30,100,200);
    item->setFlags(QGraphicsItem::ItemIsSelectable |
                   QGraphicsItem::ItemIsMovable |
                   QGraphicsItem::ItemIsFocusable);
    item->setBrush(QBrush(Qt::red));
    item->setZValue(++frontZ);
    item->setPos(-50 + qrand() % 100,-50 + (qrand() % 100));
    item->setData(ItemId,++seqNum);
    item->setData(ItemDesciption,"矩形");

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}

void MainWindow::on_actItem_Circle_triggered()
{
    //创建圆形
    QGraphicsEllipseItem *item = new QGraphicsEllipseItem(-50,-30,100,100);
    item->setFlags(QGraphicsItem::ItemIsSelectable |
                   QGraphicsItem::ItemIsMovable |
                   QGraphicsItem::ItemIsFocusable);
    item->setBrush(QBrush(Qt::red));
    item->setZValue(++frontZ);
    item->setPos(-50 + qrand() % 100,-50 + (qrand() % 100));
    item->setData(ItemId,++seqNum);
    item->setData(ItemDesciption,"圆形");

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}


void MainWindow::on_actItem_Triangle_triggered()
{
    //创建三角形
    QGraphicsPolygonItem *item = new QGraphicsPolygonItem;
    QPolygonF points;
    points.append(QPointF(0,-40));
    points.append(QPointF(60,40));
    points.append(QPointF(-40,40));
    item->setPolygon(points);
    item->setFlags(QGraphicsItem::ItemIsSelectable |
                   QGraphicsItem::ItemIsMovable |
                   QGraphicsItem::ItemIsFocusable);
    item->setBrush(QBrush(Qt::magenta));
    item->setZValue(++frontZ);
    item->setPos(-50 + qrand() % 100,-50 + (qrand() % 100));
    item->setData(ItemId,++seqNum);
    item->setData(ItemDesciption,"三角形");

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}

void MainWindow::on_actItem_Polygon_triggered()
{
    //添加梯形
    QGraphicsPolygonItem *item = new QGraphicsPolygonItem;
    QPolygonF points;
    points.append(QPointF(-40,-40));
    points.append(QPointF(40,-40));
    points.append(QPointF(100,40));
    points.append(QPointF(-100,40));
    item->setPolygon(points);
    item->setFlags(QGraphicsItem::ItemIsSelectable |
                   QGraphicsItem::ItemIsMovable |
                   QGraphicsItem::ItemIsFocusable);
    item->setBrush(QBrush(Qt::green));
    item->setZValue(++frontZ);
    item->setPos(-50 + qrand() % 100,-50 + (qrand() % 100));
    item->setData(ItemId,++seqNum);
    item->setData(ItemDesciption,"梯形");

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}

void MainWindow::on_actItem_Line_triggered()
{
    //创建直线
    QGraphicsLineItem *item = new QGraphicsLineItem(-100,0,100,0);//x,y未图元左上角坐标,中心点为0,0
    item->setFlags(QGraphicsItem::ItemIsSelectable |
                   QGraphicsItem::ItemIsMovable |
                   QGraphicsItem::ItemIsFocusable);
    QPen pen(Qt::red);
    pen.setWidth(3);
    item->setPen(pen);
    item->setZValue(++frontZ);
    item->setPos(-50 + qrand() % 100,-50 + (qrand() % 100));
    item->setData(ItemId,++seqNum);
    item->setData(ItemDesciption,"直线");

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}

void MainWindow::on_actItem_Text_triggered()
{
    //添加文字
    QString str = QInputDialog::getText(this,"输入文字","请输入文字");
    if(str.isEmpty())
    {
        return ;
    }
    QGraphicsTextItem *item = new QGraphicsTextItem(str);
    QFont font = this->font();
    font.setPointSize(20);
    font.setBold(true);
    item->setFont(font);

    item->setFlags(QGraphicsItem::ItemIsSelectable |
                   QGraphicsItem::ItemIsMovable |
                   QGraphicsItem::ItemIsFocusable);
    item->setZValue(++frontZ);
    item->setPos(-50 + qrand() % 100,-50 + (qrand() % 100));
    item->setData(ItemId,++seqNum);
    item->setData(ItemDesciption,"文字");

    scene->addItem(item);
    scene->clearSelection();
    item->setSelected(true);
}
