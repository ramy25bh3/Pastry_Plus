#include "eventicket.h"
#include "ui_eventicket.h"
#include "connexion.h"
#include "gestion_evenement.h"

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
    //ouverture connection base de donnees
    Connexion c;

    if( c.createconnect()){
     close();
     gestion_evenement *go;
     go = new gestion_evenement();
     go->show();
     }
}
