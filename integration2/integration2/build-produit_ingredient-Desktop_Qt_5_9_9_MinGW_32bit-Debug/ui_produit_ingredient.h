/********************************************************************************
** Form generated from reading UI file 'produit_ingredient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUIT_INGREDIENT_H
#define UI_PRODUIT_INGREDIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Produit_ingredient
{
public:
    QAction *produit1;
    QAction *produit2;
    QAction *produit3;
    QWidget *centralwidget;
    QTabWidget *produit_ingredient;
    QWidget *tab;
    QTabWidget *produit;
    QWidget *tab_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *identifiant_P;
    QLineEdit *nom_P;
    QLineEdit *quantite_P;
    QLineEdit *prix_P;
    QPushButton *ajouter_produit;
    QComboBox *type_P;
    QLabel *msg_P;
    QWidget *tab_5;
    QLabel *label_7;
    QLineEdit *identifiant_P_supp;
    QPushButton *supprimer_produit;
    QLabel *label_8;
    QWidget *tab_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_15;
    QLineEdit *identifiant_P_modif;
    QLineEdit *nom_P_modif;
    QLineEdit *quantite_P_modif;
    QLineEdit *prix_P_modif;
    QLineEdit *type_P_modif;
    QPushButton *modifier_produit;
    QTableView *afficher_produit;
    QLabel *label_16;
    QRadioButton *nom_P_trie;
    QRadioButton *quantite_P_trie;
    QRadioButton *prix_P_trie;
    QLabel *label_17;
    QLineEdit *identifiant_P_rech;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *type_P_rech;
    QPushButton *chercher_produit;
    QPushButton *trier_produit;
    QLabel *logo_P;
    QPushButton *stat_P;
    QPushButton *excel_P;
    QPushButton *PDF_P;
    QLabel *date_P;
    QLabel *digital_date_P;
    QLabel *bg_P;
    QWidget *tab_2;
    QTabWidget *ingredient;
    QWidget *tab_7;
    QLabel *label_26;
    QLineEdit *identifiant_I;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLineEdit *nom_I;
    QLineEdit *quantite_I;
    QLineEdit *prix_I;
    QPushButton *ajouter_ingredient;
    QComboBox *type_I;
    QLabel *msg_I;
    QWidget *tab_9;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *identifiant_I_supp;
    QPushButton *supprimer_ingredient;
    QWidget *tab_10;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLineEdit *identifiant_I_modif;
    QLineEdit *quantite_I_modif;
    QLineEdit *nom_I_modif;
    QLineEdit *prix_I_modif;
    QPushButton *modifier_ingredient;
    QLineEdit *type_I_modif;
    QTableView *afficher_ingredient;
    QLabel *label_20;
    QRadioButton *nom_I_trie;
    QRadioButton *quantite_I_trie;
    QRadioButton *prix_I_trie;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *identifiant_I_rech;
    QLineEdit *type_I_rech;
    QPushButton *chercher_ingredient;
    QPushButton *trier_ingredient;
    QLabel *logo_I;
    QPushButton *stat_I;
    QPushButton *excel_I;
    QPushButton *PDF_I;
    QLabel *date_I;
    QLabel *digital_date_I;
    QWidget *tab_4;
    QLabel *label_6;
    QLabel *arduino;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Produit_ingredient)
    {
        if (Produit_ingredient->objectName().isEmpty())
            Produit_ingredient->setObjectName(QStringLiteral("Produit_ingredient"));
        Produit_ingredient->resize(1211, 567);
        produit1 = new QAction(Produit_ingredient);
        produit1->setObjectName(QStringLiteral("produit1"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/gateau.png"), QSize(), QIcon::Normal, QIcon::Off);
        produit1->setIcon(icon);
        produit2 = new QAction(Produit_ingredient);
        produit2->setObjectName(QStringLiteral("produit2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/pate.png"), QSize(), QIcon::Normal, QIcon::Off);
        produit2->setIcon(icon1);
        produit3 = new QAction(Produit_ingredient);
        produit3->setObjectName(QStringLiteral("produit3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/sale.png"), QSize(), QIcon::Normal, QIcon::Off);
        produit3->setIcon(icon2);
        centralwidget = new QWidget(Produit_ingredient);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        produit_ingredient = new QTabWidget(centralwidget);
        produit_ingredient->setObjectName(QStringLiteral("produit_ingredient"));
        produit_ingredient->setGeometry(QRect(0, 0, 1181, 531));
        produit_ingredient->setStyleSheet(QStringLiteral(""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        produit = new QTabWidget(tab);
        produit->setObjectName(QStringLiteral("produit"));
        produit->setGeometry(QRect(20, 30, 411, 451));
        produit->setStyleSheet(QStringLiteral(""));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 40, 71, 16));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 100, 81, 16));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 140, 101, 16));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 180, 81, 16));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 220, 81, 16));
        identifiant_P = new QLineEdit(tab_3);
        identifiant_P->setObjectName(QStringLiteral("identifiant_P"));
        identifiant_P->setGeometry(QRect(200, 40, 113, 22));
        nom_P = new QLineEdit(tab_3);
        nom_P->setObjectName(QStringLiteral("nom_P"));
        nom_P->setGeometry(QRect(200, 100, 113, 22));
        quantite_P = new QLineEdit(tab_3);
        quantite_P->setObjectName(QStringLiteral("quantite_P"));
        quantite_P->setGeometry(QRect(200, 140, 113, 22));
        prix_P = new QLineEdit(tab_3);
        prix_P->setObjectName(QStringLiteral("prix_P"));
        prix_P->setGeometry(QRect(200, 180, 113, 22));
        ajouter_produit = new QPushButton(tab_3);
        ajouter_produit->setObjectName(QStringLiteral("ajouter_produit"));
        ajouter_produit->setGeometry(QRect(110, 340, 131, 41));
        ajouter_produit->setStyleSheet(QStringLiteral(""));
        type_P = new QComboBox(tab_3);
        type_P->setObjectName(QStringLiteral("type_P"));
        type_P->setGeometry(QRect(200, 220, 111, 22));
        msg_P = new QLabel(tab_3);
        msg_P->setObjectName(QStringLiteral("msg_P"));
        msg_P->setGeometry(QRect(85, 70, 291, 20));
        produit->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 120, 71, 16));
        identifiant_P_supp = new QLineEdit(tab_5);
        identifiant_P_supp->setObjectName(QStringLiteral("identifiant_P_supp"));
        identifiant_P_supp->setGeometry(QRect(180, 120, 113, 22));
        supprimer_produit = new QPushButton(tab_5);
        supprimer_produit->setObjectName(QStringLiteral("supprimer_produit"));
        supprimer_produit->setGeometry(QRect(120, 200, 121, 41));
        supprimer_produit->setStyleSheet(QStringLiteral(""));
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 50, 281, 31));
        produit->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_9 = new QLabel(tab_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 100, 71, 16));
        label_10 = new QLabel(tab_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 160, 81, 16));
        label_11 = new QLabel(tab_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(80, 200, 101, 16));
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(80, 240, 81, 16));
        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(80, 280, 81, 16));
        label_15 = new QLabel(tab_6);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(60, 40, 291, 31));
        identifiant_P_modif = new QLineEdit(tab_6);
        identifiant_P_modif->setObjectName(QStringLiteral("identifiant_P_modif"));
        identifiant_P_modif->setGeometry(QRect(190, 100, 113, 22));
        nom_P_modif = new QLineEdit(tab_6);
        nom_P_modif->setObjectName(QStringLiteral("nom_P_modif"));
        nom_P_modif->setGeometry(QRect(190, 160, 113, 22));
        quantite_P_modif = new QLineEdit(tab_6);
        quantite_P_modif->setObjectName(QStringLiteral("quantite_P_modif"));
        quantite_P_modif->setGeometry(QRect(190, 200, 113, 22));
        prix_P_modif = new QLineEdit(tab_6);
        prix_P_modif->setObjectName(QStringLiteral("prix_P_modif"));
        prix_P_modif->setGeometry(QRect(190, 240, 113, 22));
        type_P_modif = new QLineEdit(tab_6);
        type_P_modif->setObjectName(QStringLiteral("type_P_modif"));
        type_P_modif->setGeometry(QRect(190, 280, 113, 22));
        modifier_produit = new QPushButton(tab_6);
        modifier_produit->setObjectName(QStringLiteral("modifier_produit"));
        modifier_produit->setGeometry(QRect(130, 367, 131, 41));
        modifier_produit->setStyleSheet(QStringLiteral(""));
        produit->addTab(tab_6, QString());
        afficher_produit = new QTableView(tab);
        afficher_produit->setObjectName(QStringLiteral("afficher_produit"));
        afficher_produit->setGeometry(QRect(460, 200, 651, 191));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(480, 80, 161, 20));
        label_16->setStyleSheet(QStringLiteral(""));
        nom_P_trie = new QRadioButton(tab);
        nom_P_trie->setObjectName(QStringLiteral("nom_P_trie"));
        nom_P_trie->setGeometry(QRect(640, 80, 121, 20));
        quantite_P_trie = new QRadioButton(tab);
        quantite_P_trie->setObjectName(QStringLiteral("quantite_P_trie"));
        quantite_P_trie->setGeometry(QRect(640, 120, 141, 20));
        prix_P_trie = new QRadioButton(tab);
        prix_P_trie->setObjectName(QStringLiteral("prix_P_trie"));
        prix_P_trie->setGeometry(QRect(640, 160, 111, 20));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(880, 80, 191, 21));
        label_17->setStyleSheet(QStringLiteral("color: rgb(255, 85, 0);"));
        identifiant_P_rech = new QLineEdit(tab);
        identifiant_P_rech->setObjectName(QStringLiteral("identifiant_P_rech"));
        identifiant_P_rech->setGeometry(QRect(960, 120, 71, 22));
        identifiant_P_rech->setStyleSheet(QLatin1String("QLineEdit{\n"
"\n"
"border: 1.5px solid rgb(85, 0, 127);\n"
"border-radius: 10px;\n"
"color:#ffffff;\n"
"background:rgb(255, 85, 0);\n"
"\n"
"}"));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(880, 120, 81, 16));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(880, 160, 56, 16));
        type_P_rech = new QLineEdit(tab);
        type_P_rech->setObjectName(QStringLiteral("type_P_rech"));
        type_P_rech->setGeometry(QRect(960, 160, 71, 22));
        type_P_rech->setStyleSheet(QLatin1String("QLineEdit{\n"
"\n"
"border: 1.5px solid rgb(85, 0, 127);\n"
"border-radius: 10px;\n"
"color:#ffffff;\n"
"background:rgb(255, 85, 0);\n"
"\n"
"}"));
        chercher_produit = new QPushButton(tab);
        chercher_produit->setObjectName(QStringLiteral("chercher_produit"));
        chercher_produit->setGeometry(QRect(1050, 137, 91, 31));
        chercher_produit->setStyleSheet(QStringLiteral(""));
        trier_produit = new QPushButton(tab);
        trier_produit->setObjectName(QStringLiteral("trier_produit"));
        trier_produit->setGeometry(QRect(520, 130, 71, 31));
        trier_produit->setStyleSheet(QStringLiteral(""));
        logo_P = new QLabel(tab);
        logo_P->setObjectName(QStringLiteral("logo_P"));
        logo_P->setGeometry(QRect(1060, 10, 101, 51));
        stat_P = new QPushButton(tab);
        stat_P->setObjectName(QStringLiteral("stat_P"));
        stat_P->setGeometry(QRect(910, 440, 161, 41));
        stat_P->setStyleSheet(QStringLiteral(""));
        excel_P = new QPushButton(tab);
        excel_P->setObjectName(QStringLiteral("excel_P"));
        excel_P->setGeometry(QRect(640, 440, 121, 41));
        excel_P->setStyleSheet(QStringLiteral(""));
        PDF_P = new QPushButton(tab);
        PDF_P->setObjectName(QStringLiteral("PDF_P"));
        PDF_P->setGeometry(QRect(492, 440, 131, 41));
        PDF_P->setStyleSheet(QStringLiteral(""));
        date_P = new QLabel(tab);
        date_P->setObjectName(QStringLiteral("date_P"));
        date_P->setGeometry(QRect(750, 10, 231, 31));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        date_P->setFont(font);
        digital_date_P = new QLabel(tab);
        digital_date_P->setObjectName(QStringLiteral("digital_date_P"));
        digital_date_P->setGeometry(QRect(790, 30, 151, 31));
        QFont font1;
        font1.setPointSize(30);
        digital_date_P->setFont(font1);
        bg_P = new QLabel(tab);
        bg_P->setObjectName(QStringLiteral("bg_P"));
        bg_P->setGeometry(QRect(10, 10, 1161, 481));
        bg_P->setPixmap(QPixmap(QString::fromUtf8(":/image/bg.jpg")));
        produit_ingredient->addTab(tab, QString());
        bg_P->raise();
        produit->raise();
        afficher_produit->raise();
        label_16->raise();
        nom_P_trie->raise();
        quantite_P_trie->raise();
        prix_P_trie->raise();
        label_17->raise();
        identifiant_P_rech->raise();
        label_18->raise();
        label_19->raise();
        type_P_rech->raise();
        chercher_produit->raise();
        trier_produit->raise();
        logo_P->raise();
        stat_P->raise();
        excel_P->raise();
        PDF_P->raise();
        date_P->raise();
        digital_date_P->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        ingredient = new QTabWidget(tab_2);
        ingredient->setObjectName(QStringLiteral("ingredient"));
        ingredient->setGeometry(QRect(20, 30, 451, 441));
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_26 = new QLabel(tab_7);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(90, 50, 71, 16));
        identifiant_I = new QLineEdit(tab_7);
        identifiant_I->setObjectName(QStringLiteral("identifiant_I"));
        identifiant_I->setGeometry(QRect(220, 50, 113, 22));
        label_27 = new QLabel(tab_7);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(90, 120, 101, 16));
        label_28 = new QLabel(tab_7);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(90, 160, 121, 16));
        label_29 = new QLabel(tab_7);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(90, 200, 101, 16));
        label_30 = new QLabel(tab_7);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(90, 240, 101, 16));
        nom_I = new QLineEdit(tab_7);
        nom_I->setObjectName(QStringLiteral("nom_I"));
        nom_I->setGeometry(QRect(220, 120, 113, 22));
        quantite_I = new QLineEdit(tab_7);
        quantite_I->setObjectName(QStringLiteral("quantite_I"));
        quantite_I->setGeometry(QRect(220, 160, 113, 22));
        prix_I = new QLineEdit(tab_7);
        prix_I->setObjectName(QStringLiteral("prix_I"));
        prix_I->setGeometry(QRect(220, 200, 113, 22));
        ajouter_ingredient = new QPushButton(tab_7);
        ajouter_ingredient->setObjectName(QStringLiteral("ajouter_ingredient"));
        ajouter_ingredient->setGeometry(QRect(150, 340, 121, 41));
        ajouter_ingredient->setStyleSheet(QStringLiteral(""));
        type_I = new QComboBox(tab_7);
        type_I->setObjectName(QStringLiteral("type_I"));
        type_I->setGeometry(QRect(220, 240, 111, 22));
        msg_I = new QLabel(tab_7);
        msg_I->setObjectName(QStringLiteral("msg_I"));
        msg_I->setGeometry(QRect(85, 80, 261, 20));
        ingredient->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_24 = new QLabel(tab_9);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(90, 60, 311, 31));
        label_25 = new QLabel(tab_9);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(110, 130, 71, 16));
        identifiant_I_supp = new QLineEdit(tab_9);
        identifiant_I_supp->setObjectName(QStringLiteral("identifiant_I_supp"));
        identifiant_I_supp->setGeometry(QRect(210, 130, 113, 22));
        supprimer_ingredient = new QPushButton(tab_9);
        supprimer_ingredient->setObjectName(QStringLiteral("supprimer_ingredient"));
        supprimer_ingredient->setGeometry(QRect(150, 200, 121, 41));
        supprimer_ingredient->setStyleSheet(QStringLiteral(""));
        ingredient->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_32 = new QLabel(tab_10);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(90, 40, 301, 31));
        label_33 = new QLabel(tab_10);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(100, 90, 71, 16));
        label_34 = new QLabel(tab_10);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(100, 150, 101, 16));
        label_35 = new QLabel(tab_10);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(100, 190, 121, 16));
        label_36 = new QLabel(tab_10);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(100, 230, 101, 16));
        label_37 = new QLabel(tab_10);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(100, 270, 101, 16));
        identifiant_I_modif = new QLineEdit(tab_10);
        identifiant_I_modif->setObjectName(QStringLiteral("identifiant_I_modif"));
        identifiant_I_modif->setGeometry(QRect(230, 90, 113, 22));
        quantite_I_modif = new QLineEdit(tab_10);
        quantite_I_modif->setObjectName(QStringLiteral("quantite_I_modif"));
        quantite_I_modif->setGeometry(QRect(230, 190, 113, 22));
        nom_I_modif = new QLineEdit(tab_10);
        nom_I_modif->setObjectName(QStringLiteral("nom_I_modif"));
        nom_I_modif->setGeometry(QRect(230, 150, 113, 22));
        prix_I_modif = new QLineEdit(tab_10);
        prix_I_modif->setObjectName(QStringLiteral("prix_I_modif"));
        prix_I_modif->setGeometry(QRect(230, 230, 113, 22));
        modifier_ingredient = new QPushButton(tab_10);
        modifier_ingredient->setObjectName(QStringLiteral("modifier_ingredient"));
        modifier_ingredient->setGeometry(QRect(160, 347, 131, 41));
        modifier_ingredient->setStyleSheet(QStringLiteral(""));
        type_I_modif = new QLineEdit(tab_10);
        type_I_modif->setObjectName(QStringLiteral("type_I_modif"));
        type_I_modif->setGeometry(QRect(230, 270, 113, 22));
        ingredient->addTab(tab_10, QString());
        afficher_ingredient = new QTableView(tab_2);
        afficher_ingredient->setObjectName(QStringLiteral("afficher_ingredient"));
        afficher_ingredient->setGeometry(QRect(500, 200, 621, 201));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(520, 70, 171, 21));
        label_20->setStyleSheet(QStringLiteral(""));
        nom_I_trie = new QRadioButton(tab_2);
        nom_I_trie->setObjectName(QStringLiteral("nom_I_trie"));
        nom_I_trie->setGeometry(QRect(690, 70, 121, 20));
        quantite_I_trie = new QRadioButton(tab_2);
        quantite_I_trie->setObjectName(QStringLiteral("quantite_I_trie"));
        quantite_I_trie->setGeometry(QRect(690, 110, 151, 20));
        prix_I_trie = new QRadioButton(tab_2);
        prix_I_trie->setObjectName(QStringLiteral("prix_I_trie"));
        prix_I_trie->setGeometry(QRect(690, 150, 121, 20));
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(890, 70, 201, 21));
        label_21->setStyleSheet(QStringLiteral("color: rgb(255, 85, 0);"));
        label_22 = new QLabel(tab_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(900, 110, 81, 16));
        label_23 = new QLabel(tab_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(900, 150, 56, 16));
        identifiant_I_rech = new QLineEdit(tab_2);
        identifiant_I_rech->setObjectName(QStringLiteral("identifiant_I_rech"));
        identifiant_I_rech->setGeometry(QRect(980, 110, 71, 22));
        identifiant_I_rech->setStyleSheet(QLatin1String("QLineEdit{\n"
"\n"
"border: 1.5px solid rgb(85, 0, 127);\n"
"border-radius: 10px;\n"
"color:#ffffff;\n"
"background:rgb(255, 85, 0);\n"
"\n"
"}"));
        type_I_rech = new QLineEdit(tab_2);
        type_I_rech->setObjectName(QStringLiteral("type_I_rech"));
        type_I_rech->setGeometry(QRect(980, 150, 71, 22));
        type_I_rech->setStyleSheet(QLatin1String("QLineEdit{\n"
"\n"
"border: 1.5px solid rgb(85, 0, 127);\n"
"border-radius: 10px;\n"
"color:#ffffff;\n"
"background:rgb(255, 85, 0);\n"
"\n"
"}"));
        chercher_ingredient = new QPushButton(tab_2);
        chercher_ingredient->setObjectName(QStringLiteral("chercher_ingredient"));
        chercher_ingredient->setGeometry(QRect(1060, 130, 91, 31));
        chercher_ingredient->setStyleSheet(QStringLiteral(""));
        trier_ingredient = new QPushButton(tab_2);
        trier_ingredient->setObjectName(QStringLiteral("trier_ingredient"));
        trier_ingredient->setGeometry(QRect(550, 120, 81, 31));
        trier_ingredient->setStyleSheet(QStringLiteral(""));
        logo_I = new QLabel(tab_2);
        logo_I->setObjectName(QStringLiteral("logo_I"));
        logo_I->setGeometry(QRect(1060, 10, 101, 51));
        stat_I = new QPushButton(tab_2);
        stat_I->setObjectName(QStringLiteral("stat_I"));
        stat_I->setGeometry(QRect(910, 430, 161, 41));
        stat_I->setStyleSheet(QStringLiteral(""));
        excel_I = new QPushButton(tab_2);
        excel_I->setObjectName(QStringLiteral("excel_I"));
        excel_I->setGeometry(QRect(660, 430, 121, 41));
        excel_I->setStyleSheet(QStringLiteral(""));
        PDF_I = new QPushButton(tab_2);
        PDF_I->setObjectName(QStringLiteral("PDF_I"));
        PDF_I->setGeometry(QRect(520, 430, 121, 41));
        PDF_I->setStyleSheet(QStringLiteral(""));
        date_I = new QLabel(tab_2);
        date_I->setObjectName(QStringLiteral("date_I"));
        date_I->setGeometry(QRect(780, 0, 211, 31));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        date_I->setFont(font2);
        digital_date_I = new QLabel(tab_2);
        digital_date_I->setObjectName(QStringLiteral("digital_date_I"));
        digital_date_I->setGeometry(QRect(810, 30, 151, 21));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setWeight(50);
        digital_date_I->setFont(font3);
        produit_ingredient->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(210, 120, 56, 16));
        arduino = new QLabel(tab_4);
        arduino->setObjectName(QStringLiteral("arduino"));
        arduino->setGeometry(QRect(115, 95, 971, 321));
        produit_ingredient->addTab(tab_4, QString());
        Produit_ingredient->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Produit_ingredient);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1211, 26));
        Produit_ingredient->setMenuBar(menubar);
        statusbar = new QStatusBar(Produit_ingredient);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Produit_ingredient->setStatusBar(statusbar);
        toolBar = new QToolBar(Produit_ingredient);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Produit_ingredient->addToolBar(Qt::RightToolBarArea, toolBar);

        toolBar->addSeparator();
        toolBar->addAction(produit1);
        toolBar->addSeparator();
        toolBar->addAction(produit2);
        toolBar->addSeparator();
        toolBar->addAction(produit3);
        toolBar->addSeparator();

        retranslateUi(Produit_ingredient);

        produit_ingredient->setCurrentIndex(2);
        produit->setCurrentIndex(0);
        ingredient->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Produit_ingredient);
    } // setupUi

    void retranslateUi(QMainWindow *Produit_ingredient)
    {
        Produit_ingredient->setWindowTitle(QApplication::translate("Produit_ingredient", "Produit_ingredient", Q_NULLPTR));
        produit1->setText(QApplication::translate("Produit_ingredient", "gateau", Q_NULLPTR));
        produit2->setText(QApplication::translate("Produit_ingredient", "pate", Q_NULLPTR));
        produit3->setText(QApplication::translate("Produit_ingredient", "sale", Q_NULLPTR));
        label->setText(QApplication::translate("Produit_ingredient", "Identifiant :", Q_NULLPTR));
        label_2->setText(QApplication::translate("Produit_ingredient", "Nom Produit :", Q_NULLPTR));
        label_3->setText(QApplication::translate("Produit_ingredient", "Quantit\303\251 Produit :", Q_NULLPTR));
        label_4->setText(QApplication::translate("Produit_ingredient", "Prix Produit :", Q_NULLPTR));
        label_5->setText(QApplication::translate("Produit_ingredient", "Type Produit :", Q_NULLPTR));
        ajouter_produit->setText(QApplication::translate("Produit_ingredient", "Ajouter", Q_NULLPTR));
        type_P->clear();
        type_P->insertItems(0, QStringList()
         << QApplication::translate("Produit_ingredient", "Select", Q_NULLPTR)
         << QApplication::translate("Produit_ingredient", "gateau", Q_NULLPTR)
         << QApplication::translate("Produit_ingredient", "patee", Q_NULLPTR)
         << QApplication::translate("Produit_ingredient", "salee", Q_NULLPTR)
         << QString()
        );
        msg_P->setText(QString());
        produit->setTabText(produit->indexOf(tab_3), QApplication::translate("Produit_ingredient", "Ajouter Produit", Q_NULLPTR));
        label_7->setText(QApplication::translate("Produit_ingredient", "Identifiant :", Q_NULLPTR));
        supprimer_produit->setText(QApplication::translate("Produit_ingredient", "Supprimer", Q_NULLPTR));
        label_8->setText(QApplication::translate("Produit_ingredient", "Saisir l'identifiant de produit a supprimer !!!", Q_NULLPTR));
        produit->setTabText(produit->indexOf(tab_5), QApplication::translate("Produit_ingredient", "Supprimer Produit", Q_NULLPTR));
        label_9->setText(QApplication::translate("Produit_ingredient", "Identifiant :", Q_NULLPTR));
        label_10->setText(QApplication::translate("Produit_ingredient", "Nom Produit :", Q_NULLPTR));
        label_11->setText(QApplication::translate("Produit_ingredient", "Quantit\303\251 Produit :", Q_NULLPTR));
        label_12->setText(QApplication::translate("Produit_ingredient", "Prix Produit :", Q_NULLPTR));
        label_13->setText(QApplication::translate("Produit_ingredient", "Type Produit :", Q_NULLPTR));
        label_15->setText(QApplication::translate("Produit_ingredient", "Saisir l'identifiant de produit a supprimer !!!", Q_NULLPTR));
        modifier_produit->setText(QApplication::translate("Produit_ingredient", "Modifier", Q_NULLPTR));
        produit->setTabText(produit->indexOf(tab_6), QApplication::translate("Produit_ingredient", "Modifier Produit", Q_NULLPTR));
        label_16->setText(QApplication::translate("Produit_ingredient", "Trier les produits par :", Q_NULLPTR));
        nom_P_trie->setText(QApplication::translate("Produit_ingredient", "Nom du produit", Q_NULLPTR));
        quantite_P_trie->setText(QApplication::translate("Produit_ingredient", "Quantit\303\251 du produit", Q_NULLPTR));
        prix_P_trie->setText(QApplication::translate("Produit_ingredient", "Prix du produit", Q_NULLPTR));
        label_17->setText(QApplication::translate("Produit_ingredient", "Recherche un produit par :", Q_NULLPTR));
        label_18->setText(QApplication::translate("Produit_ingredient", "Identifiant :", Q_NULLPTR));
        label_19->setText(QApplication::translate("Produit_ingredient", "Type :", Q_NULLPTR));
        chercher_produit->setText(QApplication::translate("Produit_ingredient", "Chercher", Q_NULLPTR));
        trier_produit->setText(QApplication::translate("Produit_ingredient", "Trier", Q_NULLPTR));
        logo_P->setText(QString());
        stat_P->setText(QApplication::translate("Produit_ingredient", "Statistique", Q_NULLPTR));
        excel_P->setText(QApplication::translate("Produit_ingredient", "Exporter EXCEL", Q_NULLPTR));
        PDF_P->setText(QApplication::translate("Produit_ingredient", "Exporter PDF", Q_NULLPTR));
        date_P->setText(QString());
        digital_date_P->setText(QString());
        bg_P->setText(QString());
        produit_ingredient->setTabText(produit_ingredient->indexOf(tab), QApplication::translate("Produit_ingredient", "Produit", Q_NULLPTR));
        label_26->setText(QApplication::translate("Produit_ingredient", "Identifiant :", Q_NULLPTR));
        label_27->setText(QApplication::translate("Produit_ingredient", "Nom Ingredient :", Q_NULLPTR));
        label_28->setText(QApplication::translate("Produit_ingredient", "Quantit\303\251 Ingredient :", Q_NULLPTR));
        label_29->setText(QApplication::translate("Produit_ingredient", "Prix Ingredient : ", Q_NULLPTR));
        label_30->setText(QApplication::translate("Produit_ingredient", "Type Ingredient : :", Q_NULLPTR));
        ajouter_ingredient->setText(QApplication::translate("Produit_ingredient", "Ajouter", Q_NULLPTR));
        type_I->clear();
        type_I->insertItems(0, QStringList()
         << QApplication::translate("Produit_ingredient", "Select", Q_NULLPTR)
         << QApplication::translate("Produit_ingredient", "beuf", Q_NULLPTR)
         << QApplication::translate("Produit_ingredient", "poulet", Q_NULLPTR)
         << QApplication::translate("Produit_ingredient", "vegetarian", Q_NULLPTR)
        );
        msg_I->setText(QString());
        ingredient->setTabText(ingredient->indexOf(tab_7), QApplication::translate("Produit_ingredient", "Ajouter Ingredient", Q_NULLPTR));
        label_24->setText(QApplication::translate("Produit_ingredient", "Saisir l'identifiant d'ingredient a supprimer !!!", Q_NULLPTR));
        label_25->setText(QApplication::translate("Produit_ingredient", "Identifiant :", Q_NULLPTR));
        supprimer_ingredient->setText(QApplication::translate("Produit_ingredient", "Supprimer", Q_NULLPTR));
        ingredient->setTabText(ingredient->indexOf(tab_9), QApplication::translate("Produit_ingredient", "Supprimer Ingredinet", Q_NULLPTR));
        label_32->setText(QApplication::translate("Produit_ingredient", "Saisir l'identifiant d'ingredient a supprimer !!!", Q_NULLPTR));
        label_33->setText(QApplication::translate("Produit_ingredient", "Identifiant :", Q_NULLPTR));
        label_34->setText(QApplication::translate("Produit_ingredient", "Nom Ingredient :", Q_NULLPTR));
        label_35->setText(QApplication::translate("Produit_ingredient", "Quantit\303\251 Ingredient :", Q_NULLPTR));
        label_36->setText(QApplication::translate("Produit_ingredient", "Prix Ingredient : ", Q_NULLPTR));
        label_37->setText(QApplication::translate("Produit_ingredient", "Type Ingredient : :", Q_NULLPTR));
        modifier_ingredient->setText(QApplication::translate("Produit_ingredient", "Modifier", Q_NULLPTR));
        ingredient->setTabText(ingredient->indexOf(tab_10), QApplication::translate("Produit_ingredient", "Modifier Ingredinet", Q_NULLPTR));
        label_20->setText(QApplication::translate("Produit_ingredient", "Trier les ingredients par :", Q_NULLPTR));
        nom_I_trie->setText(QApplication::translate("Produit_ingredient", "Nom d'ingredient", Q_NULLPTR));
        quantite_I_trie->setText(QApplication::translate("Produit_ingredient", "Quantit\303\251 d'ingredient", Q_NULLPTR));
        prix_I_trie->setText(QApplication::translate("Produit_ingredient", "Prix d'ingredient", Q_NULLPTR));
        label_21->setText(QApplication::translate("Produit_ingredient", "Recherche un ingredient par :", Q_NULLPTR));
        label_22->setText(QApplication::translate("Produit_ingredient", "Identifiant :", Q_NULLPTR));
        label_23->setText(QApplication::translate("Produit_ingredient", "Type :", Q_NULLPTR));
        chercher_ingredient->setText(QApplication::translate("Produit_ingredient", "Chercher", Q_NULLPTR));
        trier_ingredient->setText(QApplication::translate("Produit_ingredient", "Trier", Q_NULLPTR));
        logo_I->setText(QString());
        stat_I->setText(QApplication::translate("Produit_ingredient", "Statistiques", Q_NULLPTR));
        excel_I->setText(QApplication::translate("Produit_ingredient", "Exporter EXCEL", Q_NULLPTR));
        PDF_I->setText(QApplication::translate("Produit_ingredient", "Exporter PDF", Q_NULLPTR));
        date_I->setText(QString());
        digital_date_I->setText(QString());
        produit_ingredient->setTabText(produit_ingredient->indexOf(tab_2), QApplication::translate("Produit_ingredient", "Ingredient", Q_NULLPTR));
        label_6->setText(QString());
        arduino->setText(QString());
        produit_ingredient->setTabText(produit_ingredient->indexOf(tab_4), QApplication::translate("Produit_ingredient", "Page", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("Produit_ingredient", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Produit_ingredient: public Ui_Produit_ingredient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUIT_INGREDIENT_H
