#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QSqlQuery"
#include <QMessageBox>
#include <QSqlQueryModel>
#include<QDateTime>
#include<QDate>
#include <QDebug>
#include <QPrinter>
#include <QPrintDialog>
#include <QFileDialog>
#include <QTextDocument>
#include <QFileDialog>
#include <QErrorMessage>
#include <QMessageBox>
#include <QFile>
#include <QDataStream>
#include <QTextStream>
#include "connexion.h"
#include "fournisseur.h"
#include "comm_achats.h"
#include "exportexcelobject.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tablefournisseur->setModel(tmpfournisseur.afficher());
    ui->tablecommandes_a->setModel(tmpcomma.afficher_com_a());
    model=new QSqlTableModel;
    model->select();

}

MainWindow::~MainWindow()
{
    delete ui;
}

/******************************* FOUNISSEURS ********************************************/

void MainWindow::on_pushButton_clicked()//ajout fournisseur
{
    bool test;//= f.ajouter_fournisseur();

    int id_f= ui->txt_cin->text().toInt();
    int tel_f=ui->txt_num->text().toInt();
    QString nom_soc = ui->txt_nom->text();
    QDateTime date_add_f=ui->dateEdit->dateTime();
    QString email_f = ui->txt_email->text();
    QString specialite_f = ui->txt_spec->text();
    QString adresse_add_f = ui->txt_adresse->text();

    fournisseur f(id_f, nom_soc, tel_f, email_f, date_add_f, specialite_f, adresse_add_f);

   {test=f.ajouter_fournisseur();}

   if(test) {

       ui->tablefournisseur->setModel(tmpfournisseur.afficher());

       ui->txt_cin->setText("");
       ui->txt_nom->setText("");
       ui->txt_num->setText("");
       ui->txt_email->setText("");
       ui->txt_spc->setText("");
       ui->txt_adresse->setText("");

       QMessageBox::information(nullptr, QObject::tr("Fournisseur ajouté"),
                   QObject::tr("Ajout réussi\n"
                               "Clicker sur OK ."), QMessageBox::Accepted);


    }
    else {
       QMessageBox::critical(nullptr, QObject::tr("Pas d'ajout de fournisseur"),
               QObject::tr("L'ajout du fournisseur  est refusé.\n"
                           "Clicker sur Abort ."), QMessageBox::Abort);
   }

}



void MainWindow::on_pushButton_2_clicked() //modification fournisseur
{
    QItemSelectionModel *select = ui->tablefournisseur->selectionModel();
    int id_f1 =select->selectedRows(0).value(0).data().toInt();

    int tel_f1=ui->txt_tel_f->text().toInt();
    QString nom_soc1 = ui->txt_nom_soc->text();
    QDateTime date_add_f1=ui->dateEdit_2->dateTime();
    QString email_f1 = ui->txt_email_f->text();
    QString specialite_f1 = ui->txt_spc->text();
    QString adresse_add_f1 = ui->txt_adresse_f->text();
    fournisseur tmpf(id_f1,nom_soc1,tel_f1,email_f1,date_add_f1,specialite_f1,adresse_add_f1);


    if(tmpf.modifier_fournisseur())
    {
        ui->tablefournisseur->setModel(tmpfournisseur.afficher());

        ui->txt_nom_soc->setText("");
        ui->txt_tel_f->setText("");
        ui->txt_email_f->setText("");
        ui->txt_spc->setText("");
        ui->txt_adresse_f->setText("");

        ui->statusbar->showMessage("Fournisseur modifiéé");
     }

}

void MainWindow::on_pushButton_suppr_f_clicked() //suppression fournisseur
{
    QItemSelectionModel *select = ui->tablefournisseur->selectionModel();
    int id_f =select->selectedRows(0).value(0).data().toInt();

    if(tmpfournisseur.supp_fournisseur(id_f))
    {
        ui->tablefournisseur->setModel(tmpfournisseur.afficher());
        ui->statusbar->showMessage("Fournisseur supprimé");
     }

}


