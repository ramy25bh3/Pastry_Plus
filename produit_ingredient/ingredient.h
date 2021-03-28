#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Ingredient
{
public:
    Ingredient();
    Ingredient(int, QString, int, float, QString, QString);

    int getidentifiant_I();
    QString getnom_I();
    int getquantite_I();
    float getprix_I();
    QString gettype_I();
    QString getimage_I();

    void setidentifiant_I(int);
    void setnom_I(QString);
    void setquantite_I(int);
    void setprix_I(float);
    void settype_I(QString);
    void setimage_I(QString);

    bool ajouter_ingredient();
    QSqlQueryModel* afficher_ingredient();
    bool supprimer_ingredient(int);
    bool modifier_ingredient();

    QSqlQueryModel * trier_ingredient(int);

private:
    int identifiant_I, quantite_I;
    float prix_I;
    QString nom_I, type_I, image_I;
};

#endif // INGREDIENT_H
