#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fournisseur.h"
#include "connexion.h"
#include <QSqlTableModel>
#include <QFileDialog>
#include <QDir>
#include <QTextStream>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void refreshw();
    void afficher();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_suppr_f_clicked();

    void on_pushButton_pdf_clicked();

    void on_rech_bouton_returnPressed();

    void on_pushButton_trier_fournisseur_clicked();

private:
    Ui::MainWindow *ui;
    fournisseur f;
    QSqlTableModel *model;
    fournisseur tmpfournisseur;

};
#endif // MAINWINDOW_H
