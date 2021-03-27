#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <vector>

class client
{
public:
    client();
    client(int,QString,QString,int,QString,QString,QString,int);
     bool ajouter_client();
     QSqlQueryModel * afficher();
     QSqlQueryModel * chercher(int,QString,QString );
     QSqlQueryModel * trier(int ,QString,QString,int);
       QSqlQueryModel * combobox();
     bool supp_client(int);
     bool modifier_client();

private:
    int cin;
    int tel;
    QString nom;
    QString prenom;
    int age;
    QString email;
    QString adresse;
    QString diabitique;

};

#endif // CLIENT_H
