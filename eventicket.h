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


    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::eventicket *ui;
};

#endif // EVENTICKET_H
