#include "database.h"
#include <QDebug>
database::database()
{

}
    bool database::createconnect()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A");
    db.setUserName("Jacer");
    db.setPassword("esprit18");

    if (db.open())
        test=true;
else

        qDebug()<< db.lastError().text();

     return  test;
}
