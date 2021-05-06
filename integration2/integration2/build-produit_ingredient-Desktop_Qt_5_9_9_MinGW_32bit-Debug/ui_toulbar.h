/********************************************************************************
** Form generated from reading UI file 'toulbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOULBAR_H
#define UI_TOULBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ToulBar
{
public:
    QLabel *text1;
    QLabel *img1;
    QLabel *img2;
    QLabel *text2;
    QLabel *titre1;
    QLabel *img3;
    QLabel *text3;

    void setupUi(QDialog *ToulBar)
    {
        if (ToulBar->objectName().isEmpty())
            ToulBar->setObjectName(QStringLiteral("ToulBar"));
        ToulBar->resize(835, 594);
        ToulBar->setStyleSheet(QStringLiteral("background-color: rgb(170, 85, 127);"));
        text1 = new QLabel(ToulBar);
        text1->setObjectName(QStringLiteral("text1"));
        text1->setGeometry(QRect(140, 320, 111, 31));
        QFont font;
        font.setPointSize(15);
        text1->setFont(font);
        img1 = new QLabel(ToulBar);
        img1->setObjectName(QStringLiteral("img1"));
        img1->setGeometry(QRect(40, 130, 291, 161));
        img2 = new QLabel(ToulBar);
        img2->setObjectName(QStringLiteral("img2"));
        img2->setGeometry(QRect(490, 130, 301, 171));
        text2 = new QLabel(ToulBar);
        text2->setObjectName(QStringLiteral("text2"));
        text2->setGeometry(QRect(610, 330, 131, 31));
        text2->setFont(font);
        titre1 = new QLabel(ToulBar);
        titre1->setObjectName(QStringLiteral("titre1"));
        titre1->setGeometry(QRect(160, 40, 511, 41));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        titre1->setFont(font1);
        titre1->setStyleSheet(QStringLiteral("color: rgb(85, 0, 255);"));
        img3 = new QLabel(ToulBar);
        img3->setObjectName(QStringLiteral("img3"));
        img3->setGeometry(QRect(270, 370, 281, 161));
        text3 = new QLabel(ToulBar);
        text3->setObjectName(QStringLiteral("text3"));
        text3->setGeometry(QRect(380, 550, 131, 31));
        text3->setFont(font);

        retranslateUi(ToulBar);

        QMetaObject::connectSlotsByName(ToulBar);
    } // setupUi

    void retranslateUi(QDialog *ToulBar)
    {
        ToulBar->setWindowTitle(QApplication::translate("ToulBar", "Dialog", Q_NULLPTR));
        text1->setText(QString());
        img1->setText(QString());
        img2->setText(QString());
        text2->setText(QString());
        titre1->setText(QApplication::translate("ToulBar", "Ce produit  est compos\303\251e principalement de :", Q_NULLPTR));
        img3->setText(QString());
        text3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ToulBar: public Ui_ToulBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOULBAR_H
