#include "sqlconnection.h"

SqlConnection::SqlConnection(QString userName, QString password)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("EC");
    db.setUserName(userName);
    db.setPassword(password);
    if(!db.open()){qDebug()<<db.lastError().text();}
}
