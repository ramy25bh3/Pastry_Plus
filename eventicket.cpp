#include "eventicket.h"
#include "ui_eventicket.h"
#include <QMessageBox>

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

void eventicket::on_pushButton_clicked()
{
    int IDCLIENT_E= ui->IDCLIENT_E->text().toInt();
        QString DESTINATION_E= ui->DESTINATION_E->text();
        int IDEMPLOYEE_E= ui->IDEMPLOYEE_E->text().toInt();
        int QUANTITE_E= ui->QUANTITE_E->text().toInt();
        int PRIXLIVRAISON_E= ui->PRIXLIVRAISON_E->text().toInt();
        QString METHODE_E= ui->METHODE_E->text();

        evenement E(IDCLIENT_E,DESTINATION_E,IDEMPLOYEE_E,QUANTITE_E,PRIXLIVRAISON_E,METHODE_E);

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

void eventicket::on_pushButton_3_clicked()
{

    int IDCLIENT_E= ui->IDCLIENT_E_modif->text().toInt();
        QString DESTINATION_E= ui->DESTINATION_E_modif->text();
        int IDEMPLOYEE_E= ui->IDEMPLOYEE_E_modif->text().toInt();
        int QUANTITE_E= ui->QUANTITE_E_modif->text().toInt();
        int PRIXLIVRAISON_E= ui->PRIXLIVRAISON_E_modif->text().toInt();
        QString METHODE_E= ui->METHODE_E_modif->text();

        evenement E (IDCLIENT_E,DESTINATION_E,IDEMPLOYEE_E,QUANTITE_E,PRIXLIVRAISON_E,METHODE_E);

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

void eventicket::on_pushButton_4_clicked()
{
    evenement E1;
        E1.setIDCLIENT_E(ui->IDCLIENT_E_supp->text().toInt());

        bool test=E1.supp_evenement(E1.getIDCLIENT_E());
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
