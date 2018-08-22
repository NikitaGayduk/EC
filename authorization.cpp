#include "authorization.h"
#include "ui_authorization.h"

authorization::authorization(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::authorization)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/images/locked.png"));
}


//Деструктор

authorization::~authorization()
{
    delete ui;
}


//По нажатию кнопки происходит авторизация

void authorization::on_buttonEnter_clicked()
{
    this->userName = ui->lineEditLogin->text();
    this->password = ui->lineEditPassword->text();
    qDebug()<<this->userName<<this->password;
}
