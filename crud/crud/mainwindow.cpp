#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QSqlQuery"
#include <QMessageBox>
#include <QSqlQueryModel>
#include<QDateTime>
#include<QDate>
#include "connexion.h"
#include "fournisseur.h"

void MainWindow::refreshw()
{

    ui->comboBox_mod->setModel(f.combobox());
    ui->comboBox_supp->setModel(f.combobox());

}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    refreshw();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()//ajout
{
    QString diabetique1="";
    int id_f1= ui->txt_cin->text().toInt();
    int tel_f1=ui->txt_num->text().toInt();
    QString nom_soc1 = ui->txt_nom->text();
    QDateTime date_add_f1=ui->dateEdit->dateTime();
    QString email_f1 = ui->txt_email->text();
    QString specialite_f1 = ui->txt_spec->text();
    QString adresse_f1 = ui->txt_adresse->text();


    fournisseur f(id_f1,nom_soc1,tel_f1,email_f1,date_add_f1,specialite_f1,adresse_f1);
   bool test= f.ajouter_fournisseur();

   if(test)
       QMessageBox::information(nullptr, QObject::tr("ajout  "),
                   QObject::tr("ajout terminer.\n"
                               "Clicker sur  accept ."), QMessageBox::Accepted);



else
   QMessageBox::critical(nullptr, QObject::tr("ajout refuser"),
               QObject::tr("l ajout de compte  est refusé.\n"
                           "Clicker sur  Abort ."), QMessageBox::Abort);

}

void MainWindow::on_pushButton_2_clicked()//affiche
{
refreshw();
 ui->tableView->setModel(f.afficher());
}


/*void MainWindow::on_pushButton_3_clicked()//modif
{



    QString diabetique2;
   int cin2 =ui->comboBox_mod->currentText().toInt();
   QString nom2 = ui->txt_nom_2->text();
   QString prenom2 = ui->txt_prenom_2->text();
   int age2 = ui->txt_age_2->text().toInt();
   int tel2=ui->txt_tel_2->text().toInt();
   QString adresse2 = ui->txt_adresse_2->text();
   QString email2 = ui->txt_email_2->text();

    if(ui->radioButton_3->isChecked())
      diabetique2="oui";
   else if(ui->radioButton_4->isChecked())
        diabetique2="non";
 fournisseur f(id_f2,nom_soc2,prenom2,tel2,email2,adresse2,diabetique2,age2);
 bool test=f.modifier_fournisseur();

 if(test)
 {
refreshw();
 }
 else
     QMessageBox::critical(nullptr, QObject::tr("modif refuser"),
                 QObject::tr("la modification du fournisseur  est refusee.\n"
                             "Clicker sur  Abort ."), QMessageBox::Abort);


}*/

void MainWindow::on_pushButton_4_clicked() //supp
{



    int id_f = ui->comboBox_supp->currentText().toInt();
        bool  test = f.supp_fournisseur(id_f);
        if (test)
        {
       refreshw();
        }
        else
            QMessageBox::critical(nullptr, QObject::tr("suprr refuser"),
                        QObject::tr("la suppression du compte  est refusee.\n"
                                    "Clicker sur  Abort ."), QMessageBox::Abort);
}
