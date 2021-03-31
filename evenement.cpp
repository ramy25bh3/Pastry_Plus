 #include "evenement.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <vector>

#include <QtDebug>
#include <QObject>

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


int evenement::getIDCLIENT(){return IDCLIENT;}
QString evenement::getDESTINATION(){return DESTINATION;}
int evenement::getIDEMPLOYEE(){return IDEMPLOYEE;}
int evenement::getQUANTITE(){return QUANTITE;}
int evenement::getPRIXLIVRAISON(){return PRIXLIVRAISON;}
QString evenement::getMETHODE(){return METHODE;}

void evenement::setIDCLIENT(int IDCLIENT){this->IDCLIENT= IDCLIENT;}
void evenement::setDESTINATION(QString DESTINATION){this->DESTINATION= DESTINATION;}
void evenement::setIDEMPLOYEE(int IDEMPLOYEE){this->IDEMPLOYEE= IDEMPLOYEE;}
void evenement::setQUANTITE(int QUANTITE){this->QUANTITE= QUANTITE;}
void evenement::setPRIXLIVRAISON(int PRIXLIVRAISON){this->PRIXLIVRAISON= PRIXLIVRAISON;}
void evenement::setMETHODE(QString METHODE){this->METHODE= METHODE;}





bool evenement::ajouter_evenement()
{
QSqlQuery query;




query.prepare("insert into EVENEMENT values(:IDCLIENT1,:DESTINATION,:IDEMPLOYEE1,:QUANTITE1,:PRIXLIVRAISON1,:METHODE)");
query.bindValue(":IDCLIENT",IDCLIENT);
query.bindValue(":DESTINATION",DESTINATION);
query.bindValue(":IDEMPLOYEE",IDEMPLOYEE);
query.bindValue(":QUANTITE",QUANTITE);
query.bindValue(":PRIXLIVRAISON",PRIXLIVRAISON);
query.bindValue(":METHODE",METHODE);






return query.exec();

}

QSqlQueryModel * evenement::afficher_evenement(){

    QSqlQueryModel * modal=new QSqlQueryModel();
    modal->setQuery("SELECT * FROM EQUIPEMENT");

    return modal;

}


  bool evenement::modifier_evenement()
  {

      QSqlQuery query;


      query.prepare("update EVENEMENT set IDCLIENT=:IDCLIENT1,DESTINATION=:DESTINATION1,IDEMPLOYEE=:IDEMPLOYEE1,QUANTITE=:QUANTITE1,PRIXLIVRAISON=:PRIXLIVRAISON1,METHODE=:METHODE1 where IDCLIENT=:IDCLIENT1");
      query.bindValue(":IDCLIENT1",IDCLIENT);
      query.bindValue(":DESTINATION",DESTINATION);
      query.bindValue(":IDEMPLOYEE",IDEMPLOYEE);
      query.bindValue(":QUANTITE",QUANTITE);
      query.bindValue(":PRIXLIVRAISON",PRIXLIVRAISON);
      query.bindValue(":METHODE",METHODE);

     return    query.exec();


  }


  bool evenement::supp_evenement(int IDCLIENT1)
  {

      QSqlQuery query;

      query.prepare("Delete from EVENEMENT  where IDCLIENT =:IDCLIENT1");
      query.bindValue(":IDCLIENT",IDCLIENT1);
      return query.exec();

  }


  QSqlQueryModel * evenement::combobox()
  {
      QSqlQueryModel * model = new QSqlQueryModel();


      model->setQuery("select IDCLIENT from EVENEMENT");


      return model;
  }

