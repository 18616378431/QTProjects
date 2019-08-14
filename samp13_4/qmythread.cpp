#include "qmythread.h"

QMutex mutex;
QWaitCondition newdataAvailable;

int seq = 0;//序号
int diceValue;

ThreadConsumer::ThreadConsumer()
{

}

void ThreadConsumer::stopThread()
{
    //停止线程
    QMutexLocker locker(&mutex);
//    mutex.unlock();
    m_stop = true;
}

void ThreadConsumer::run()
{
    //线程任务
    m_stop = false;//启动线程时讲停止标记置为false
    seq = 0;//掷骰子次数
    qsrand(QTime::currentTime().msec());//随机数初始化,qsrand线程安全
    while(!m_stop)
    {
        qDebug() << "Consumer::" << __FUNCTION__ << "|" << m_stop << "|" << seq;

        //1.互斥量
        mutex.lock();
        newdataAvailable.wait(&mutex);
        emit newValue(seq,diceValue);
        mutex.unlock();

//        msleep(500);//线程休眠500ms
    }
    quit();//退出线程的事件循环，exit(0)
}

ThreadProducer::ThreadProducer()
{

}

void ThreadProducer::stopThread()
{
    //停止线程
    QMutexLocker locker(&mutex);
    m_stop = true;
}

void ThreadProducer::run()
{
    //线程任务
    m_stop = false;//启动线程时讲停止标记置为false
    seq = 0;//掷骰子次数
    qsrand(QTime::currentTime().msec());//随机数初始化,qsrand线程安全
    while(!m_stop)
    {
        qDebug() << "Producer::" << __FUNCTION__ << "|" << m_stop << "|" << seq;

        mutex.lock();
        diceValue = qrand();//获取随机数
        diceValue = (diceValue % 6) + 1;
        seq++;
        mutex.unlock();
        newdataAvailable.wakeAll();//唤醒所有线程

        msleep(500);//线程休眠500ms
    }
    quit();//退出线程的事件循环，exit(0)
}

