/*#ifndef STAT_H
#define STAT_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

#include <iostream>
#include <vector>

using namespace std;

QT_CHARTS_USE_NAMESPACE


namespace Ui {
class Stat;
}

class Stat : public QDialog
{
    Q_OBJECT

public:
    explicit Stat(QWidget *parent = nullptr);
    ~Stat();

    QChartView *chartView ;
    void choix_pie();

    //void stat_produit();

private:
    Ui::Stat *ui;
};

#endif // STAT_H

*/


//****************************************ahem

#ifndef STAT_H
#define STAT_H

#include <QDialog>
#include <iostream>
#include <QApplication>
#include <QMainWindow>
/*#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>*/
#include <QPainter>
#include <QSqlQuery>
#include <QtCharts>
#include <QChartView>
#include<QPieSeries>
using namespace std;
QT_CHARTS_USE_NAMESPACE
namespace Ui {
class stat;
}

class stat : public QDialog
{
    Q_OBJECT

public:
    explicit stat(QWidget *parent = nullptr);
    void Statistique() ;
       /*int Statistique_partie3() ;
       int Statistique_partie4() ;
        void paintEvent(QPaintEvent *) ;*/
    ~stat();

private slots:
    void on_hide_clicked();

   // void on_pushButton_clicked();

private:
    Ui::stat *ui;
};

#endif // STATS_H