void MainWindow::on_pushButton_pdf_clicked() //pdf fournisseur
{
        QString strStream;
        QTextStream out(&strStream);

        const int rowCount = ui->tablefournisseur->model()->rowCount();
        const int columnCount = ui->tablefournisseur->model()->columnCount();

        out <<  "<html>\n"
                "<head>\n"
                "<meta Content=\"Text/html; charset=Windows-1251\">\n"
             <<  QString("<title>%1</title>\n").arg("Title")
              <<  "</head>\n"

               <<"<body bgcolor=#88F5A6 link=#5000A0>\n"


               <<"<center> <H1>Liste des fournisseurs </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n"
        "</tr>\n";

        // headers
        out << "<thead><tr bgcolor=#2a9d8f>";
        for (int column = 0; column < columnCount; column++)
            if (!ui->tablefournisseur->isColumnHidden(column))
                out << QString("<th>%1</th>").arg(ui->tablefournisseur->model()->headerData(column, Qt::Horizontal).toString());
        out << "</tr></thead>\n";

        // data table
        for (int row = 0; row < rowCount; row++) {
            out << "<tr>";
            for (int column = 0; column < columnCount; column++) {
                if (!ui->tablefournisseur->isColumnHidden(column)) {
                    QString data = ui->tablefournisseur->model()->data(ui->tablefournisseur->model()->index(row, column)).toString().simplified();
                    out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                }
            }
            out << "</tr>\n";
        }
        out <<  "</table>\n"

                "</body>\n"
                "</tr>\n"
             "<img src='C:/Users/BNA/Desktop/Projet C++/bich2.png' width='614' height='425'>\n"
                "</html>\n";



            QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
            if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }
            QPrinter *printer=new  QPrinter(QPrinter::PrinterResolution);
            printer->setOutputFormat(QPrinter::PdfFormat);
            printer->setPaperSize(QPrinter::A4);
            printer->setOutputFileName(fileName);

            QTextDocument doc;
            doc.setHtml(strStream);
            doc.setPageSize(printer->pageRect().size());
            doc.print(printer);

            QPrinter *p=new QPrinter();
            QPrintDialog dialog(p,this);
            if(dialog.exec()== QDialog::Rejected)
            {
                return;
            }
}


void MainWindow::on_rech_bouton_returnPressed() //recherche fournisseur
{
    QString rech =ui->rech_bouton->text();
        ui->tablefournisseur->setModel(tmpfournisseur.rechercher(rech));
}

void MainWindow::on_pushButton_trier_fournisseur_clicked() //tri fournisseur
{
    //QSound::play("E:/Projet_CPP/omar/source/Mouse-Click.wav");
        if(ui->radioButton_id->isChecked())
        {
            ui->tablefournisseur->setModel(tmpfournisseur.trier_id());
        }
        else if(ui->radioButton_nom_soc->isChecked())
        {
            ui->tablefournisseur->setModel(tmpfournisseur.trier_nom_soc());
        }
        else if(ui->radioButton_spec->isChecked())
        {
           ui->tablefournisseur->setModel(tmpfournisseur.trier_specialite());
        }
}

EmailAddress* MainWindow::stringToEmail(const QString &str)
{
    int p1 = str.indexOf("<");
    int p2 = str.indexOf(">");

    if (p1 == -1)
    {
        // no name, only email address
        return new EmailAddress(str);
    }
    else
    {
        return new EmailAddress(str.mid(p1 + 1, p2 - p1 - 1), str.left(p1));
    }

}

void MainWindow::on_addAttachment_2_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFiles);


    if (dialog.exec())
        ui->attachment->addItems(dialog.selectedFiles());


}

void MainWindow::on_sendEmail_2_clicked()
{
    QString host = ui->host_2->text();
    int port = ui->port_2->value();
    bool ssl = ui->ssl_2->isChecked();
    bool auth = ui->auth_2->isChecked();
    QString user = ui->username_2->text();
    QString password = ui->password_2->text();

    EmailAddress *sender = stringToEmail(ui->sender_2->text());

    QStringList rcptStringList = ui->recipients_2->text().split(';');

    QString subject = ui->subject_2->text();
    QString html = ui->texteditor_2->toHtml();

    SmtpClient smtp (host, port, ssl ? SmtpClient::SslConnection : SmtpClient::TcpConnection);

    MimeMessage message;

    message.setSender(sender);
    message.setSubject(subject);

    for (int i = 0; i < rcptStringList.size(); ++i)
         message.addRecipient(stringToEmail(rcptStringList.at(i)));

    MimeHtml content;
    content.setHtml(html);

    message.addPart(&content);

    for (int i = 0; i < ui->attachment->count(); ++i)
    {
        message.addPart(new MimeAttachment(new QFile(ui->attachment->item(i)->text())));
    }

    if (!smtp.connectToHost())
    {
        errorMessage("Connection Failed");
        return;
    }

    if (auth)
        if (!smtp.login(user, password))
        {
            errorMessage("Authentification Failed");
            return;
        }

    if (!smtp.sendMail(message))
    {
        errorMessage("Mail sending failed");
        return;
    }
    else
    {
        QMessageBox okMessage (this);
        okMessage.setText("The email was succesfully sent.");
        okMessage.exec();
    }

    smtp.quit();

}

