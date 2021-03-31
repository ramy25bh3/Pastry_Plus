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

evenement::evenement(int IDCLIENT1,QString DESTINATION1,int IDEMPLOYEE1,int QUANTITE1,int PRIXLIVRAISON1,QString METHODE1,QString PRODUIT1)
{
    IDCLIENT=IDCLIENT1;
    DESTINATION=DESTINATION1;
    IDEMPLOYEE=IDEMPLOYEE1;
    PRODUIT=PRODUIT1;
    QUANTITE=QUANTITE1;
    PRIXLIVRAISON=PRIXLIVRAISON1;
    METHODE=METHODE1;
    PRODUIT=PRODUIT1;

}


int evenement::getIDCLIENT(){return IDCLIENT;}
QString evenement::getDESTINATION(){return DESTINATION;}
int evenement::getIDEMPLOYEE(){return IDEMPLOYEE;}
int evenement::getQUANTITE(){return QUANTITE;}
int evenement::getPRIXLIVRAISON(){return PRIXLIVRAISON;}
QString evenement::getMETHODE(){return METHODE;}
QString evenement::getPRODUIT(){return PRODUIT;}

void evenement::setIDCLIENT(int IDCLIENT){this->IDCLIENT= IDCLIENT;}
void evenement::setDESTINATION(QString DESTINATION){this->DESTINATION= DESTINATION;}
void evenement::setIDEMPLOYEE(int IDEMPLOYEE){this->IDEMPLOYEE= IDEMPLOYEE;}
void evenement::setQUANTITE(int QUANTITE){this->QUANTITE= QUANTITE;}
void evenement::setPRIXLIVRAISON(int PRIXLIVRAISON){this->PRIXLIVRAISON= PRIXLIVRAISON;}
void evenement::setMETHODE(QString METHODE){this->METHODE= METHODE;}
void evenement::setPRODUIT(QString PRODUIT){this->PRODUIT= PRODUIT;}





bool evenement::ajouter_evenement()
{
    QString evenement_IDCLIENT= QString::number(IDCLIENT);
    QString evenement_IDEMPLOYEE= QString::number(IDEMPLOYEE);
    QString evenement3_QUANTITE= QString::number(QUANTITE);
    QString evenement4_PRIXLIVRAISON= QString::number(PRIXLIVRAISON);
QSqlQuery query;




query.prepare("insert into EVENEMENT (IDCLIENT, DESTINATION, IDEMPLOYEE, QUANTITE, PRIXLIVRAISON, METHODE,PRODUIT)"
              " values(:evenement_IDCLIENT,:DESTINATION,:evenement_IDEMPLOYEE,:evenement3_QUANTITE,:evenement4_PRIXLIVRAISON,:METHODE,:PRODUIT)");
query.bindValue(0,evenement_IDCLIENT);
query.bindValue(1,DESTINATION);
query.bindValue(2,evenement_IDEMPLOYEE);
query.bindValue(3,evenement3_QUANTITE);
query.bindValue(4,evenement4_PRIXLIVRAISON);
query.bindValue(5,METHODE);
query.bindValue(6,PRODUIT);








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


      query.prepare("update EVENEMENT set IDCLIENT=:IDCLIENT1,DESTINATION=:DESTINATION1,IDEMPLOYEE=:IDEMPLOYEE1,QUANTITE=:QUANTITE1,PRIXLIVRAISON=:PRIXLIVRAISON1,METHODE=:METHODE1,PRODUIT=:PRODUIT1 where IDCLIENT=:IDCLIENT1");
      query.bindValue(":IDCLIENT1",IDCLIENT);
      query.bindValue(":DESTINATION",DESTINATION);
      query.bindValue(":IDEMPLOYEE",IDEMPLOYEE);
      query.bindValue(":QUANTITE",QUANTITE);
      query.bindValue(":PRIXLIVRAISON",PRIXLIVRAISON);
      query.bindValue(":METHODE",METHODE);
      query.bindValue(":METHODE",PRODUIT);

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

