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
class stats;
}

class stats : public QDialog
{
    Q_OBJECT

public:
    explicit stats(QWidget *parent = nullptr);
    void statistique_P();
    void statistique_I();

    ~stats();

private slots:
    void on_hide_P_clicked();

private:
    Ui::stats *ui;
};

#endif // STATS_H
