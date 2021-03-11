#include "fournisseur.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <vector>

fournisseur::fournisseur()
{


}

fournisseur::fournisseur(int id_f1, QString nom_soc1, int tel_f1, QString email_f1, QString date_add_f1, QString specialite_f1, QString adresse_f1)
{

    id_f=id_f1;
    nom_soc=nom_soc1;
    tel_f=tel_f1;
    email_f=email_f1;
    date_add_f=date_add_f1;
    specialite_f=specialite_f1;
    adresse_f=adresse_f1;

}



bool fournisseur::ajouter_fournisseur()
{
QSqlQuery query;

QString id_f1 = QString::number(id_f);
QString tel_f1 = QString::number(tel_f);


query.prepare("insert into FOURNISSEURS(id_f,nom_soc,tel_f,email_f,adresse_add_f,specialite_f,adresse_f) values(:id_f1,:nom_soc,:tel_f1,:email_f,:adresse_add_f,:specialite_f,:adresse_f)");
query.bindValue(":id_f1",id_f1);
query.bindValue(":nom_soc",nom_soc);
query.bindValue(":tel_f1",tel_f1);
query.bindValue(":email_f",email_f);
query.bindValue(":date_add_f",date_add_f);
query.bindValue(":specialite_f",specialite_f);
query.bindValue(":adresse_f",adresse_f);






return query.exec();

}

QSqlQueryModel * fournisseur::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from fournisseurs");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_f"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom_soc"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("tel_f"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("email_f"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("date_add_f"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("specialite_f"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("adresse_f"));
    return model;

}


  bool fournisseur::modifier_fournisseur()
  {

      QSqlQuery query;
      QString id_f1 = QString::number(id_f);
      QString tel_f1 = QString::number(tel_f);

      query.prepare("update FOURNISSEURS set nom_soc=:nom_soc,tel_f=:tel_f1,email_f=:email_f,date_add_f=:date_add_f,specialite_f=:specialite_f,adresse_f=:adresse_f where id_f=:id_f1");
      query.bindValue(":id_f1",id_f1);
      query.bindValue(":nom_soc",nom_soc);
      query.bindValue(":tel_f1",tel_f1);
      query.bindValue(":email_f",email_f);
      query.bindValue(":date_add_f",date_add_f);
      query.bindValue(":specialite_f",specialite_f);
      query.bindValue(":adresse_f",adresse_f);

  }


  bool fournisseur::supp_fournisseur(int id_f)
  {

      QSqlQuery query;
      QString id_f1 = QString::number(id_f);
      query.prepare("Delete from FOURNISSEURS  where id_f=:id_f1");
      query.bindValue(":id_f1",id_f1);
      return query.exec();

  }


  QSqlQueryModel * fournisseur::combobox()
  {
      QSqlQueryModel * model = new QSqlQueryModel();
      //QString acc_ = QString::number(account);
      //QString perm=  QString::number(permissions);

      model->setQuery("select id_f from fournisseurs");


      return model;
  }
