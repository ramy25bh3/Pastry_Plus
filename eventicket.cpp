#include "eventicket.h"
#include "ui_eventicket.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QIntValidator>
#include <QPdfWriter>
#include <QPainter>
#include <QPixmap>
#include "evenement.h"

eventicket::eventicket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::eventicket)
{
    ui->setupUi(this);
}

eventicket::~eventicket()
{
    delete ui;
}




void eventicket::on_ajouter_botton_clicked()
{
    int IDCLIENT1= ui->IDCLIENT1->text().toInt();
        QString DESTINATION= ui->DESTINATION->text();
        int IDEMPLOYEE1= ui->IDEMPLOYEE1->text().toInt();
        int QUANTITE1= ui->QUANTITE1->text().toInt();
        int PRIXLIVRAISON1= ui->PRIXLIVRAISON1->text().toInt();
        QString METHODE= ui->METHODE->text();

        evenement E(IDCLIENT1,DESTINATION,IDEMPLOYEE1,QUANTITE1,PRIXLIVRAISON1,METHODE);

        bool test= E.ajouter_evenement();
        QMessageBox msgBox;
        if(test)
           {
            msgBox.setText("Ajout avec succées");
            //ui->afficher_evenement->setModel(E.afficher_evenement());
            }
        else
            msgBox.setText("Echec d'ajout");

        msgBox.exec();

}


void eventicket::on_modifier_botton_clicked()
{




    int IDCLIENT1= ui->IDCLIENT_modif->text().toInt();
        QString DESTINATION= ui->DESTINATION_modif->text();
        int IDEMPLOYEE1= ui->IDEMPLOYEE_modif->text().toInt();
        int QUANTITE1= ui->QUANTITE_modif->text().toInt();
        int PRIXLIVRAISON1= ui->PRIXLIVRAISON_modif->text().toInt();
        QString METHODE= ui->METHODE_modif->text();

        evenement E (IDCLIENT1,DESTINATION,IDEMPLOYEE1,QUANTITE1,PRIXLIVRAISON1,METHODE);

        bool test=E.modifier_evenement();
        QMessageBox msgBox;
        if(test)
           {
            msgBox.setText("Modifier avec succées");
            //ui->afficher_produit->setModel(P.afficher_produit());
            }
        else
            msgBox.setText("Echec de modification");

        msgBox.exec();



}



void eventicket::on_supprimer_botton_clicked()
{


    evenement E;
        E.setIDCLIENT(ui->IDCLIENT1->text().toInt());

        bool test=E.supp_evenement(E.getIDCLIENT());
        QMessageBox msgBox;
        if(test)
           {
            msgBox.setText("Suppression avec succées");
            //ui->afficher_evenement->setModel(E.afficher_evenement());
            }
        else
            msgBox.setText("Echec de suppression");

        msgBox.exec();


}


void eventicket::on_afficher_botton_clicked()
{

}
