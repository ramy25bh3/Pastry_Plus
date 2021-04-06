#ifndef STATS_H
#define STATS_H

#include <QDialog>
#include <iostream>
#include <QApplication>
#include <QMainWindow>
#include <QPainter>
#include <QSqlQuery>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>

using namespace std;
QT_CHARTS_USE_NAMESPACE

namespace Ui {
class Stats;
}

class Stats : public QDialog
{
    Q_OBJECT

public:
    explicit Stats(QWidget *parent = nullptr);

    void statistique_P();
    void statistique_I();

    ~Stats();

private slots:

    void on_hide_P_clicked();

private:
    Ui::Stats *ui;
};

#endif // STATS_H
