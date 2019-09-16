#include "qmydisplaydevice.h"

QmyDisplayDevice::QmyDisplayDevice(QXYSeries *series,qint64 pointsCount,QObject *parent) :
    QIODevice(parent)
{
    m_series = series;
    range = pointsCount;
}

qint64 QmyDisplayDevice::readData(char *data, qint64 maxSize)
{
    //流的读操作,不处理
    Q_UNUSED(data)
    Q_UNUSED(maxSize)
    return -1;
}

qint64 QmyDisplayDevice::writeData(const char *data, qint64 maxSize)
{
    //写操作,读取数据块的数据,更新到序列
    QVector<QPointF> oldPoint = m_series->pointsVector();
    QVector<QPointF> points ;//临时

    if(oldPoint.count() < range)
    {
        //m_series序列的数据点未满4000
        points = m_series->pointsVector();
    }
    else
    {
        //将原来maxSize至4000的数据点前移
        for(int i = maxSize;i < oldPoint.count();i++)
        {
            points.append(QPointF(i - maxSize,oldPoint.at(i).y()));
        }
    }

    qint64 size = points.count();
    for(int k = 0;k < maxSize;k++)//数据块内的数据填充序列的尾部
    {
        points.append(QPointF(k + size,(qint8)data[k]));
    }

    m_series->replace(points);
    emit updateBlockSize(maxSize);

    return maxSize;
}
