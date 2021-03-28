#ifndef PRODUIT_H
#define PRODUIT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Produit
{
public:
    Produit();
    Produit(int, QString, int, float, QString, QString);

    int getidentifiant_P();
    QString getnom_P();
    int getquantite_P();
    float getprix_P();
    QString gettype_P();
    QString getimage_P();

    void setidentifiant_P(int);
    void setnom_P(QString);
    void setquantite_P(int);
    void setprix_P(float);
    void settype_P(QString);
    void setimage_p(QString);

    bool ajouter_produit();
    QSqlQueryModel* afficher_produit();
    bool supprimer_produit(int);
    bool modifier_produit();

    QSqlQueryModel * trier_produit(int);
    QSqlQueryModel * chercher_produit(int, QString, QString);

private:
    int identifiant_P, quantite_P;
    float prix_P;
    QString nom_P, type_P, image_P;

};

#endif // PRODUIT_H
