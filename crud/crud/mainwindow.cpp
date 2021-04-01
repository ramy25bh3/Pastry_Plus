#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QSqlQuery"
#include <QMessageBox>
#include <QSqlQueryModel>
#include<QDateTime>
#include<QDate>
#include <QPrinter>
#include <QPrintDialog>
#include <QFileDialog>
#include <QTextDocument>
#include "connexion.h"
#include "fournisseur.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tablefournisseur->setModel(tmpfournisseur.afficher());
    model=new QSqlTableModel;
    model->select();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()//ajout
{
    bool test;//= f.ajouter_fournisseur();

    int id_f= ui->txt_cin->text().toInt();
    int tel_f=ui->txt_num->text().toInt();
    QString nom_soc = ui->txt_nom->text();
    QDateTime date_add_f=ui->dateEdit->dateTime();
    QString email_f = ui->txt_email->text();
    QString specialite_f = ui->txt_spec->text();
    QString adresse_f = ui->txt_adresse->text();

    fournisseur f(id_f, nom_soc, tel_f, email_f, date_add_f, specialite_f, adresse_f);

{test=f.ajouter_fournisseur();}
   if(test) {
       QMessageBox::information(nullptr, QObject::tr("ajout  "),
                   QObject::tr("ajout terminer.\n"
                               "Clicker sur  accept ."), QMessageBox::Accepted);


}
else {
   QMessageBox::critical(nullptr, QObject::tr("ajout refuser"),
               QObject::tr("l ajout de compte  est refusé.\n"
                           "Clicker sur  Abort ."), QMessageBox::Abort);
   }

}

/*void MainWindow::on_pushButton_2_clicked()//affiche
{
refreshw();
 ui->tableView->setModel(f.afficher());
}*/


/*void MainWindow::on_pushButton_4_clicked() //supp
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
}*/

void MainWindow::on_pushButton_3_clicked()
{

     bool test;//= f.ajouter_fournisseur();

        int id_f= ui->txt_id->text().toInt();
        int tel_f=ui->txt_tel_f->text().toInt();
        QString nom_soc = ui->txt_nom_soc->text();
        QDateTime date_add_f=ui->dateEdit_2->dateTime();
        QString email_f = ui->txt_email_f->text();
        QString specialite_f = ui->txt_spc->text();
        QString adresse_f = ui->txt_adresse_f->text();

    if(test)
        {
            ui->tablefournisseur->setModel(tmpfournisseur.afficher());//refresh
            QMessageBox::information(nullptr, QObject::tr("Modifier un fournisseur !"),
                                     QObject::tr(" fournisseur modifiée ! \n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
        }

        else {

            QMessageBox::critical(nullptr, QObject::tr("Modifier un fournisseur"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);

    }}


void MainWindow::on_pushButton_2_clicked()
{
    int id_f1= ui->txt_id->text().toInt();
    int tel_f1=ui->txt_tel_f->text().toInt();
    QString nom_soc1 = ui->txt_nom_soc->text();
    QDateTime date_add_f1=ui->dateEdit_2->dateTime();
    QString email_f1 = ui->txt_email_f->text();
    QString specialite_f1 = ui->txt_spc->text();
    QString adresse_f1 = ui->txt_adresse_f->text();

    tmpfournisseur.modifier_fournisseur(id_f1, nom_soc1, tel_f1, email_f1 , date_add_f1,specialite_f1,adresse_f1);

    ui->tablefournisseur->setModel(tmpfournisseur.afficher());
    ui->txt_id->setText("");
    ui->txt_nom_soc->setText("");
    ui->txt_tel_f->setText("");
    ui->txt_email_f->setText("");
    ui->txt_spc->setText("");
    ui->txt_adresse_f->setText("");
}

void MainWindow::on_pushButton_suppr_f_clicked()
{
    QItemSelectionModel *select = ui->tablefournisseur->selectionModel();
    int id_f =select->selectedRows(0).value(0).data().toInt();

    if(tmpfournisseur.supp_fournisseur(id_f))
    {
        ui->tablefournisseur->setModel(tmpfournisseur.afficher());
        ui->statusbar->showMessage("Fournisseur supprimé");
     }

}


void MainWindow::on_pushButton_pdf_clicked()
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


void MainWindow::on_rech_bouton_returnPressed()
{
    QString rech =ui->rech_bouton->text();
        ui->tablefournisseur->setModel(tmpfournisseur.rechercher(rech));
}

void MainWindow::on_pushButton_trier_fournisseur_clicked()
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
