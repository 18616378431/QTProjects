#ifndef QMYTHREAD_H
#define QMYTHREAD_H

#include <QObject>
#include <QThread>
#include <QSemaphore>

class ThreadDAQ:public QThread
{
    Q_OBJECT
private:
    bool m_stop = false;//停止线程
protected:
    void run() Q_DECL_OVERRIDE;
public:
    ThreadDAQ();
    void stopThread();
};

class ThreadShow:public QThread
{
    Q_OBJECT
private:
    bool m_stop = false;//停止线程
protected:
    void run() Q_DECL_OVERRIDE;
public:
    ThreadShow();
    void stopThread();
signals:
    void newValue(int *data,int count,int seq);
};

#endif // QMYTHREAD_H
