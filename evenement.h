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
     bool ajouter_evenement();
     QSqlQueryModel * afficher();
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
