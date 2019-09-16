#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    appPath = QCoreApplication::applicationDirPath();
    player = new QSoundEffect();
    player->setLoopCount(3);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::defense(QString weapon)
{
    QUrl url = QUrl::fromLocalFile(appPath + "/sound/" + weapon);

    qDebug() << url.toString();

    player->setSource(url);
    player->play();
}

void Widget::attack(QString weapon)
{
    QString fileName = appPath + "/sound/" + weapon;

    qDebug() << fileName;

    QSound::play(fileName);
}

void Widget::on_btnAK47_clicked()
{
    defense("Ak7.wav");
}

void Widget::on_btnFire_clicked()
{
    attack("fire.wav");
}
