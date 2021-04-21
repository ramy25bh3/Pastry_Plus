#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QWidget>
#include <QItemSelectionModel>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QRegularExpression>
#include <QTableWidgetItem>
#include <QDebug>
#include <QSqlTableModel>
#include "employe.h"
#include <QAbstractItemView>
#include <QRegExp>
#include <QFileDialog>
#include <QSortFilterProxyModel>
#include <QTextDocument>
#include <QPropertyAnimation>
#include <QFileDialog>




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonAjouterEmploye_clicked();

    void on_pushButtonVider_clicked();

    void on_pushButtonMenu_clicked();

    void on_pushButtonModifier_clicked();

    void on_pushButtonSupprimer_clicked();

    void on_pushButtonRechercher_clicked();

    void on_pushButtonStats_clicked();

    void on_pushButtonExportPDF_clicked();

    void on_pushButtonPDF_2_clicked();

    void on_pushButtonPDF_clicked();

    void on_pushButtonTrier_clicked();

    void on_ajouter_clicked();

    void on_pushButtonEdit_clicked();

    void on_pushButtonSuppr_clicked();

    void on_pushButtonStatistiques_clicked();

    void on_pushButtonRechercherConge_clicked();

    void on_consulter_conge_clicked();

    void on_pushButton_afficher_clicked();

    void on_pushButton_stat_clicked();

    void on_label_15_linkActivated(const QString &link);

    void on_label_stat_1_linkActivated(const QString &link);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    employe tmpemploye;
     //  conge tmpconge;
       QRegExp mail_regex;
       QRegExp nom_regex,tel_regex,salaire_regex, id_regex;
};
#endif // MAINWINDOW_H
