#include "mythread.h"
#include <QDebug>
#include <QThread>


myThread::myThread(QObject *parent) : QThread(parent)
{

}

void myThread::run()
{
//    for (int i; i < 100000; ++i)
//    {
//        QThread::sleep(1);
//        qDebug() <<i;
//    }


    int i;
    for (i= 0; i < 5; ++i)
    {
        QThread::sleep(1);
        qDebug() <<"Data processing";
    }
    emit threadisQuit(i);
}
