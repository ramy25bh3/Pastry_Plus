/*#include "stat.h"
#include "ui_stat.h"

Stat::Stat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stat)
{
    ui->setupUi(this);
}

Stat::~Stat()
{
    delete ui;
}




void stat::stat()
{

    vector<QString> liste_produit;
    vector<qreal> count;
    QSqlQuery q1,q2;
    qreal tot=0,c;
    q1.prepare("SELECT * FROM Produit");
    q1.exec();
    while (q1.next()){
        liste_produit.push_back(q1.value(1).toString());
        tot++;
    }


    for (auto i = liste_produit.begin(); i != liste_produit.end(); ++i) {
         q2.prepare("SELECT * FROM Produit where MISSION = :m");
         q2.bindValue(":m", *i);
         q2.exec();
         c=0;
         while (q2.next()){c++;}
         count.push_back(c/tot);

    }


// Define slices and percentage of whole they take up
QPieSeries *series = new QPieSeries();
for( int i = 0; i < liste_missions.size(); i++)
series->append(liste_missions[i] ,count[i]);


// Create the chart widget
QChart *chart = new QChart();

// Add data to chart with title and show legend
chart->addSeries(series);
chart->legend()->show();


// Used to display the chart
chartView = new QChartView(chart,ui->label_stat);
chartView->setRenderHint(QPainter::Antialiasing);
chartView->setMinimumSize(400,400);

chartView->show();
}
*/

//***************************************ahleeem

#include "stat.h"

#include "ui_stat.h"
//#include <QDialog>
//#include <QSqlQuery>

stat::stat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stat)
{
    ui->setupUi(this);
}

stat::~stat()
{
    delete ui;
}


        void stat::Statistique()
      { QPieSeries *series = new QPieSeries();
            QSqlQuery query;
        int count=0 ;
        QSqlQuery requete("select * from Produit where quantite_P=11") ;
        while(requete.next())
        {
                count++ ;
        }


        QSqlQuery query1;
          int count1=0 ;
          QSqlQuery requete1("select * from Produit where quantite_P=50") ;
          while(requete1.next())
          {
                  count1++ ;
          }
          series->append(11,count);
          series->append(50,count1);

          QChart * chart =new QChart();
          chart-> addSeries(series);
          chart->setTitle("Statistiques des produits par quantité ");

          QChartView *chartview= new QChartView (chart);
          chartview->setParent(ui->frame_charts);
        }



void stat::on_hide_clicked()
{
    hide();
}




