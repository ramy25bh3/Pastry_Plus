/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QCustomPlot *customPlot;
    QPushButton *afficher;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QStringLiteral("SecDialog"));
        SecDialog->resize(970, 513);
        SecDialog->setStyleSheet(QLatin1String("border-image: url(:/ci.jpg);\n"
""));
        customPlot = new QCustomPlot(SecDialog);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(80, 100, 551, 271));
        customPlot->setStyleSheet(QStringLiteral(""));
        afficher = new QPushButton(SecDialog);
        afficher->setObjectName(QStringLiteral("afficher"));
        afficher->setGeometry(QRect(690, 220, 111, 41));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(afficher->sizePolicy().hasHeightForWidth());
        afficher->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        afficher->setFont(font);
        afficher->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color:white;\n"
"background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"background:rgb(255, 85, 0);\n"
"}\n"
"\n"
""));

        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QApplication::translate("SecDialog", "Dialog", Q_NULLPTR));
        afficher->setText(QApplication::translate("SecDialog", "Afficher", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
