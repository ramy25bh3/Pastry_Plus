#include "secdialog.h"
#include "ui_secdialog.h"
#include <QPixmap>

void secDialog:: afficher(QString produit)
{
/*
float prix;


  if(produit=="Gateau")
  {
      prix=35.7;

      QPixmap pix("C:/Users/ALPHA/Desktop/qt_projets/Clients_Achats/images/gateau.jpg");
      ui->label_img->setPixmap(pix.scaled(340,300,Qt::KeepAspectRatio));
       ui->label->setText(produit);
  }

  if(produit=="Millefeuille")
  {
      prix=3.5;

      QPixmap pix("C:/Users/ALPHA/Desktop/qt_projets/Clients_Achats/images/millefeuille.jpeg");
      ui->label_img->setPixmap(pix.scaled(340,300,Qt::KeepAspectRatio));
       ui->label->setText(produit);
  }

  if(produit=="Croissant")
  {
      prix=1.5;

      QPixmap pix("C:/Users/ALPHA/Desktop/qt_projets/Clients_Achats/images/croissant.jpeg");
      ui->label_img->setPixmap(pix.scaled(340,300,Qt::KeepAspectRatio));
      ui->label->setText(produit);
  }


  if(produit=="Mini-cakes  sans sucre")
  {
      prix=8.9;

      QPixmap pix("C:/Users/ALPHA/Desktop/qt_projets/Clients_Achats/images/mini.jpg");
      ui->label_img->setPixmap(pix.scaled(340,300,Qt::KeepAspectRatio));
       ui->label->setText("Mini-cakes");
  }



  if(produit=="Cookies sans sucre")
  {
      prix=6.9;

      QPixmap pix("C:/Users/ALPHA/Desktop/qt_projets/Clients_Achats/images/cookies.jpeg");
      ui->label_img->setPixmap(pix.scaled(340,300,Qt::KeepAspectRatio));
       ui->label->setText("Cookies");
  }






  ui->label_3->setNum(prix);
*/
}

secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{

    ui->setupUi(this);
}

secDialog::~secDialog()
{
    delete ui;
}
