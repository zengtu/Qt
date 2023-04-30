#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPushButton *btn = new QPushButton(this);
    btn->setText("cilik me");
    btn->move(50,50);

    connect(btn, &QPushButton::clicked, this, &Widget::onclickbtn);

    connect(&thread, &myThread::threadisQuit, this, &Widget::threadQuit);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::onclickbtn()
{
    thread.start();
}

void Widget::threadQuit(int value)
{
//    Q_UNUSED(value);
    qDebug() << "value = "<< value;
    thread.quit();

    thread.wait();
}
