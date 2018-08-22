#include "authorization.h"
#include "ui_authorization.h"

authorization::authorization(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::authorization)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/images/locked.png"));
}

authorization::~authorization()
{
    delete ui;
}
