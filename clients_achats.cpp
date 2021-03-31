
#include "clients_achats.h"
#include "ui_clients_achats.h"
#include "QSqlQuery"
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QPdfWriter>
#include <QPainter>

#include "connexion.h"
#include "client.h"
#include "achats.h"

//hello2

void Clients_Achats::refreshw()
{

    ui->comboBox_mod->setModel(c.combobox());
    ui->comboBox_supp->setModel(c.combobox());
    ui->tableView->setModel(c.afficher());
    ui->mod_ida->setModel(a.combobox2());
    ui->del_ac->setModel(a.combobox2());
    ui->id_ec->setModel(a.combobox3());

    ui->tableView_2->setModel(a.afficher2());


}


Clients_Achats::Clients_Achats(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Clients_Achats)
{
    QString nom3="";
    ui->setupUi(this);
    refreshw();

}

Clients_Achats::~Clients_Achats()
{
    delete ui;
}

void Clients_Achats::on_pushButton_clicked() //ajout
{
    int i=0,j=0,x=0,n=0,p=0,a=0,b=0,c=0;

    QString diabetique1="";
    int cin1= ui->txt_cin->text().toInt();
    int tel1=ui->txt_tel->text().toInt();
    QString nom1 = ui->txt_nom->text();
    QString prenom1 = ui->txt_prenom->text();
    int age1= ui->txt_age->text().toInt();
    QString email1 = ui->txt_email->text();
    QString adresse1 = ui->txt_adresse->text();

    if(ui->radioButton->isChecked())
       diabetique1="oui";
    else if(ui->radioButton_2->isChecked())
         diabetique1="non";

    for(i=0;i<email1.length();i++)
    {
        if(email1[i]=="a"  )
                j++;
        if(email1[i]=="b"  )
                  j++;
        if(email1[i]=="c"  )
                    j++;
        if(email1[i]=="d"  )
 j++;

        if(email1[i]=="e"  )
 j++;

        if(email1[i]=="f"  )
 j++;

        if(email1[i]=="g"  )
 j++;

        if(email1[i]=="h"  )

 j++;

        if(email1[i]=="i"  )
 j++;

        if(email1[i]=="j"  )
 j++;

        if(email1[i]=="k"  )

 j++;

        if(email1[i]=="l"  )
 j++;

        if(email1[i]=="m"  )

 j++;

        if(email1[i]=="n"  )

 j++;

        if(email1[i]=="o"  )
 j++;

        if(email1[i]=="p"  )
 j++;

        if(email1[i]=="r"  )

 j++;

        if(email1[i]=="s"  )


j++;


        if(email1[i]=="t"  )
j++;
        if(email1[i]=="u"  )

j++;
        if(email1[i]=="v"  )
j++;
        if(email1[i]=="w"  )
j++;
        if(email1[i]=="x"  )
j++;
        if(email1[i]=="y"  )

j++;
        if(email1[i]=="z"  )
j++;


        if(email1[i]=="0")
            n++;

        if(email1[i]=="1")
            n++;
        if(email1[i]=="2")
            n++;
        if(email1[i]=="3")
            n++;
        if(email1[i]=="4")
            n++;
        if(email1[i]=="5")
            n++;
        if(email1[i]=="6")
            n++;
        if(email1[i]=="7")
            n++;
        if(email1[i]=="8")
            n++;
        if(email1[i]=="9")
            n++;


        if(email1[i]=="@")

           x++;


        if(email1[i]==".")
            p++;




}


if(j<8 || x==0 || x>1 || n<2 ||p==0||p>1)
    QMessageBox::information(nullptr, QObject::tr("Mail  "),
               QObject::tr("mail non valide:.\n"
                           ""), QMessageBox::Ok);

else
{
    client c(cin1,nom1,prenom1,tel1,email1,adresse1,diabetique1,age1);
   bool test= c.ajouter_client();




   if(test)
   {

   refreshw();

    QMessageBox::information(nullptr, QObject::tr("ajout  "),
               QObject::tr("ajout terminer.\n"
                           "Clicker sur  accept ."), QMessageBox::Accepted);
  }






else
   QMessageBox::critical(nullptr, QObject::tr("ajout refuser"),
               QObject::tr("l ajout de compte  est refusé.\n"
                           "Clicker sur  Abort ."), QMessageBox::Abort);


}

}



