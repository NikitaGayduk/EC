#ifndef SQLCONNECTION_H
#define SQLCONNECTION_H

#include <QObject>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>

class SqlConnection: public QObject
{
    Q_OBJECT
public:
    SqlConnection(QString,QString);
};

#endif // SQLCONNECTION_H
