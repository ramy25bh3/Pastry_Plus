 #include "evenement.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <vector>

evenement::evenement()
{

}

evenement::evenement(int IDCLIENT1,QString DESTINATION1,int IDEMPLOYEE1,int QUANTITE1,int PRIXLIVRAISON1,QString METHODE1)
{
    IDCLIENT=IDCLIENT1;
    DESTINATION=DESTINATION1;
    IDEMPLOYEE=IDEMPLOYEE1;
    QUANTITE=QUANTITE1;
    PRIXLIVRAISON=PRIXLIVRAISON1;
    METHODE=METHODE1;

}



bool evenement::ajouter_evenement()
{
QSqlQuery query;

QString IDCLIENT1 = QString::number(IDCLIENT);
QString IDEMPLOYEE1 = QString::number(IDEMPLOYEE);
QString QUANTITE1= QString::number(QUANTITE);
QString PRIXLIVRAISON1= QString::number(PRIXLIVRAISON);


query.prepare("insert into EVENEMENT(IDCLIENT,DESTINATION,IDEMPLOYEE,QUANTITE,PRIXLIVRAISON,METHODE) values(:IDCLIENT1,:DESTINATION,:IDEMPLOYEE1,:QUANTITE1,:PRIXLIVRAISON1,:METHODE)");
query.bindValue(":IDCLIENT1",IDCLIENT1);
query.bindValue(":DESTINATION",DESTINATION);
query.bindValue(":IDEMPLOYEE",IDEMPLOYEE);
query.bindValue(":QUANTITE",QUANTITE);
query.bindValue(":PRIXLIVRAISON",PRIXLIVRAISON);
query.bindValue(":METHODE",METHODE);






return query.exec();

}

QSqlQueryModel * evenement::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from clients");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("IDCLIENT"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("DESTINATION"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("IDEMPLOYEE"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("QUANTITE"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("PRIXLIVRAISON"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("METHODE"));

    return model;

}


  bool evenement::modifier_evenement()
  {

      QSqlQuery query;
      QString IDCLIENT1 = QString::number(IDCLIENT);
      QString IDEMPLOYEE1 = QString::number(IDEMPLOYEE);
      QString QUANTITE1 = QString::number(QUANTITE);
      QString PRIXLIVRAISON1 = QString::number(PRIXLIVRAISON);

      query.prepare("update EVENEMENT set IDCLIENT=:IDCLIENT1,DESTINATION=:DESTINATION,IDEMPLOYEE=:IDEMPLOYEE1,QUANTITE=:QUANTITE1,PRIXLIVRAISON=:PRIXLIVRAISON1,METHODE=:METHODE where IDCLIENT=:IDCLIENT1");
      query.bindValue(":IDCLIENT1",IDCLIENT1);
      query.bindValue(":DESTINATION",DESTINATION);
      query.bindValue(":IDEMPLOYEE1",IDEMPLOYEE1);
      query.bindValue(":QUANTITE1",QUANTITE1);
      query.bindValue(":PRIXLIVRAISON1",PRIXLIVRAISON1);
      query.bindValue(":METHODE",METHODE);




  }


  bool evenement::supp_evenement(int IDCLIENT)
  {

      QSqlQuery query;
      QString IDCLIENT1 = QString::number(IDCLIENT);
      query.prepare("Delete from EVENEMENT  where IDCLIENT =:IDCLIENT1");
      query.bindValue(":IDCLIENT1",IDCLIENT1);
      return query.exec();

  }


  QSqlQueryModel * evenement::combobox()
  {
      QSqlQueryModel * model = new QSqlQueryModel();
      //QString acc_ = QString::number(account);
      //QString perm=  QString::number(permissions);

      model->setQuery("select IDCLIENT from evenement");


      return model;
  }

