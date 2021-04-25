#include "toulbar.h"
#include "ui_toulbar.h"
#include <QPixmap>


ToulBar::ToulBar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ToulBar)
{
    ui->setupUi(this);
}

ToulBar::~ToulBar()
{
    delete ui;
}


void ToulBar::afficher(QString tb)
{
    if(tb == "gateau")
    {
        QPixmap pix("D:/QT/Awork/produit_ingredient_1/image/sucre.jpg");
              ui->img1->setPixmap(pix.scaled(340,300,Qt::KeepAspectRatio));
               ui->text1->setText("Sucre");

               QPixmap pix2("D:/QT/Awork/produit_ingredient_1/image/farine.jpg");
                     ui->img2->setPixmap(pix2.scaled(340,300,Qt::KeepAspectRatio));
                      ui->text2->setText("Farine");

                      QPixmap pix3("D:/QT/Awork/produit_ingredient_1/image/oeuf.jpg");
                            ui->img3->setPixmap(pix3.scaled(340,300,Qt::KeepAspectRatio));
                             ui->text3->setText("Oeuf");
    }


    if(tb == "pate")
    {
        QPixmap pix("D:/QT/Awork/produit_ingredient_1/image/buerre.jpg");
              ui->img1->setPixmap(pix.scaled(340,300,Qt::KeepAspectRatio));
               ui->text1->setText("Buerre");

               QPixmap pix2("D:/QT/Awork/produit_ingredient_1/image/oeuf.jpg");
                     ui->img2->setPixmap(pix2.scaled(340,300,Qt::KeepAspectRatio));
                      ui->text2->setText("Oeuf");

                      QPixmap pix3("D:/QT/Awork/produit_ingredient_1/image/semoule.jpg");
                            ui->img3->setPixmap(pix3.scaled(340,300,Qt::KeepAspectRatio));
                             ui->text3->setText("Semoule");
    }


    if(tb == "sale")
    {
        QPixmap pix("D:/QT/Awork/produit_ingredient_1/image/fruitsec.jpg");
              ui->img1->setPixmap(pix.scaled(340,300,Qt::KeepAspectRatio));
               ui->text1->setText("Fruit Sec");

               QPixmap pix2("D:/QT/Awork/produit_ingredient_1/image/huile.jpg");
                     ui->img2->setPixmap(pix2.scaled(340,300,Qt::KeepAspectRatio));
                      ui->text2->setText("Huile");

                      QPixmap pix3("D:/QT/Awork/produit_ingredient_1/image/miel.jpg");
                            ui->img3->setPixmap(pix3.scaled(340,300,Qt::KeepAspectRatio));
                             ui->text3->setText("Miel");
    }
}




