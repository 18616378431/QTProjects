#ifndef QMYTHREAD_H
#define QMYTHREAD_H

#include <QObject>
#include <QThread>
#include <QTime>
#include <QMutex>
#include <QWaitCondition>
#include <QMutexLocker>

#include <QDebug>

class ThreadConsumer : public QThread
{
    Q_OBJECT
private:
    bool m_stop = false;//停止
protected:
    void run() Q_DECL_OVERRIDE;//线程事件循环
public:
    ThreadConsumer();
    void stopThread();//结束线程
signals:
    void newValue(int seq,int diceValue);
};

class ThreadProducer : public QThread
{
    Q_OBJECT
private:
    bool m_stop = false;//停止
protected:
    void run() Q_DECL_OVERRIDE;//线程事件循环
public:
    ThreadProducer();
    void stopThread();//结束线程
};

#endif // QMYTHREAD_H
