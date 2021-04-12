#include "ticket.h"

ticket::ticket()
{

}





ticket::ticket(QString s1,QString s2,QString s3,QString x,QString s4){

    id=s1;
    type=s2;
    prix=s3;
    heure=x;
    date=s4;


}


bool ticket::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO TICKET VALUES (:id,:type,:prix,:heure,:date)");

    query.bindValue(":id", id);

    query.bindValue(":type",type);
    query.bindValue(":duree",prix);
    query.bindValue(":total",heure);
    query.bindValue(":panne",date);

    return    query.exec();

}

bool ticket::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE TICKET SET  TYPE=:type, PRIX=:prix, HEURE=:heure ,DATE=:date"
                  " where ID= :id");
    query.bindValue(":id", selected);

    query.bindValue(":type",type);
    query.bindValue(":duree",prix);
    query.bindValue(":total",heure);
    query.bindValue(":panne",date);

    return    query.exec();

}

 QSqlQueryModel * ticket::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM TICKET");

     return modal;

 }

 bool ticket::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from TICKET where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }
