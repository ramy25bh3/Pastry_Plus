#include "connection.h"
#include "QSqlDatabase"
//test connexion tuto
Connection::Connection()
{

}

bool Connection::createConnection()
{
   bool test=false;
   QSqlDatabase db =QSqlDatabase::addDatabase("QODBC");
   db.setDatabaseName("projet_oracle");
   db.setUserName("system");
   db.setPassword("system");

   if(db.open())
       test=true;
   return test;

}
