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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Produit_ingredient
{
public:
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
    QLabel *label_6;
    QLineEdit *identifiant_P;
    QLineEdit *nom_P;
    QLineEdit *quantite_P;
    QLineEdit *prix_P;
    QLineEdit *type_P;
    QLineEdit *image_P;
    QPushButton *ajouter_produit;
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
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *identifiant_P_modif;
    QLineEdit *nom_P_modif;
    QLineEdit *quantite_P_modif;
    QLineEdit *prix_P_modif;
    QLineEdit *type_P_modif;
    QLineEdit *image_P_modif;
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
    QPushButton *exporter_P;
    QPushButton *chercher_produit;
    QWidget *tab_2;
    QTabWidget *ingredient;
    QWidget *tab_7;
    QLabel *label_26;
    QLineEdit *identifiant_I;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLineEdit *nom_I;
    QLineEdit *quantite_I;
    QLineEdit *prix_I;
    QLineEdit *type_I;
    QLineEdit *image_I;
    QPushButton *ajouter_ingredient;
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
    QLabel *label_38;
    QLineEdit *identifiant_I_modif;
    QLineEdit *quantite_I_modif;
    QLineEdit *nom_I_modif;
    QLineEdit *prix_I_modif;
    QLineEdit *type_I_modif;
    QLineEdit *image_I_modif;
    QPushButton *modifier_ingredient;
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
    QPushButton *exporter_I;
    QPushButton *chercher_ingredient;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Produit_ingredient)
    {
        if (Produit_ingredient->objectName().isEmpty())
            Produit_ingredient->setObjectName(QStringLiteral("Produit_ingredient"));
        Produit_ingredient->resize(1185, 611);
        centralwidget = new QWidget(Produit_ingredient);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        produit_ingredient = new QTabWidget(centralwidget);
        produit_ingredient->setObjectName(QStringLiteral("produit_ingredient"));
        produit_ingredient->setGeometry(QRect(10, 10, 1161, 531));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        produit = new QTabWidget(tab);
        produit->setObjectName(QStringLiteral("produit"));
        produit->setGeometry(QRect(20, 30, 411, 451));
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
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 260, 91, 16));
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
        type_P = new QLineEdit(tab_3);
        type_P->setObjectName(QStringLiteral("type_P"));
        type_P->setGeometry(QRect(200, 220, 113, 22));
        image_P = new QLineEdit(tab_3);
        image_P->setObjectName(QStringLiteral("image_P"));
        image_P->setGeometry(QRect(200, 260, 113, 22));
        ajouter_produit = new QPushButton(tab_3);
        ajouter_produit->setObjectName(QStringLiteral("ajouter_produit"));
        ajouter_produit->setGeometry(QRect(110, 340, 121, 28));
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
        supprimer_produit->setGeometry(QRect(120, 200, 111, 28));
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 50, 261, 20));
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
        label_14 = new QLabel(tab_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(80, 320, 91, 16));
        label_15 = new QLabel(tab_6);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(60, 40, 261, 20));
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
        image_P_modif = new QLineEdit(tab_6);
        image_P_modif->setObjectName(QStringLiteral("image_P_modif"));
        image_P_modif->setGeometry(QRect(190, 320, 113, 22));
        modifier_produit = new QPushButton(tab_6);
        modifier_produit->setObjectName(QStringLiteral("modifier_produit"));
        modifier_produit->setGeometry(QRect(130, 380, 121, 28));
        produit->addTab(tab_6, QString());
        afficher_produit = new QTableView(tab);
        afficher_produit->setObjectName(QStringLiteral("afficher_produit"));
        afficher_produit->setGeometry(QRect(460, 200, 661, 211));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(490, 80, 131, 16));
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
        label_17->setGeometry(QRect(880, 80, 171, 16));
        identifiant_P_rech = new QLineEdit(tab);
        identifiant_P_rech->setObjectName(QStringLiteral("identifiant_P_rech"));
        identifiant_P_rech->setGeometry(QRect(960, 120, 71, 22));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(880, 120, 71, 16));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(880, 160, 56, 16));
        type_P_rech = new QLineEdit(tab);
        type_P_rech->setObjectName(QStringLiteral("type_P_rech"));
        type_P_rech->setGeometry(QRect(960, 160, 71, 22));
        exporter_P = new QPushButton(tab);
        exporter_P->setObjectName(QStringLiteral("exporter_P"));
        exporter_P->setGeometry(QRect(720, 440, 151, 28));
        chercher_produit = new QPushButton(tab);
        chercher_produit->setObjectName(QStringLiteral("chercher_produit"));
        chercher_produit->setGeometry(QRect(1060, 140, 71, 28));
        produit_ingredient->addTab(tab, QString());
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
        label_31 = new QLabel(tab_7);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(90, 280, 111, 16));
        nom_I = new QLineEdit(tab_7);
        nom_I->setObjectName(QStringLiteral("nom_I"));
        nom_I->setGeometry(QRect(220, 120, 113, 22));
        quantite_I = new QLineEdit(tab_7);
        quantite_I->setObjectName(QStringLiteral("quantite_I"));
        quantite_I->setGeometry(QRect(220, 160, 113, 22));
        prix_I = new QLineEdit(tab_7);
        prix_I->setObjectName(QStringLiteral("prix_I"));
        prix_I->setGeometry(QRect(220, 200, 113, 22));
        type_I = new QLineEdit(tab_7);
        type_I->setObjectName(QStringLiteral("type_I"));
        type_I->setGeometry(QRect(220, 240, 113, 22));
        image_I = new QLineEdit(tab_7);
        image_I->setObjectName(QStringLiteral("image_I"));
        image_I->setGeometry(QRect(220, 280, 113, 22));
        ajouter_ingredient = new QPushButton(tab_7);
        ajouter_ingredient->setObjectName(QStringLiteral("ajouter_ingredient"));
        ajouter_ingredient->setGeometry(QRect(150, 340, 121, 28));
        ingredient->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_24 = new QLabel(tab_9);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(90, 60, 261, 20));
        label_25 = new QLabel(tab_9);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(110, 130, 71, 16));
        identifiant_I_supp = new QLineEdit(tab_9);
        identifiant_I_supp->setObjectName(QStringLiteral("identifiant_I_supp"));
        identifiant_I_supp->setGeometry(QRect(210, 130, 113, 22));
        supprimer_ingredient = new QPushButton(tab_9);
        supprimer_ingredient->setObjectName(QStringLiteral("supprimer_ingredient"));
        supprimer_ingredient->setGeometry(QRect(150, 200, 111, 28));
        ingredient->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_32 = new QLabel(tab_10);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(90, 40, 261, 20));
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
        label_38 = new QLabel(tab_10);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(100, 310, 111, 16));
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
        type_I_modif = new QLineEdit(tab_10);
        type_I_modif->setObjectName(QStringLiteral("type_I_modif"));
        type_I_modif->setGeometry(QRect(230, 270, 113, 22));
        image_I_modif = new QLineEdit(tab_10);
        image_I_modif->setObjectName(QStringLiteral("image_I_modif"));
        image_I_modif->setGeometry(QRect(230, 310, 113, 22));
        modifier_ingredient = new QPushButton(tab_10);
        modifier_ingredient->setObjectName(QStringLiteral("modifier_ingredient"));
        modifier_ingredient->setGeometry(QRect(160, 360, 121, 28));
        ingredient->addTab(tab_10, QString());
        afficher_ingredient = new QTableView(tab_2);
        afficher_ingredient->setObjectName(QStringLiteral("afficher_ingredient"));
        afficher_ingredient->setGeometry(QRect(500, 200, 621, 201));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(520, 70, 151, 16));
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
        label_21->setGeometry(QRect(890, 70, 171, 16));
        label_22 = new QLabel(tab_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(900, 110, 71, 16));
        label_23 = new QLabel(tab_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(900, 150, 56, 16));
        identifiant_I_rech = new QLineEdit(tab_2);
        identifiant_I_rech->setObjectName(QStringLiteral("identifiant_I_rech"));
        identifiant_I_rech->setGeometry(QRect(980, 110, 71, 22));
        type_I_rech = new QLineEdit(tab_2);
        type_I_rech->setObjectName(QStringLiteral("type_I_rech"));
        type_I_rech->setGeometry(QRect(980, 150, 71, 22));
        exporter_I = new QPushButton(tab_2);
        exporter_I->setObjectName(QStringLiteral("exporter_I"));
        exporter_I->setGeometry(QRect(730, 430, 161, 28));
        chercher_ingredient = new QPushButton(tab_2);
        chercher_ingredient->setObjectName(QStringLiteral("chercher_ingredient"));
        chercher_ingredient->setGeometry(QRect(1070, 130, 71, 28));
        produit_ingredient->addTab(tab_2, QString());
        Produit_ingredient->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Produit_ingredient);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1185, 26));
        Produit_ingredient->setMenuBar(menubar);
        statusbar = new QStatusBar(Produit_ingredient);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Produit_ingredient->setStatusBar(statusbar);

        retranslateUi(Produit_ingredient);

        produit_ingredient->setCurrentIndex(1);
        produit->setCurrentIndex(0);
        ingredient->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Produit_ingredient);
    } // setupUi

    void retranslateUi(QMainWindow *Produit_ingredient)
    {
        Produit_ingredient->setWindowTitle(QApplication::translate("Produit_ingredient", "Produit_ingredient", Q_NULLPTR));
        label->setText(QApplication::translate("Produit_ingredient", "Identifiant :", Q_NULLPTR));
        label_2->setText(QApplication::translate("Produit_ingredient", "Nom Produit :", Q_NULLPTR));
        label_3->setText(QApplication::translate("Produit_ingredient", "Quantit\303\251 Produit :", Q_NULLPTR));
        label_4->setText(QApplication::translate("Produit_ingredient", "Prix Produit :", Q_NULLPTR));
        label_5->setText(QApplication::translate("Produit_ingredient", "Type Produit :", Q_NULLPTR));
        label_6->setText(QApplication::translate("Produit_ingredient", "Image Produit :", Q_NULLPTR));
        ajouter_produit->setText(QApplication::translate("Produit_ingredient", "Ajouter", Q_NULLPTR));
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
        label_14->setText(QApplication::translate("Produit_ingredient", "Image Produit :", Q_NULLPTR));
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
        exporter_P->setText(QApplication::translate("Produit_ingredient", "Exporter PDF", Q_NULLPTR));
        chercher_produit->setText(QApplication::translate("Produit_ingredient", "Chercher", Q_NULLPTR));
        produit_ingredient->setTabText(produit_ingredient->indexOf(tab), QApplication::translate("Produit_ingredient", "Produit", Q_NULLPTR));
        label_26->setText(QApplication::translate("Produit_ingredient", "Identifiant :", Q_NULLPTR));
        label_27->setText(QApplication::translate("Produit_ingredient", "Nom Ingredient :", Q_NULLPTR));
        label_28->setText(QApplication::translate("Produit_ingredient", "Quantit\303\251 Ingredient :", Q_NULLPTR));
        label_29->setText(QApplication::translate("Produit_ingredient", "Prix Ingredient : ", Q_NULLPTR));
        label_30->setText(QApplication::translate("Produit_ingredient", "Type Ingredient : :", Q_NULLPTR));
        label_31->setText(QApplication::translate("Produit_ingredient", "Image Ingredient : :", Q_NULLPTR));
        ajouter_ingredient->setText(QApplication::translate("Produit_ingredient", "Ajouter", Q_NULLPTR));
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
        label_38->setText(QApplication::translate("Produit_ingredient", "Image Ingredient : :", Q_NULLPTR));
        modifier_ingredient->setText(QApplication::translate("Produit_ingredient", "Modifier", Q_NULLPTR));
        ingredient->setTabText(ingredient->indexOf(tab_10), QApplication::translate("Produit_ingredient", "Modifier Ingredinet", Q_NULLPTR));
        label_20->setText(QApplication::translate("Produit_ingredient", "Trier les ingredients par :", Q_NULLPTR));
        nom_I_trie->setText(QApplication::translate("Produit_ingredient", "Nom d'ingredient", Q_NULLPTR));
        quantite_I_trie->setText(QApplication::translate("Produit_ingredient", "Quantit\303\251 d'ingredient", Q_NULLPTR));
        prix_I_trie->setText(QApplication::translate("Produit_ingredient", "Prix d'ingredient", Q_NULLPTR));
        label_21->setText(QApplication::translate("Produit_ingredient", "Recherche un ingredient par :", Q_NULLPTR));
        label_22->setText(QApplication::translate("Produit_ingredient", "Identifiant :", Q_NULLPTR));
        label_23->setText(QApplication::translate("Produit_ingredient", "Type :", Q_NULLPTR));
        exporter_I->setText(QApplication::translate("Produit_ingredient", "Exporter PDF", Q_NULLPTR));
        chercher_ingredient->setText(QApplication::translate("Produit_ingredient", "Chercher", Q_NULLPTR));
        produit_ingredient->setTabText(produit_ingredient->indexOf(tab_2), QApplication::translate("Produit_ingredient", "Ingredient", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Produit_ingredient: public Ui_Produit_ingredient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUIT_INGREDIENT_H