void MainWindow::errorMessage(const QString &message)
{
    QErrorMessage err (this);

    err.showMessage(message);

    err.exec();
}

void MainWindow::on_export_2_clicked() //export excel fournisseur
{

 //son->play();


        QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                                tr("Excel Files (*.xls)"));
                if (fileName.isEmpty())
                    return;

                ExportExcelObject obj(fileName, "mydata", ui->tablefournisseur);

                obj.addField(0, "1ID", "char(20)");
                obj.addField(1, "2Nom", "char(20)");
                obj.addField(2, "3Tel", "char(20)");
                obj.addField(3, "4Email", "char(20)");
                obj.addField(4, "5Date", "char(20)");
                obj.addField(5, "6Specialite", "char(20)");

                obj.addField(6, "7Adresse", "char(20)");



                int retVal = obj.export2Excel();

                if( retVal > 0)
                {
                    QMessageBox::information(this, tr("Done"),
                                             QString(tr("%1 records exported!")).arg(retVal)
                                             );
                }
}

/********************************** COMMANDES ACHAT ******************************************************/


void MainWindow::on_pushButton_3_clicked() //ajout commande achat
{
    bool test;

    int ID_ACHAT= ui->txt_cin_2->text().toInt();
    int ID_ING_COM_A=ui->txt_id_ing->text().toInt();
    QString NOM_SOC_ACHAT = ui->txt_nom_2->text();
    QDateTime DATE_AJOUT_ACHAT=ui->dateEdit_add->dateTime();
    QDateTime DATE_LIVR_ACHAT=ui->dateEdit_livr->dateTime();
    int QTE_ING_COM_A = ui->txt_qte->text().toInt();
    float PRIX_ACHAT = ui->txt_prix->text().toFloat();

    comm_achats ca(ID_ACHAT, NOM_SOC_ACHAT, ID_ING_COM_A, QTE_ING_COM_A, PRIX_ACHAT, DATE_AJOUT_ACHAT, DATE_LIVR_ACHAT);

    {test=ca.ajouter_comm_achat();}

   if(test) {

       ui->tablecommandes_a->setModel(tmpcomma.afficher_com_a());

       ui->txt_cin_2->setText("");
       ui->txt_nom_2->setText("");
       ui->txt_id_ing->setText("");
       ui->txt_qte->setText("");
       ui->txt_prix->setText("");

       QMessageBox::information(nullptr, QObject::tr("Commande achat ajoutée"),
                   QObject::tr("Ajout réussi\n"
                               "Clicker sur OK ."), QMessageBox::Accepted);


    }
    else {
       QMessageBox::critical(nullptr, QObject::tr("Pas d'ajout de la commande achat"),
               QObject::tr("L'ajout de la commande achat  est refusé.\n"
                           "Clicker sur Abort ."), QMessageBox::Abort);
   }
}

