#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>

class myThread : public QThread
{
    Q_OBJECT
public:
    explicit myThread(QObject *parent = nullptr);

    void run();



signals:
    void threadisQuit(int val);



public slots:
};

#endif // MYTHREAD_H
