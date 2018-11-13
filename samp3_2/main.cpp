//QT容器类 模板
#include <QCoreApplication>
#include <QString>

//order container
#include <QList>
#include <QLinkedList>
#include <QVector>
#include <QStack>
#include <QQueue>

//assoc container
#include <QSet>
#include <QMap>

#include <QListIterator>
#include <QDebug>
#include <QtGlobal>

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    QList<T>
    //[0]容器类
    QList<QString> aList;

    aList.append("Monday");
    aList.append("Tuesday");
    aList.append("Wednesday");

    QString str = aList[0];

    //[1]顺序容器类 QList,QLinkedList,QVector,QStack,QQueue
    QList<QString> list;

    list << "one" << "two" << "three";

    QString str1 = list[1];
    QString str0 = list.at(0);

    list.isEmpty();//empty?true:false
    list.size();//list size

    //[2]QLinkedList same as QList,O(n) same with add and delete
    //UnIndex access data
    //QLinkedList<T>

    //[3]QVector,provide index to access array
    //QVector<T>
    //interface same as QList
    //performance higher than QList,data is step to step

    //[4]QStack LIFO push,pop
    //QStack<T>
    QStack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    while(!stack.isEmpty())
    {
        cout << stack.pop() << endl;
    }

    cout << "=================" << endl;

    //[5]QQueue FIFO enqueue,dequeue
    //QQueue<T>
    QQueue<int> queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    while(!queue.isEmpty())
    {
        cout << queue.dequeue() << endl;
    }

    cout << "=================" << endl;

    //关联容器类 QMap,QMutilMap,QHash,QMutilHash,QSet
    //[1]QSet<T> 内部实现是QHash,顺序不固定,查找值的速度非常快
    QSet<QString> set;

    set << "dog" << "cat" << "tiger";
    //test if contain this value
    if(!set.contains("cat"))
    {
        cout << "set contains cat" << endl;
    }

    cout << "=================" << endl;

    //[2]QMap
    //QMap<key,T> dict,assoc array,key => value,order by key
    //interface insert,remove
    QMap<QString,int> map;

    map["one"] = 1;
    map["two"] = 2;
    map["three"] = 3;

    map.insert("four",4);
    map.remove("two");

    //find value,[] or value()
    int num1 = map["one"];
    int num2 = map.value("two");
    int timeout = map.value("TIMEOUT",30);//for default value


    cout << "=================" << endl;

    //[3]QMutilMap children class of QMap
    //one key to many values
    //QMap::insertMutil(); to support mutil key values
    //derived interface
    //QMutilMap::insert() = QMap::insertMutil()
    //QMutilMap::replace() = QMap::insert();
    //no support for [] operator

    QMultiMap<QString,int> map1,map2,map3;

    map1.insert("plenty",100);
    map1.insert("plenty",2000);//map1.size() = 2
    map2.insert("plenty",5000);//map2.size() = 1
    map3 = map1 + map2;//map3.size() = 3

    //use value() to access the newest key's singal value
    //to get all values of a key assoc,use values(),return QList<T>
    QList<int> values = map1.values("plenty");

    for(int i = 0;i < values.size();i++)
    {
        cout << values.at(i) << endl;
    }

    cout << "=================" << endl;

    //[4]QHash<key,T> find faster
    //faster than QMap
    //QMap ordered,QHash unorderd
    //QMap must serve operator <
    //QHash must serve operator == and global hash function qHash()

    //[5]QMultiHash<Key,T> same as QMultiMap<Key,T>
    //children class of QHash

    //容器类类的迭代
    //java类型迭代器和STL类型迭代器
    //java类型迭代器易于使用切提供高级功能
    //STL类型迭代器效率更高
    //QtGlobal定义的宏foreach用于方便地访问容器里的所有数据

    //java类型迭代器
    //对于每个容器类,都有两个java类型迭代器,一个用于只读操作,一个用于读写操作

    //[1]java迭代器类型总表
    //容器类                           只读迭代器                                  读写迭代器
    //QList<T>,QQueue<T>              QListIterator<T>                          QMutableListIterator<T>
    //QLinkedList<T>                  QLinkedListIterator<T>                    QMutableLinkedListIterator<T>
    //QVector<T>,QStack<T>            QVectorIterator<T>                        QMutableVectorIterator<T>
    //QSet<T>                         QSetIterator<T>                           QMutableSetIterator<T>
    //QMap<Key,T>,QMultiMap<Key,T>    QMapIterator<Key,T>                       QMutableMapIterator<Key,T>
    //QHash<Key,T>,QMultiHash<Key,T>  QHashIterator<Key,T>                      QMutableHashIterator<Key,T>

    //QMap和QHash等关联容器的迭代器用法相同,QList,QLinkedList,QSet等容器类的用法相同
    //QMap QList
    //java类型迭代器的指针不是指向一个数据项,而是在数据项之间
    //遍历访问QList<Qstring>
    QList<QString> list1;

    list1 << "A" << "B" << "C" << "D";
    QListIterator<QString> i(list1);

    while(i.hasNext())
    {
        qDebug() << i.next();
    }
    cout << "===============\n";

    //反向遍历
    QListIterator<QString> i1(list1);

    i1.toBack();
    while(i1.hasPrevious())
    {
        qDebug() << i1.previous();
    }

    cout << "=====================\n";

    //remove,setValue
    QList<int> list2;

    list2 << 1 << 2 << 3 << 4 << 5;

    QMutableListIterator<int> i2(list2);

    while(i2.hasNext())
    {
        if(i2.next() % 2 == 0)
        {
            i2.remove();
        }
    }

    //QMap<Key,T>
    QMap<QString,QString> mapn;

    mapn.insert("Paris","France");
    mapn.insert("New York","USA");
    mapn.insert("Mexico","USA");
    mapn.insert("Moscow","Russia");

    QMutableMapIterator<QString,QString> i3(mapn);

    while(i3.hasNext())
    {
        if(i3.next().key().endsWith("City"))
        {
            i3.remove();
        }
    }

    //findNext,findPrevious (value)
    QMutableMapIterator<QString,QString> i4(mapn);

    while(i4.findNext("USA"))
    {
        i4.remove();
    }

    //STL
    QList<QString> lista;
    lista << "A" << "B" << "C" << "D";
    QList<QString>::const_iterator i5;
    for(i5 = lista.constBegin();i5 != lista.constEnd();i5++)
    {
        qDebug() << *i5;
    }

    //reverse
    QList<QString>::reverse_iterator i6;
    for(i6 = lista.rbegin();i6 != lista.rend();i6++)
    {
        *i6 = i6->toLower();
    }

    //key(),value()
    QMap<int,int> map4;

    QMap<int,int>::const_iterator i7;
    for(i7 = map4.constBegin();i7 != map4.constEnd();i7++)
    {
        qDebug() << i7.key() << ":" << i7.value();
    }

//    const QList<int> sizes = splitter.sizes();
//    QList<int>::const_iterator i8;
//    for(i8 = sizes.begin();i8 != sizes.end();i8++)
//    {
//    }

    //error
    //    QList<int>::const_iterator i8;
    //    for(i8 = splitter.sizes().begin();i8 != splitter.sizes().end();i8++)
    //    {
    //    }


    //foreach
    //foreach(var,container){...}
    //QLinkedList<QString>
    QLinkedList<QString> listn;
    QString strn;
    foreach(strn,listn)
    {
        qDebug() << str;
    }

    QLinkedList<QString> listn1;

    foreach(const QString &str,listn1)
    {
        if(str.isEmpty())
        {
            break;
        }
        qDebug() << str;
    }

    //QMap,QHash
    QMap<QString,int> mapk;
    foreach(const QString &str,mapk.keys())
    {
        qDebug() << str << ":" << mapk.value(str);
    }

    QMultiMap<QString,int> mapl;

    foreach(const QString &str,mapl.uniqueKeys())
    {
        foreach(int i,map.values(str))
        {
            qDebug() << str << ":" << i;
        }
    }






    return a.exec();
}
