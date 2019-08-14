#ifndef QDICETHREAD_H
#define QDICETHREAD_H

#include <QObject>
#include <QThread>
#include <QTime>

class QDiceThread : public QThread
{
    Q_OBJECT
private:
    int m_seq = 0;//掷骰子次数序号
    int m_diceValue;//骰子点数
    bool m_paused = true;//暂停
    bool m_stop = false;//停止
protected:
    void run() Q_DECL_OVERRIDE;//线程事件循环
public:
    QDiceThread();
    void diceBegin();//掷骰子
    void dicePause();//暂停
    void stopThread();//结束线程
signals:
    void newValue(int seq,int diceValue);//产生新点数的信号
};

#endif // QDICETHREAD_H
