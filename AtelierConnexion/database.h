#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
class Database
{
protected:
    QSqlDatabase db;
public:
    Database();
    bool createconnect();
    void closeconnection();
};

#endif // DATABASE_H