void MainWindow::on_pushButton_mod_com_clicked() //modification commande achat
{

    /*int ID_ACHAT;
    QString NOM_SOC_ACHAT;
    int ID_ING_COM_A;
    int QTE_ING_COM_A;
    float PRIX_ACHAT;
    QDateTime DATE_AJOUT_ACHAT;
    QDateTime DATE_LIVR_ACHAT; */

    QItemSelectionModel *select = ui->tablecommandes_a->selectionModel();
    int ID_ACHAT_1 =select->selectedRows(0).value(0).data().toInt();

    int ID_ING_COM_A_1=ui->txt_id_ing_mod->text().toInt();
    QString NOM_SOC_ACHAT_1 = ui->txt_nom_soc_mod->text();
    QDateTime DATE_AJOUT_ACHAT_1=ui->dateEdit_add_mod->dateTime();
    QDateTime DATE_LIVR_ACHAT_1=ui->dateEdit_livr_mod->dateTime();
    int QTE_ING_COM_A_1 = ui->txt_qte_mod->text().toInt();
    float PRIX_ACHAT_1 = ui->txt_prix_mod->text().toFloat();
    comm_achats tmpca(ID_ACHAT_1,NOM_SOC_ACHAT_1,ID_ING_COM_A_1,QTE_ING_COM_A_1,PRIX_ACHAT_1,DATE_AJOUT_ACHAT_1,DATE_LIVR_ACHAT_1);
    //int,QString,int,int,float,QDateTime,QDateTime

    if(tmpca.modifier_com_a())
    {
        ui->tablecommandes_a->setModel(tmpcomma.afficher_com_a());

        ui->txt_nom_soc_mod->setText("");
        ui->txt_id_ing_mod->setText("");
        ui->txt_qte_mod->setText("");
        ui->txt_prix_mod->setText("");

        ui->statusbar->showMessage("Commande achat modifiée");
     }
}

void MainWindow::on_pushButton_suppr_f_2_clicked() //supression commande achat
{
    QItemSelectionModel *select = ui->tablecommandes_a->selectionModel();
    int ID_ACHAT =select->selectedRows(0).value(0).data().toInt();

    if(tmpcomma.supp_com_a(ID_ACHAT))
    {
        ui->tablecommandes_a->setModel(tmpcomma.afficher_com_a());
        ui->statusbar->showMessage("Commande achat supprimée");
     }
}

void MainWindow::on_imprint_ca_clicked() //impression + pdf commandes achat
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->tablecommandes_a->model()->rowCount();
    const int columnCount = ui->tablecommandes_a->model()->columnCount();

    out <<  "<html>\n"
            "<head>\n"
            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
         <<  QString("<title>%1</title>\n").arg("Title")
          <<  "</head>\n"

           <<"<body bgcolor=#88F5A6 link=#5000A0>\n"


           <<"<center> <H1>Liste des commandes </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n"
    "</tr>\n";

    // headers
    out << "<thead><tr bgcolor=#2a9d8f>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tablecommandes_a->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tablecommandes_a->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tablecommandes_a->isColumnHidden(column)) {
                QString data = ui->tablecommandes_a->model()->data(ui->tablefournisseur->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"

            "</body>\n"
            "</tr>\n"
         "<img src='C:/Users/BNA/Desktop/Projet C++/bich2.png' width='400' height='200'>\n"
            "</html>\n";



        QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
        if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }
        QPrinter *printer=new  QPrinter(QPrinter::PrinterResolution);
        printer->setOutputFormat(QPrinter::PdfFormat);
        printer->setPaperSize(QPrinter::A4);
        printer->setOutputFileName(fileName);

        QTextDocument doc;
        doc.setHtml(strStream);
        doc.setPageSize(printer->pageRect().size());
        doc.print(printer);

        QPrinter *p=new QPrinter();
        QPrintDialog dialog(p,this);
        if(dialog.exec()== QDialog::Rejected)
        {
            return;
        }
}

void MainWindow::on_pushButton_trier_comm_clicked() //tri commandes achat
{
    if(ui->radioButton_id_2->isChecked())
    {
        ui->tablecommandes_a->setModel(tmpcomma.trier_id_ing_a());
    }
    else if(ui->radioButton_nom_soc_2->isChecked())
    {
        ui->tablecommandes_a->setModel(tmpcomma.trier_nom_soc_a());
    }
    else if(ui->radioButton_prix->isChecked())
    {
       ui->tablecommandes_a->setModel(tmpcomma.trier_prix_com_a());
    }
    else if(ui->radioButton_qte->isChecked())
    {
       ui->tablecommandes_a->setModel(tmpcomma.trier_qte_a());
    }
}

void MainWindow::on_rech_bouton_2_returnPressed()
{
    QString rech =ui->rech_bouton_2->text();
    ui->tablecommandes_a->setModel(tmpcomma.rechercher_com_a(rech));
}