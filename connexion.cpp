#include "connexion.h"
#include "QSqlDatabase"
connexion::connexion()
{

}

bool connexion::createConnection(){
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("projet");
    db.setUserName("mohamed");
    db.setPassword("ena123456789");

    if (db.open())
        test=true;
    return test;
}
