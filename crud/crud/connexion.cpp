#include "connexion.h"
#include "QSqlDatabase"
connexion::connexion()
{

}

bool connexion::createConnection()
{
    bool test=false;
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A");
    db.setUserName("Cyrine");
    db.setPassword("esprit18");

    if(db.open())
{
   test=true;

}
    return test;

}
QSqlDatabase connexion::get_db()
{
    return db;
}
