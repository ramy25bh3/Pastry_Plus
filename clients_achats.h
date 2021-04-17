#ifndef CLIENTS_ACHATS_H
#define CLIENTS_ACHATS_H

#include <QDialog>
#include "client.h"
#include "achats.h"
#include "stmp.h"
#include <QFileDialog>
namespace Ui {
class Clients_Achats;
void refreshw();
}

class Clients_Achats : public QDialog
{
    Q_OBJECT

public:
     void refreshw();
     void calcul_prix();
    explicit Clients_Achats(QWidget *parent = nullptr);
    ~Clients_Achats();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_11_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_tableView_2_clicked(const QModelIndex &index);

    void on_pushButton_12_clicked();

private:
    Ui::Clients_Achats *ui;
    client c;
    achat a;
    QStringList files;
};

#endif // CLIENTS_ACHATS_H
