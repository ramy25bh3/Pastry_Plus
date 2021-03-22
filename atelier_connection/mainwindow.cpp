#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "etudiant.h"
#include <QIntValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_id->setValidator( new QIntValidator(0, 99999999, this));
    ui->tab_etudiant->setModel(E.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}







void MainWindow::on_pushButton_clicked()
{
    QString cin,nom,prenom,age;

    cin= ui->lineEdit_CIN->text();
    nom= ui->lineEdit_Nom->text();
    prenom= ui->lineEdit_Prenom->text();
    age= ui->lineEdit_Age->text();
    QSqlQuery qry;
    qry.prepare("insert into CLIENT (cin,nom,prenom,age) values('"+cin+"','"+nom+"','"+prenom+"','"+age+"')" );

    if(qry.exec())
    {
    QMessageBox::critical(this,tr("save"),tr("my data is save"));
    }
    else
    {
     QMessageBox::critical(this,tr("error"),tr("my data is not save"));

    }
}

void MainWindow::on_afficher_clicked()
{
    QSqlQueryModel *modal = new QSqlQueryModel();
        QSqlQuery qry;
        qry.prepare("select * from CLIENT");

        qry.exec();
        modal->setQuery(qry);
        ui->tableView->setModel(modal);
}



void MainWindow::on_pb_ajouter_clicked()
{
    int id=ui->le_id->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    Etudiant E(id,nom,prenom);

    bool test=E.ajouter();
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("Ajout avec succées");
        ui->tab_etudiant->setModel(E.afficher());
        }
    else
        msgBox.setText("Echec d'ajout");

    msgBox.exec();
}

void MainWindow::on_pb_supprimer_clicked()
{
    Etudiant E1;
    E1.setid(ui->le_id_supp->text().toInt());

    bool test=E1.supprimer(E1.getid());
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("Suppression avec succées");
        ui->tab_etudiant->setModel(E.afficher());
        }
    else
        msgBox.setText("Echec de suppression");

    msgBox.exec();

}
