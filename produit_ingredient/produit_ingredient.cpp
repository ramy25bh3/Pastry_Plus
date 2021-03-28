#include "produit_ingredient.h"
#include "ui_produit_ingredient.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QIntValidator>
#include <QPdfWriter>
#include <QPainter>
#include <QPixmap>
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

    QPixmap pix("D:/QT/Awork/produit_ingredient_1/pastry_plus.png");
    int w= ui->logo_P->width();
    int h= ui->logo_P->height();
    ui->logo_P->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
    ui->logo_I->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
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



//*************** METIER ******************************


void Produit_ingredient::on_trier_produit_clicked()
{
    if (ui->nom_P_trie->isChecked())
    {
         ui->afficher_produit->setModel(P.trier_produit(1));
    }
    if (ui->quantite_P_trie->isChecked())
    {
         ui->afficher_produit->setModel(P.trier_produit(2));
    }
    if (ui->prix_P_trie->isChecked())
    {
         ui->afficher_produit->setModel(P.trier_produit(3));
    }


}



void Produit_ingredient::on_trier_ingredient_clicked()
{
    if (ui->nom_I_trie->isChecked())
    {
         ui->afficher_ingredient->setModel(I.trier_ingredient(1));
    }
    if (ui->quantite_I_trie->isChecked())
    {
         ui->afficher_ingredient->setModel(I.trier_ingredient(2));
    }
    if (ui->prix_I_trie->isChecked())
    {
         ui->afficher_ingredient->setModel(I.trier_ingredient(3));
    }
}






void Produit_ingredient::on_exporter_P_clicked()
{
    QString identifiant_P= ui->identifiant_P->text();
    QString nom_P= ui->nom_P->text();
    QString quantite_P= ui->quantite_P->text();
    QString prix_P= ui->prix_P->text();
    QString type_P= ui->type_P->text();
    QString image_P= ui->image_P->text();


        QPixmap logo;
        logo.load("pastry_plus");
        logo.scaled(logo.width()*10, logo.height()*10);

        QString pdf_name= "Produit"+identifiant_P+".pdf";
        QPdfWriter pdf(pdf_name);
        QPainter painter(&pdf);
        painter.drawPixmap(3000,0,logo.width()*20,logo.height()*20,logo);


        painter.setPen(Qt::blue);
        painter.drawText(100,2000,"votre info : ");
        painter.drawText(100,2300,"identifiant du produit : ");
        painter.setPen(Qt::black);
        painter.drawText(2000,2300,identifiant_P);
        painter.setPen(Qt::blue);
        painter.drawText(100,2600,"Nom du produit : ");
        painter.setPen(Qt::black);
        painter.drawText(2000,2600,nom_P);
        painter.setPen(Qt::blue);
        painter.drawText(100,2900,"Quantité du produit : ");
        painter.setPen(Qt::black);
        painter.drawText(2000,2900,quantite_P);
        painter.setPen(Qt::blue);
        painter.drawText(100,3200,"Prix du produit : ");
        painter.setPen(Qt::black);
        painter.drawText(2000,3200,prix_P);
        painter.setPen(Qt::blue);
        painter.drawText(100,3500,"Type du produit : ");
        painter.setPen(Qt::black);
        painter.drawText(2000,3500,type_P);
        painter.setPen(Qt::blue);
        painter.drawText(100,3800,"Image du produit : ");
        painter.setPen(Qt::black);
        painter.drawText(2000,3800,image_P);



        painter.end();
        QMessageBox::information(nullptr, QObject::tr("pdf  "),
                    QObject::tr("Exportation PDF terminer"), QMessageBox::Accepted);


}



void Produit_ingredient::on_exporter_I_clicked()
{
    QString identifiant_I= ui->identifiant_I->text();
    QString nom_I= ui->nom_I->text();
    QString quantite_I= ui->quantite_I->text();
    QString prix_I= ui->prix_I->text();
    QString type_I= ui->type_I->text();
    QString image_I= ui->image_I->text();


        QPixmap logo;
        logo.load("pastry_plus");
        logo.scaled(logo.width()*10, logo.height()*10);

        QString pdf_name= "Ingredient"+identifiant_I+".pdf";
        QPdfWriter pdf(pdf_name);
        QPainter painter(&pdf);
        painter.drawPixmap(3000,0,logo.width()*20,logo.height()*20,logo);


        painter.setPen(Qt::blue);
        painter.drawText(100,2000,"votre info : ");
        painter.drawText(100,2300,"identifiant du ingredient : ");
        painter.setPen(Qt::black);
        painter.drawText(2000,2300,identifiant_I);
        painter.setPen(Qt::blue);
        painter.drawText(100,2600,"Nom du ingredient : ");
        painter.setPen(Qt::black);
        painter.drawText(2000,2600,nom_I);
        painter.setPen(Qt::blue);
        painter.drawText(100,2900,"Quantité du ingredient : ");
        painter.setPen(Qt::black);
        painter.drawText(2000,2900,quantite_I);
        painter.setPen(Qt::blue);
        painter.drawText(100,3200,"Prix du ingredient : ");
        painter.setPen(Qt::black);
        painter.drawText(2000,3200,prix_I);
        painter.setPen(Qt::blue);
        painter.drawText(100,3500,"Type du ingredient : ");
        painter.setPen(Qt::black);
        painter.drawText(2000,3500,type_I);
        painter.setPen(Qt::blue);
        painter.drawText(100,3800,"Image du ingredient : ");
        painter.setPen(Qt::black);
        painter.drawText(2000,3800,image_I);


        painter.end();
        QMessageBox::information(nullptr, QObject::tr("pdf  "),
                    QObject::tr("Exportation PDF terminer"), QMessageBox::Accepted);


}






void Produit_ingredient::on_chercher_produit_clicked()
{

    int identifiant_P_rech= -1;
        identifiant_P_rech= ui->identifiant_P_rech->text().toInt();

    QString identifiant_P_rech2= ui->identifiant_P_rech->text();
    QString type_P_rech= ui->type_P_rech->text();

    ui->afficher_produit->setModel(P.chercher_produit(identifiant_P_rech, type_P_rech, identifiant_P_rech2));

}