void Clients_Achats::on_pushButton_2_clicked() //recherche
{
    refreshw();

QString nom3 = ui->nom_aff->text();
QString mail3=ui->txt_email_3->text();

    int d=0,t=0;
    if(ui->radioButton_5->isChecked())
      d=1;
   else if(ui->radioButton_6->isChecked())
        d=2;

    else if(ui->radioButton_7->isChecked())
         d=0;



     ui->tableView->setModel(c.chercher(d,nom3,mail3));
}


void Clients_Achats::on_pushButton_5_clicked()//trier
{
     refreshw();
    QString nom3 = ui->nom_aff->text();
    QString mail3=ui->txt_email_3->text();
    int t=0,d=0;
    if(ui->radioButton_8->isChecked())
             t=1;

     if(ui->radioButton_9->isChecked())
         t=2;

     if(ui->radioButton_10->isChecked())
         t=0;



     if(ui->radioButton_39->isChecked())
              d=1;

      if(ui->radioButton_38->isChecked())
          d=2;

      if(ui->radioButton_10->isChecked())
          d=0;

     ui->tableView->setModel(c.trier(t,nom3,mail3,d));
}



void Clients_Achats::on_pushButton_3_clicked() //modif
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
 client c(cin2,nom2,prenom2,tel2,email2,adresse2,diabetique2,age2);
 bool test=c.modifier_client();

 if(test)
 {
refreshw();
 }
 else
     QMessageBox::critical(nullptr, QObject::tr("modif refuser"),
                 QObject::tr("la modf de client  est refusé.\n"
                             "Clicker sur  Abort ."), QMessageBox::Abort);

}

void Clients_Achats::on_pushButton_4_clicked() //delete
{
    int cin = ui->comboBox_supp->currentText().toInt();
        bool  test = c.supp_client(cin);
        if (test)
        {
       refreshw();
        }
        else
            QMessageBox::critical(nullptr, QObject::tr("suprr refuser"),
                        QObject::tr("la supp de compte  est refusé.\n"
                                    "Clicker sur  Abort ."), QMessageBox::Abort);
}



void Clients_Achats::on_pushButton_6_clicked()
{
  /*  Smtp* smtp = new Smtp("missaouiahmed2000@gmail.com",ui->mail_pass->text(),"smtp.gmail.com");
      connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

          smtp->sendMail("missaouiahmed2000@gmail.com", ui->msg_mail->text()  );
*/
}


