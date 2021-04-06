
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
#include "qcustomplot.h"



#include "stmp.h"

#include <QtPrintSupport/QPrinter>
#include <QPainter>


#include <QDesktopServices>
#include <QUrl>



#include <QTextStream>
#include <QFileDialog>
#include <QTextDocument>


void Clients_Achats::refreshw()
{

    ui->tableView->setModel(c.afficher());

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
    int i=0,j=0,x=0,n=0,p=0,a=0,b=0,c=0,y=0,w=0,h=0,r=0,t=0,k=0,l=0 ,r2=0,t2=0,k2=0,l2=0,s=0;

    QString diabetique1="";
    int cin1= ui->txt_cin->text().toInt();
    int tel1=ui->txt_tel->text().toInt();
    QString nom1 = ui->txt_nom->text();
    QString prenom1 = ui->txt_prenom->text();
    int age1= ui->txt_age->text().toInt();
    QString email1 = ui->txt_email->text();
    QString adresse1 = ui->txt_adresse->text();

    QString gmail1="gmail";
     QString gmail2="esprit";

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
          {
            y=i;
           x++;
           if(i<9)
               b=1;
          }

        if(email1[i]==".")
        {
            p++;
            w=i;
         }



}
    for( h=y+1;h<w;h++)
    {
        if(r!=1)
        {

            if(email1[h]==gmail1[t])
            {
                k++;
                t++;
                r=0;
            }
            else
                r==1;

        }


        if(r2!=1)
        {

            if(email1[h]==gmail2[t2])
            {
                k2++;
                t2++;
                r2=0;
            }
            else
                r2==1;

        }







    }

    if(k>=4)
        s=1;
    if(k2>=6)
        s=1;



    if(w-y<5)
        c=1;


if(j<8 || x==0 || x>1 || n<2 ||p==0||p>1||b==1||c==1||s!=1)
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
   int cin2 =ui->cin_ligne->text().toInt();



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
    int cin = ui->ligne1->text().toInt();
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
    int id_a1 =ui->mod_a->text().toInt();
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
    int id_a = ui->sup_a->text().toInt();
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


void Clients_Achats::on_tableView_clicked(const QModelIndex &index)
{

    if(index.isValid())
        {
            QString ligne = index.data(index.column()).toString();
            QMessageBox::information(this,"test",ligne);

            QString nomc1;
            QString nomc2;
            QString nomc3;
            QString nomc4;
            QString nomc5;
            QString nomc6;
            QString nomc7;



            ui->ligne1->setText(ligne);
            ui->cin_ligne->setText(ligne);
            int cin2 =ui->cin_ligne->text().toInt();

            nomc1=c.clicker1(cin2);
            nomc2=c.clicker2(cin2);
            nomc3=c.clicker3(cin2);
            nomc4=c.clicker4(cin2);
            nomc5=c.clicker5(cin2);
            nomc6=c.clicker6(cin2);
            nomc7=c.clicker7(cin2);



            ui->txt_nom_2->setText(nomc1);
            ui->txt_prenom_2->setText(nomc2);
            ui->txt_adresse_2->setText(nomc5);
            ui->txt_email_2->setText(nomc4);

            ui->txt_age_2->setText(nomc7);
            ui->txt_tel_2->setText(nomc3);
            ui->diab_ret->setText(nomc6);
}

}



void Clients_Achats::on_tableView_2_clicked(const QModelIndex &index)
{


    if(index.isValid())
        {
            QString ligne = index.data(index.column()).toString();
            QMessageBox::information(this,"test",ligne);

            QString nomc1;
            QString nomc2;
            QString nomc3;
            QString nomc4;
            int nomc5;
            QString nomc6;
            QDate nomc7;




            ui->sup_a->setText(ligne);
            ui->mod_a->setText(ligne);
            int cin2 =ui->mod_a->text().toInt();

            nomc1=a.clicker1(cin2);
            nomc2=a.clicker2(cin2);
            nomc3=a.clicker3(cin2);
            nomc4=a.clicker4(cin2);
            nomc6=a.clicker6(cin2);


            nomc5=a.clicker5(cin2);

            nomc7=a.clicker7(cin2);




            ui->id_e2->setText(nomc1);
            ui->nom_c_2->setText(nomc2);
            ui->prenom_c_2->setText(nomc3);
            ui->prod->setText(nomc4);

            ui->spinBox_q_2->setValue(nomc5);

            ui->conf->setText(nomc6);
            ui->dateEdit_2->setDate(nomc7);

}



}




void Clients_Achats::on_pushButton_11_clicked()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( """ + QFileInfo(file).fileName() + "" " );

    ui->lineEdit_2->setText( fileListString );
}


void Clients_Achats::on_pushButton_6_clicked()
{
    Smtp* smtp = new Smtp("ahmed.missaoui1@esprit.tn",ui->mail_pass->text(), "smtp.gmail.com");
      connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

      if( !files.isEmpty() )
          smtp->sendMail("ahmed.missaoui1@esprit.tn", ui->rcpt_2->text() , ui->subject_2->text(),ui->msg_2->text(),files );
      else
          smtp->sendMail("ahmed.missaoui1@esprit.tn", ui->rcpt_2->text() , ui->subject_2->text(),ui->msg_2->text());

}




