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
     QString clicker1(int);
     QString clicker2(int);
     QString clicker3(int);
     QString clicker4(int);
     QString clicker5(int);
     QString clicker6(int);
     QString clicker7(int);


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