void Clients_Achats::on_pushButton_7_clicked() //ajout_achat
{
    int x=0,y=0,z=0;

    QString conf1;
    QDate date1=ui->dateEdit->date();
    int id_a1 =ui->id_a->text().toInt();
    int id_e1 =ui->id_e->text().toInt();
    QString nom_c1=ui->nom_c->text();
    QString prenom_c1=ui->prenom_c->text();
    QString produit1=ui->comboBox_p->currentText();
    int quantite1=ui->spinBox_q->text().toInt();

    if(ui->radioButton_11->isChecked())
      conf1="oui";
   else if(ui->radioButton_12->isChecked())
      conf1="non";



    QString id_ima =ui->id_a->text();
    QString id_ime =ui->id_e->text();
    QString quantite_im=ui->spinBox_q->text();
    QString dw = date1.toString("dd-MM-yyyy");



   if(produit1=="Produits")
   x=1;

if(conf1=="")
    z=1;

   if(quantite1==0)
    y=1;

   if(x==1 && y==1 && z==1)
   {
       QMessageBox::information(nullptr, QObject::tr("Produit , Quantite et Confirmation"),
                   QObject::tr("Produit non choisi , Quantite egale a 0 et Confirmation n'est pas choisi.\n"
                               ""), QMessageBox::Ok);
   }


   if(x==1 && y==0 && z==0)
   {
       QMessageBox::information(nullptr, QObject::tr("Produit"),
                   QObject::tr("Produit non choisi .\n"
                               ""), QMessageBox::Ok);
   }

   if(x==1 && y==1 && z==0)
   {
       QMessageBox::information(nullptr, QObject::tr("Produit et Quantite"),
                   QObject::tr("Produit non choisi et qunatite egale a  0.\n"
                               ""), QMessageBox::Ok);
   }


   if(x==1 && y==0 && z==1)
   {
       QMessageBox::information(nullptr, QObject::tr("Produit et Confirmation"),
                   QObject::tr("Produit non choisi et Confirmation non choisi.\n"
                               ""), QMessageBox::Ok);
   }

   if(x==0 && y==1 && z==1)
   {
       QMessageBox::information(nullptr, QObject::tr("Confirmation et Quantite"),
                   QObject::tr("Confirmation non choisi et qunatite egale a  0.\n"
                               ""), QMessageBox::Ok);
   }


   if(x==0 && y==1 && z==0)
   {
       QMessageBox::information(nullptr, QObject::tr("Quantite"),
                   QObject::tr("Quantite egale a 0.\n"
                               ""), QMessageBox::Ok);
   }

   if(z==1 && x==0 && y==0)
   {
       QMessageBox::information(nullptr, QObject::tr(" Confirmation"),
                   QObject::tr(" Confirmation n'est pas choisi.\n"
                               ""), QMessageBox::Ok);
   }


   if(x==0 && y==0 && z==0)
   {

      achat a( conf1, date1,id_a1,id_e1 , nom_c1, prenom_c1, produit1, quantite1);
      bool test= a.ajouter_achat();
       refreshw();
   if(test)
      {
       if(ui->checkBox->isChecked())
       {
           QPixmap logo;
           logo.load("ifactory-logo");
           logo.scaled(logo.width()*10,logo.height()*10);

           QString pdf_name= "file_ach_"+id_ima+".pdf";
           QPdfWriter pdf(pdf_name);
           QPainter painter(&pdf);
           painter.drawPixmap(3000,0,logo.width()*20,logo.height()*20,logo);


           painter.setPen(Qt::blue);
           painter.drawText(100,2000,"votre info : ");
           painter.drawText(100,2300," id_achats : ");
           painter.setPen(Qt::black);
           painter.drawText(2000,2300,id_ima);
           painter.setPen(Qt::blue);
           painter.drawText(100,2600,"id_employe : ");
           painter.setPen(Qt::black);
           painter.drawText(2000,2600,id_ime);
           painter.setPen(Qt::blue);
           painter.drawText(100,2900,"nom client : ");
           painter.setPen(Qt::black);
           painter.drawText(2000,2900,nom_c1);
           painter.setPen(Qt::blue);
           painter.drawText(100,3200,"prenom client : ");
           painter.setPen(Qt::black);
           painter.drawText(2000,3200,prenom_c1);
           painter.setPen(Qt::blue);
           painter.drawText(100,3500,"date achat : ");
           painter.setPen(Qt::black);
           painter.drawText(2000,3500,dw);
           painter.setPen(Qt::blue);
           painter.drawText(100,3800,"produit : ");
           painter.setPen(Qt::black);
           painter.drawText(2000,3800,produit1);
           painter.setPen(Qt::blue);
           painter.drawText(100,4100,"quantite : ");
           painter.setPen(Qt::black);
           painter.drawText(2000,4100,quantite_im);

           painter.setPen(Qt::blue);
           painter.drawText(100,4100,"confirmation : ");
           painter.setPen(Qt::black);
           painter.drawText(2000,4100,conf1);




           painter.end();
           QMessageBox::information(nullptr, QObject::tr("pdf  "),
                       QObject::tr("pdf terminer.\n"
                                   "Clicker sur  accept ."), QMessageBox::Accepted);




   }

       QMessageBox::information(nullptr, QObject::tr("ajout  "),
                   QObject::tr("ajout terminer.\n"
                               "Clicker sur  accept ."), QMessageBox::Accepted);

}

else
   QMessageBox::critical(nullptr, QObject::tr("ajout refuser"),
               QObject::tr("l ajout de compte  est refusé.\n"
                           "Clicker sur  Abort ."), QMessageBox::Abort);




}

}
void Clients_Achats::on_pushButton_9_clicked() //mod achats_cl
{

    int x=0,y=0,z=0;

    QString conf1;
    QDate date1=ui->dateEdit_2->date();
    int id_a1 =ui->mod_ida->currentText().toInt();
    int id_e1 =ui->id_e2->text().toInt();
    QString nom_c1=ui->nom_c_2->text();
    QString prenom_c1=ui->prenom_c_2->text();
    QString produit1=ui->produit2->currentText();
    int quantite1=ui->spinBox_q_2->text().toInt();

    if(ui->radioButton_13->isChecked())
      conf1="oui";
   else if(ui->radioButton_14->isChecked())
      conf1="non";

    if(produit1=="Produits")
    x=1;

 if(conf1=="")
     z=1;

    if(quantite1==0)
     y=1;

    if(x==1 && y==1 && z==1)
    {
        QMessageBox::information(nullptr, QObject::tr("Produit , Quantite et Confirmation"),
                    QObject::tr("Produit non choisi , Quantite egale a 0 et Confirmation n'est pas choisi.\n"
                                ""), QMessageBox::Ok);
    }


    if(x==1 && y==0 && z==0)
    {
        QMessageBox::information(nullptr, QObject::tr("Produit"),
                    QObject::tr("Produit non choisi .\n"
                                ""), QMessageBox::Ok);
    }

    if(x==1 && y==1 && z==0)
    {
        QMessageBox::information(nullptr, QObject::tr("Produit et Quantite"),
                    QObject::tr("Produit non choisi et qunatite egale a  0.\n"
                                ""), QMessageBox::Ok);
    }


    if(x==1 && y==0 && z==1)
    {
        QMessageBox::information(nullptr, QObject::tr("Produit et Confirmation"),
                    QObject::tr("Produit non choisi et Confirmation non choisi.\n"
                                ""), QMessageBox::Ok);
    }

    if(x==0 && y==1 && z==1)
    {
        QMessageBox::information(nullptr, QObject::tr("Confirmation et Quantite"),
                    QObject::tr("Confirmation non choisi et qunatite egale a  0.\n"
                                ""), QMessageBox::Ok);
    }


    if(x==0 && y==1 && z==0)
    {
        QMessageBox::information(nullptr, QObject::tr("Quantite"),
                    QObject::tr("Quantite egale a 0.\n"
                                ""), QMessageBox::Ok);
    }

    if(z==1 && x==0 && y==0)
    {
        QMessageBox::information(nullptr, QObject::tr(" Confirmation"),
                    QObject::tr(" Confirmation n'est pas choisi.\n"
                                ""), QMessageBox::Ok);
    }


    if(x==0 && y==0 && z==0)
    {

       achat a( conf1, date1,id_a1,id_e1 , nom_c1, prenom_c1, produit1, quantite1);
       bool test=a.modif_achat();
       if(test)
       {
      refreshw();
       }
       else
           QMessageBox::critical(nullptr, QObject::tr("modif refuser"),
                       QObject::tr("la modf d' Achats  est refusé.\n"
                                   "Clicker sur  Abort ."), QMessageBox::Abort);

      }





}





