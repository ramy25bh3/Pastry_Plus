#ifndef PRODUIT_INGREDIENT_H
#define PRODUIT_INGREDIENT_H

#include <QMainWindow>
#include "produit.h"
#include "ingredient.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Produit_ingredient; }
QT_END_NAMESPACE

class Produit_ingredient : public QMainWindow
{
    Q_OBJECT

public:
    Produit_ingredient(QWidget *parent = nullptr);
    ~Produit_ingredient();

private slots:

//********** PRODUIT ***********

    void on_ajouter_produit_clicked();

    void on_supprimer_produit_clicked();

    void on_modifier_produit_clicked();



     void on_afficher_produit_clicked(const QModelIndex &index);

//********** INGREDIENT ***********

    void on_ajouter_ingredient_clicked();

    void on_supprimer_ingredient_clicked();

    void on_modifier_ingredient_clicked();



    void on_afficher_ingredient_clicked(const QModelIndex &index);

//********* METIER ***********

    void on_trier_produit_clicked();

    void on_trier_ingredient_clicked();


    //void on_exporter_P_clicked();

    //void on_exporter_I_clicked();


    void on_chercher_produit_clicked();

    void on_chercher_ingredient_clicked();


    void on_stat_P_clicked();

    void on_stat_I_clicked();


    void on_excel_P_clicked();

    void on_excel_I_clicked();


    void on_PDF_P_clicked();

    void on_PDF_I_clicked();

private:
    Ui::Produit_ingredient *ui;
    Produit P;
    Ingredient I;
};
#endif // PRODUIT_INGREDIENT_H
