#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <vector>

class fournisseur
{
public:
    fournisseur();
    fournisseur(int,QString,int,QString,QDateTime,QString,QString);
     bool ajouter_fournisseur();
     QSqlQueryModel * afficher();
       QSqlQueryModel * combobox();
     bool supp_fournisseur(int);
     bool modifier_fournisseur();

private:
    int id_f;
    QString nom_soc;
    int tel_f;
    QString email_f;
    QString date_add_f;
    QString specialite_f;
    QString adresse_f;

};

#endif // FOURNISSEUR_H
