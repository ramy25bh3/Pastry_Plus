#include "stats.h"
#include "ui_stats.h"

Stats::Stats(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stats)
{
    ui->setupUi(this);
}

Stats::~Stats()
{
    delete ui;
}


void Stats::statistique_P()
{
    QPieSeries *series = new QPieSeries();
        QSqlQuery query;
        int count=0 ;
        QSqlQuery requete("SELECT * FROM Produit WHERE quantite_P=32") ;

        while(requete.next())
        {
            count++ ;
        }


         QSqlQuery query1;
         int count1=0 ;
         QSqlQuery requete1("SELECT * FROM Produit WHERE quantite_P=122") ;

         while(requete1.next())
         {
             count1++ ;
         }

         series->append("32",count);
         series->append("122",count1);


     QChart * chart_P =new QChart();

     chart_P-> addSeries(series);
     chart_P->setTitle("Statistique des produits par quantité ");

     QChartView *chartview= new QChartView (chart_P);
     chartview->setParent(ui->charts_P);
}

void Stats::on_hide_P_clicked()
{
   hide();
}




/*void Stats::statistique_I()
{
    QPieSeries *series = new QPieSeries();
        QSqlQuery query;
        int count=0 ;
        QSqlQuery requete("SELECT * FROM Ingredient WHERE quantite_I=23") ;

        while(requete.next())
        {
            count++ ;
        }


         QSqlQuery query1;
         int count1=0 ;
         QSqlQuery requete1("SELECT * FROM Ingredient WHERE quantite_I=159") ;

         while(requete1.next())
         {
             count1++ ;
         }

         series->append("23",count);
         series->append("159",count1);


     QChart * chart_I =new QChart();

     chart_I-> addSeries(series);
     chart_I->setTitle("Statistique des ingredients par quantité ");

     QChartView *chartview= new QChartView (chart_I);
     chartview->setParent(ui->charts_I);
}*/
