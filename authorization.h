#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class authorization;
}

class authorization : public QWidget
{
    Q_OBJECT

public:
    explicit authorization(QWidget *parent = nullptr);
    ~authorization();

private slots:
    void on_buttonEnter_clicked();

private:
    Ui::authorization *ui;
    QString userName = nullptr;
    QString password = nullptr;
};

#endif // AUTHORIZATION_H
