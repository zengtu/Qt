#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mythread.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    myThread thread;
private:
    Ui::Widget *ui;

public slots:
    void onclickbtn();
    void threadQuit(int value);
};

#endif // WIDGET_H
