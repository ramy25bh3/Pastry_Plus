#ifndef EVENTICKET_H
#define EVENTICKET_H

#include <QDialog>
#include "evenement.h"

namespace Ui {
class eventicket;
}

class eventicket : public QDialog
{
    Q_OBJECT

public:
    explicit eventicket(QWidget *parent = nullptr);
    ~eventicket();
    void refreshw();

private slots:


//********** evenement ***********

    void on_supprimer_botton_clicked();

    void on_modifier_botton_clicked();

    void on_ajouter_botton_clicked();

    void on_afficher_botton_clicked();


//********** ticket ***********




//********** metiers ***********

private:
    Ui::eventicket *ui;
    evenement E;
};

#endif // EVENTICKET_H
