#include "qmythread.h"

const int BufferSize = 8;
int buffer1[BufferSize];
int buffer2[BufferSize];

int curBuf = 1;//当前正在写入的buffer
int bufNo = 0;//采集的缓冲区序号
quint8 counter = 0;//数据生成器

QSemaphore emptyBufs(2);//信号量,空的缓冲区个数
QSemaphore fullBufs;//满的缓冲区数量,初始资源为0

ThreadDAQ::ThreadDAQ()
{

}

void ThreadDAQ::run()
{
    m_stop = false;//启动线程时令m_stop = false
    bufNo = 0;//缓冲区信号
    curBuf = 1;//当前写入的缓冲区
    counter = 0;//数据生成器
    int n = emptyBufs.available();

    if(n < 2)//保证线程启动时空缓冲区中有效信号量个数为2
    {
        emptyBufs.release(2 - n);
    }

    while(!m_stop)
    {
        emptyBufs.acquire();//获取一个空缓冲区,占用空缓冲区一个资源
        for(int i = 0;i < BufferSize;i++)//产生一个缓冲区的数据
        {
            if(curBuf == 1)
            {
                buffer1[i] = counter;
            }
            else
            {
                buffer2[i] = counter;
            }
            counter++;
            msleep(50);
        }
        bufNo++;//缓冲区序号
        if(curBuf == 1)
        {
            curBuf = 2;
        }
        else
        {
            curBuf = 1;
        }
        fullBufs.release();//有了一个满的缓冲区,满缓冲区添加一个有效资源
    }
}

void ThreadDAQ::stopThread()
{
    m_stop = true;
}

ThreadShow::ThreadShow()
{

}

void ThreadShow::run()
{
    m_stop = false;
    int n = fullBufs.available();

    if(n > 0)
    {
        fullBufs.acquire(n);//将满缓冲区信号量的初始资源个数设置为0
    }

    while(!m_stop)
    {
        fullBufs.acquire();//等待有满缓冲区,available = 0时阻塞
        int bufferData[BufferSize];
        int seq = bufNo;

        if(curBuf == 1)//当前写入的缓冲区为1,则满缓冲区为2
        {
            //拷贝缓冲区内容
            for(int i = 0;i < BufferSize;i++)
            {
                bufferData[i] = buffer2[i];
            }
        }
        else
        {
            for(int i = 0;i < BufferSize;i++)
            {
                bufferData[i] = buffer1[i];
            }
        }
        emptyBufs.release();//释放一个空缓冲区
        emit newValue(bufferData,BufferSize,seq);
    }
}

void ThreadShow::stopThread()
{
    m_stop = true;
}
