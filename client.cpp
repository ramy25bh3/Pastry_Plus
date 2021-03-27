#include "client.h"
#include <QString>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <vector>

//test
client::client()
{


}

client::client(int cin1,QString nom1,QString prenom1,int tel1,QString email1,QString adresse1,QString diabetique1,int age1)
{
    cin=cin1;
    tel=tel1;
    nom=nom1;
    prenom=prenom1;
    age=age1;
    email=email1;
    adresse=adresse1;
    diabitique=diabetique1;
}



bool client::ajouter_client()
{
QSqlQuery query;

QString cin1 = QString::number(cin);
QString age1 = QString::number(age);
QString tel1 = QString::number(tel);


query.prepare("insert into CLIENTS(cin,nom,prenom,tel,email,adresse_locale,diabetique,age) values(:cin1,:nom,:prenom,:tel1,:email,:adresse,:diabitique,:age1)");
query.bindValue(":cin1",cin1);
query.bindValue(":nom",nom);
query.bindValue(":prenom",prenom);
query.bindValue(":tel1",tel1);
query.bindValue(":email",email);
query.bindValue(":adresse",adresse);
query.bindValue(":diabitique",diabitique);
query.bindValue(":age1",age1);






return query.exec();

}

QSqlQueryModel * client::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();







      model->setQuery("select * from clients");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("tel"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("email"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("adresse_locale"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("diabetique"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("age"));
    return model;

}

QSqlQueryModel * client::chercher(int d,QString nom3,QString mail3)
{

    QSqlQueryModel * model = new QSqlQueryModel();


    if(nom3=="" && mail3=="")
    {

    if(d==0)
    {
    model->setQuery("select * from clients");
    }

    if(d==1)
    {
    model->setQuery("select * from clients where diabetique='oui'");
    }

    if(d==2)
    {
    model->setQuery("select * from clients where diabetique='non'");
    }

    if(d==0)
    {
    model->setQuery("select * from clients");
    }

    }



    if(nom3!=""&& d==0  && mail3=="")
    {
    model->setQuery("select * from clients where nom like '"+nom3+"' ");
    }
    else if(nom3!=""&& d==1  && mail3=="")
    {
       model->setQuery("select * from clients where nom like '"+nom3+"' and diabetique='oui' ");
    }

    else if(nom3!=""&& d==2  && mail3=="")
    {
       model->setQuery("select * from clients where nom like '"+nom3+"' and diabetique='non' ");
    }



    if(mail3!=""&& d==0 && nom3=="")
    {
    model->setQuery("select * from clients where email like '"+mail3+"' ");
    }
    else if(mail3!=""&& d==1 && nom3=="" )
    {
       model->setQuery("select * from clients where email like '"+mail3+"' and diabetique='oui' ");
    }

    else if(mail3!=""&& d==2  && nom3=="")
    {
       model->setQuery("select * from clients where email like '"+mail3+"' and diabetique='non' ");
    }



    if(nom3!="" && d==0  && mail3!="")
    {
    model->setQuery("select * from clients where nom like '"+nom3+"' and  email like '"+mail3+"' ");
    }
    else if(nom3!=""&& d==1 && mail3!="" )
    {
       model->setQuery("select * from clients where nom like '"+nom3+"' and diabetique='oui'  and  email like '"+mail3+"' ");
    }

    else if(nom3!=""&& d==2  && mail3!="")
    {
       model->setQuery("select * from clients where nom like '"+nom3+"' and diabetique='non' and  email like '"+mail3+"' ");
    }



    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("tel"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("email"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("adresse_locale"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("diabetique"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("age"));
    return model;

}

QSqlQueryModel * client::trier(int t,QString nom3,QString mail3,int d)
{

    QSqlQueryModel * model = new QSqlQueryModel();



    if(nom3=="" )
    {


    if(t==0)
    {
    model->setQuery("select * from clients");
    }

    if(t==1)
    {
    model->setQuery("select * from clients order by cin");
    }

    if(t==2)
    {
    model->setQuery("select * from clients order by cin desc");
    }




    if(d==1)
    {
    model->setQuery("select * from clients order by age");
    }

    if(d==2)
    {
    model->setQuery("select * from clients order by age desc");
    }



    }



    if(nom3!=""&& t==0)
    {
        model->setQuery("select * from clients where nom like '"+nom3+"' ");
    }


    else if(nom3!=""&& t==1 && d==0)
    {
       model->setQuery("select * from clients where nom like '"+nom3+"' order by cin ");
    }

    else if(nom3!=""&& t==2 && d==0)
    {
       model->setQuery("select * from clients where nom like '"+nom3+"' order by cin desc ");
    }





    else if(nom3!=""&& d==1 && t==0)
    {
       model->setQuery("select * from clients where nom like '"+nom3+"' order by age ");
    }

    else if(nom3!=""&& d==2 && t==0)
    {
       model->setQuery("select * from clients where nom like '"+nom3+"' order by age desc ");
    }





    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("tel"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("email"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("adresse_locale"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("diabetique"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("age"));
    return model;

}

  bool client::modifier_client()
  {

      QSqlQuery query;
      QString cin1 = QString::number(cin);
      QString age1 = QString::number(age);
      QString tel1 = QString::number(tel);

      query.prepare("update CLIENTS set nom=:nom,prenom=:prenom,tel=:tel1,email=:email,adresse_locale=:adresse,diabetique=:diabitique,age=:age1 where cin=:cin1");
      query.bindValue(":cin1",cin1);
      query.bindValue(":nom",nom);
      query.bindValue(":prenom",prenom);
      query.bindValue(":tel1",tel1);
      query.bindValue(":email",email);
      query.bindValue(":adresse",adresse);
      query.bindValue(":diabitique",diabitique);
      query.bindValue(":age1",age1);

      return query.exec();


  }


  bool client::supp_client(int cin)
  {

      QSqlQuery query;
      QString cin1 = QString::number(cin);
      query.prepare("Delete from CLIENTS  where cin =:cin1");
      query.bindValue(":cin1",cin1);
      return query.exec();

  }


  QSqlQueryModel * client::combobox()
  {
      QSqlQueryModel * model = new QSqlQueryModel();
      //QString acc_ = QString::number(account);
      //QString perm=  QString::number(permissions);

      model->setQuery("select cin from clients");


      return model;
  }