void Clients_Achats::on_pushButton_8_clicked() //supp achats_cl
{
    int id_a = ui->del_ac->currentText().toInt();
        bool  test = a.supp_achat(id_a);
        if (test)
        {
       refreshw();
        }
        else
            QMessageBox::critical(nullptr, QObject::tr("suprr refuser"),
                        QObject::tr("la supp d'achats  est refusé.\n"
                                    "Clicker sur  Abort ."), QMessageBox::Abort);
}


void Clients_Achats::on_pushButton_10_clicked() //chercher achats
{
    int x=0,y=0,z=0;
//refreshw();
     ui->tableView_2->setModel(a.afficher2());
    QDate d1(2000, 01, 01);

    QString conf2="";
     QDate date2;
     int id_e2 =ui->id_ec->currentText().toInt();


     if(ui->radioButton_15->isChecked())
      y=1;
   else if(ui->radioButton_16->isChecked())
      y=2;
    else if(ui->radioButton_17->isChecked())
      y=0;

       if(ui->radioButton_18->isChecked())
       z=1;
       else
       z=2;

 ui->tableView_2->setModel(a.cherchera(y,z,conf2,date2,id_e2));

}

void Clients_Achats::on_pushButton_41_clicked() //trier achats
{


    refreshw();

    int t=0,d=0;


   if(ui->radioButton_65->isChecked())
            t=1;

    if(ui->radioButton_66->isChecked())
        t=2;

    if(ui->radioButton_70->isChecked())
        t=0;


    if(ui->radioButton_68->isChecked())
             d=1;

     if(ui->radioButton_69->isChecked())
           d=2;





    ui->tableView_2->setModel(a.triera(t,d));

}
