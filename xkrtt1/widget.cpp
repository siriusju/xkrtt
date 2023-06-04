#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->exitButton, &QPushButton::clicked, this, &Widget::on_exitButton_clicked);
    connect(ui->helpButton, &QPushButton::clicked, [this](){
        QMessageBox::information(this,"help","w代表跳跃，s代表下降，躲避bug，吃到ac，尽你所能得到更高的分数吧！");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_exitButton_clicked()
{
    this->close();
}
