#ifndef CLIENTS_ACHATS_H
#define CLIENTS_ACHATS_H

#include <QDialog>
#include "client.h"
#include "achats.h"
namespace Ui {
class Clients_Achats;
}

class Clients_Achats : public QDialog
{
    Q_OBJECT

public:
     void refreshw();
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

private:
    Ui::Clients_Achats *ui;
    client c;
    achat a;
};

#endif // CLIENTS_ACHATS_H
