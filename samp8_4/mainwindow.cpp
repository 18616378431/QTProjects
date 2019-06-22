#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGraphicsItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    labViewCord = new QLabel("View 坐标:");
    labViewCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labViewCord);

    labSceneCord = new QLabel("Scene 坐标:");
    labSceneCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labSceneCord);

    labItemCord = new QLabel("Item 坐标:");
    labItemCord->setMinimumWidth(150);
    ui->statusBar->addWidget(labItemCord);

    ui->view->setCursor(Qt::CrossCursor);
    ui->view->setMouseTracking(true);
    ui->view->setDragMode(QGraphicsView::RubberBandDrag);

    QObject::connect(ui->view,SIGNAL(mouseMovePoint(QPoint)),
                     this,SLOT(on_mouseMovePoint(QPoint)));
    QObject::connect(ui->view,SIGNAL(mouseClicked(QPoint)),
                     this,SLOT(on_mouseClicked(QPoint)));

    iniGraphicsSystem();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mouseMovePoint(QPoint point)
{
    //鼠标移动事件,point是GraphicsView坐标,物理坐标
    labViewCord->setText(QString::asprintf("View 坐标:%d %d",point.x(),point.y()));
    QPointF pointScene = ui->view->mapToScene(point);//转换到Scene坐标
    labSceneCord->setText(QString::asprintf("Scene 坐标:%f %f",pointScene.x(),pointScene.y()));
}

void MainWindow::on_mouseClicked(QPoint point)
{
    //鼠标单击事件
    QPointF pointScene = ui->view->mapToScene(point);//转换到Scene坐标
    QGraphicsItem *item = NULL;
    item = scene->itemAt(pointScene,ui->view->transform());//获取光标下的图形项
    if(item != NULL)//有图形项
    {
        QPointF pointItem =item->mapFromScene(pointScene);//图形项局部坐标
        labItemCord->setText(QString::asprintf("Item 坐标:%.0f %.0f",pointItem.x(),pointItem.y()));
    }
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event);

    //窗口变化大小事件
    ui->labViewSize->setText(QString::asprintf("Graphics View 坐标:,左上角总是(0,0),宽度=%d,高度=%d",
                                               ui->view->width(),ui->view->height()));
    QRectF rectF = ui->view->sceneRect();//Scene矩形区
    ui->labSceneRect->setText(QString::asprintf("QGraphicsView::SceneRect=(Left,Top,Width,Height)=%.0f,%.0f,%.0f,%.0f",
                                                rectF.left(),rectF.top(),rectF.width(),rectF.height()));
}

void MainWindow::iniGraphicsSystem()
{
    //构造GraphicsView各项
    QRectF rect(-200,-100,400,200);
    scene = new QGraphicsScene(rect);//scene逻辑坐标系定义
    ui->view->setScene(scene);

    //画一个矩形,大小等于场景
    QGraphicsRectItem *item = new QGraphicsRectItem(rect);
    item->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsFocusable);//设置flags

    QPen pen;
    pen.setWidth(2);
    item->setPen(pen);
    scene->addItem(item);

    //画一个位于场景中心的椭圆,测试局部坐标
    QGraphicsEllipseItem *item1 = new QGraphicsEllipseItem(-100,-50,200,100);
    item1->setPos(0,0);
    item1->setBrush(QBrush(Qt::blue));
    item1->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable |
                    QGraphicsItem::ItemIsFocusable);
    scene->addItem(item1);

    //画一个圆,中心位于场景边缘
    QGraphicsEllipseItem *item2 = new QGraphicsEllipseItem(-50,-50,100,100);
    item2->setPos(rect.right(),rect.bottom());
    item2->setBrush(QBrush(Qt::red));
    item2->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable |
                    QGraphicsItem::ItemIsFocusable);
    scene->addItem(item2);

    scene->clearSelection();
}
