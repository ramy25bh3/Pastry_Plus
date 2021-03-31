#ifndef EVENEMENT_H
#define EVENEMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <vector>


class evenement
{

public:
    evenement();
     evenement(int,QString,int,int,int,QString);


     int getIDCLIENT();
     QString getDESTINATION();
     int getIDEMPLOYEE();
     int getQUANTITE();
     int getPRIXLIVRAISON();
     QString getMETHODE();

     void setIDCLIENT(int);
     void setDESTINATION(QString);
     void setIDEMPLOYEE(int);
     void setQUANTITE(int);
     void setPRIXLIVRAISON(int);
     void setMETHODE(QString);




     bool ajouter_evenement();
     QSqlQueryModel * afficher_evenement();
       QSqlQueryModel * combobox();
     bool supp_evenement(int);
     bool modifier_evenement();

private:
    int IDCLIENT;
    QString DESTINATION;
    int IDEMPLOYEE;
    QString PRODUIT;
    int QUANTITE;
    int PRIXLIVRAISON;
    QString METHODE;


};

#endif // EVENEMENT_H
