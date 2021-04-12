#include "gestion_evenement.h"
#include "ui_gestion_evenement.h"
#include "QPrintDialog"

gestion_evenement::gestion_evenement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestion_evenement)
{
    ui->setupUi(this);
    show_tables();
}

gestion_evenement::~gestion_evenement()
{
    delete ui;
}

void gestion_evenement::show_tables()
{
    show_evenement();
    show_ticket();
}
/*********************************** equipement ****************************/

//************************ crud

//ajout
void gestion_evenement::on_actionadd_evenement_triggered()
{
    //creation instance
        add_evenement ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        QString s2=ac.nom();
        QString s3=ac.date();
        QString s4=ac.produit();
        QString x=ac.lieu();

        //ajout
        evenement mc(s1,s2,s3,x,s4);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_evenement();
}

//selection
void gestion_evenement::on_table_evenement_clicked(const QModelIndex &index)
{
    selected_evenement=ui->table_evenement->model()->data(index).toString();
}

//modification
void gestion_evenement::on_table_evenement_doubleClicked(const QModelIndex &index)
{
    add_evenement ac(this);

  ac.fill_form(selected_evenement);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;
  //recuperation des donnees
  QString s2=ac.nom();
  QString s3=ac.date();
  QString s4=ac.produit();
  QString x=ac.lieu();

    //mofication
    evenement mc(selected_evenement,s2,s3,x,s4);
    mc.modifier(selected_evenement);

    //refresh du tableau (affichage)
    show_evenement();

}

//suppression
void gestion_evenement::on_actiondelete_evenement_triggered()
{
    evenement mc;
  mc.supprimer(selected_evenement);

 //refresh du tableau (affichage)
   show_evenement();
}

//affichage
void gestion_evenement::show_evenement()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_evenement = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_evenement->setSourceModel(tmp_evenement.afficher());

     //pour la recherche
        proxy_evenement->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)

        //remplissage tableau avec le masque
        ui->table_evenement->setModel(proxy_evenement);
}


//************************ metiers


//recherche dynamique
void gestion_evenement::on_evenement_sel_col_currentIndexChanged(const QString &arg1)
{
    sel_col_evenement=ui->evenement_sel_col->currentIndex()-1;
    proxy_evenement->setFilterKeyColumn(sel_col_evenement); // chercher dans tout le tableau (-1) ou donner le numero de la colone
}
void gestion_evenement::on_rech_evenement_textChanged(const QString &arg1)
{
    proxy_evenement->setFilterFixedString(arg1);
}


/*********************************** ticket ****************************/

//************************ crud

//ajout
void gestion_evenement::on_actionadd_ticket_triggered()
{
    //creation instance
        add_ticket ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;


      //recuperation des donnees
        QString s1=ac.id();
        QString s2=ac.type();
        QString s3=ac.prix();
        QString s4=ac.heure();
        QString x=ac.date();


        //ajout
        ticket mc(s1,s2,s3,x,s4);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_ticket();
}


//selection
void gestion_evenement::on_table_ticket_clicked(const QModelIndex &index)
{
    selected_ticket=ui->table_ticket->model()->data(index).toString();
}

//modification
void gestion_evenement::on_table_ticket_doubleClicked(const QModelIndex &index)
{
    add_ticket ac(this);

  ac.fill_form(selected_ticket);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;

  //recuperation des donnees
  QString s2=ac.type();
  QString s3=ac.prix();
  QString s4=ac.heure();
 QString x=ac.date();

    //mofication
    ticket mc(selected_ticket,s2,s3,x,s4);
    mc.modifier(selected_ticket);

    //refresh du tableau (affichage)
    show_ticket();

}


//suppression
void gestion_evenement::on_actiondelete_ticket_triggered()
{
    ticket mc;
  mc.supprimer(selected_ticket);

 //refresh du tableau (affichage)
  show_ticket();
}

//affichage
void gestion_evenement::show_ticket()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_ticket = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_ticket->setSourceModel(tmp_ticket.afficher());

     //pour la recherche
        proxy_ticket->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)

        //remplissage tableau avec le masque
        ui->table_ticket->setModel(proxy_ticket);
}


//************************ metiers

//recherche dynamique
void gestion_evenement::on_ticket_sel_col_currentIndexChanged(const QString &arg1)
{
    sel_col_ticket=ui->ticket_sel_col->currentIndex()-1;
    proxy_ticket->setFilterKeyColumn(sel_col_ticket); // chercher dans tout le tableau (-1) ou donner le numero de la colone

}
void gestion_evenement::on_rech_ticket_textChanged(const QString &arg1)
{
    proxy_ticket->setFilterFixedString(arg1);
}

//imprimer
void gestion_evenement::on_pushButton_2_clicked()
{
        QString strStream;
        QTextStream out(&strStream);

        const int rowCount = ui->table_ticket->model()->rowCount();
        const int columnCount =ui->table_ticket->model()->columnCount();

        out <<  "<html>\n"
            "<head>\n"
            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
            <<  QString("<title>%1</title>\n").arg("strTitle")
            <<  "</head>\n"
            "<body bgcolor=#ffffff link=#5000A0>\n"
            "<table border=1 cellspacing=0 cellpadding=2>\n";

        // headers
        out << "<thead><tr bgcolor=#f0f0f0>";
        for (int column = 0; column < columnCount; column++)
            if (ui->table_ticket->isColumnHidden(column))
                out << QString("<th>%1</th>").arg(ui->table_ticket->model()->headerData(column, Qt::Horizontal).toString());
        out << "</tr></thead>\n";

        // data table
        for (int row = 0; row < rowCount; row++) {
            out << "<tr>";
            for (int column = 0; column < columnCount; column++) {
                if (!ui->table_ticket->isColumnHidden(column)) {
                    QString data = ui->table_ticket->model()->data(ui->table_ticket->model()->index(row, column)).toString().simplified();
                    out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                }
            }
            out << "</tr>\n";
        }
        out <<  "</table>\n"
            "</body>\n"
            "</html>\n";

        QTextDocument *document = new QTextDocument();
        document->setHtml(strStream);

        QPrinter printer;

        QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
        if (dialog->exec() == QDialog::Accepted) {
            document->print(&printer);
        }

        delete document;
}
