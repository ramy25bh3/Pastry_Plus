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
     evenement(int,QString,int,int,int,QString,QString);


     int getIDCLIENT();
     QString getDESTINATION();
     int getIDEMPLOYEE();
     int getQUANTITE();
     int getPRIXLIVRAISON();
     QString getMETHODE();
     QString getPRODUIT();


     void setIDCLIENT(int);
     void setDESTINATION(QString);
     void setIDEMPLOYEE(int);
     void setQUANTITE(int);
     void setPRIXLIVRAISON(int);
     void setMETHODE(QString);
     void setPRODUIT(QString);





     bool ajouter_evenement();
     QSqlQueryModel * afficher_evenement();
       QSqlQueryModel * combobox();
     bool supp_evenement(int);
     bool modifier_evenement();

private:
    int IDCLIENT;
    QString DESTINATION;
    int IDEMPLOYEE;
    int QUANTITE;
    int PRIXLIVRAISON;
    QString METHODE;
    QString PRODUIT;


};

#endif // EVENEMENT_H
