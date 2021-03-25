#include "produit_ingredient.h"
#include "ui_produit_ingredient.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QIntValidator>
#include "produit.h"
#include "ingredient.h"

Produit_ingredient::Produit_ingredient(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Produit_ingredient)
{
    ui->setupUi(this);
    ui->identifiant_P->setValidator(new QIntValidator(0,99999999,this));
    ui->afficher_produit->setModel(P.afficher_produit());

    ui->identifiant_I->setValidator(new QIntValidator(0,99999999,this));
    ui->afficher_ingredient->setModel(I.afficher_ingredient());
}

Produit_ingredient::~Produit_ingredient()
{
    delete ui;
}



//************************* Produit ********************************


void Produit_ingredient::on_ajouter_produit_clicked()
{
    int identifiant_P= ui->identifiant_P->text().toInt();
    QString nom_P= ui->nom_P->text();
    int quantite_P= ui->quantite_P->text().toInt();
    float prix_P= ui->prix_P->text().toInt();
    QString type_P= ui->type_P->text();
    QString image_P= ui->image_P->text();

    Produit P(identifiant_P, nom_P, quantite_P, prix_P, type_P, image_P);

    bool test= P.ajouter_produit();
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("Ajout avec succées");
        ui->afficher_produit->setModel(P.afficher_produit());
        }
    else
        msgBox.setText("Echec d'ajout");

    msgBox.exec();
}



void Produit_ingredient::on_supprimer_produit_clicked()
{
    Produit P1;
    P1.setidentifiant_P(ui->identifiant_P_supp->text().toInt());

    bool test=P1.supprimer_produit(P1.getidentifiant_P());
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("Suppression avec succées");
        ui->afficher_produit->setModel(P.afficher_produit());
        }
    else
        msgBox.setText("Echec de suppression");

    msgBox.exec();
}

void Produit_ingredient::on_modifier_produit_clicked()
{
    int identifiant_P= ui->identifiant_P_modif->text().toInt();
    QString nom_P= ui->nom_P_modif->text();
    int quantite_P= ui->quantite_P_modif->text().toInt();
    float prix_P= ui->prix_P_modif->text().toInt();
    QString type_P= ui->type_P_modif->text();
    QString image_P= ui->image_P_modif->text();

    Produit P(identifiant_P, nom_P, quantite_P, prix_P, type_P, image_P);

    bool test=P.modifier_produit();
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("Modifier avec succées");
        ui->afficher_produit->setModel(P.afficher_produit());
        }
    else
        msgBox.setText("Echec de modification");

    msgBox.exec();
}



//************************* INGREDIENT ********************************



void Produit_ingredient::on_ajouter_ingredient_clicked()
{
    int identifiant_I= ui->identifiant_I->text().toInt();
    QString nom_I= ui->nom_I->text();
    int quantite_I= ui->quantite_I->text().toInt();
    float prix_I= ui->prix_I->text().toInt();
    QString type_I= ui->type_I->text();
    QString image_I= ui->image_I->text();

    Ingredient I(identifiant_I, nom_I, quantite_I, prix_I, type_I, image_I);

    bool test= I.ajouter_ingredient();
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("Ajout avec succées");
        ui->afficher_ingredient->setModel(I.afficher_ingredient());
        }
    else
        msgBox.setText("Echec d'ajout");

    msgBox.exec();
}



void Produit_ingredient::on_supprimer_ingredient_clicked()
{
    Ingredient I1;
    I1.setidentifiant_I(ui->identifiant_I_supp->text().toInt());

    bool test=I1.supprimer_ingredient(I1.getidentifiant_I());
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("Suppression avec succées");
        ui->afficher_ingredient->setModel(I.afficher_ingredient());
        }
    else
        msgBox.setText("Echec de suppression");

    msgBox.exec();
}



void Produit_ingredient::on_modifier_ingredient_clicked()
{
    int identifiant_I= ui->identifiant_I_modif->text().toInt();
    QString nom_I= ui->nom_I_modif->text();
    int quantite_I= ui->quantite_I_modif->text().toInt();
    float prix_I= ui->prix_I_modif->text().toInt();
    QString type_I= ui->type_I_modif->text();
    QString image_I= ui->image_I_modif->text();

    Ingredient I(identifiant_I, nom_I, quantite_I, prix_I, type_I, image_I);

    bool test=I.modifier_ingredient();
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("Modifier avec succées");
        ui->afficher_ingredient->setModel(I.afficher_ingredient());
        }
    else
        msgBox.setText("Echec de modification");

    msgBox.exec();
}
