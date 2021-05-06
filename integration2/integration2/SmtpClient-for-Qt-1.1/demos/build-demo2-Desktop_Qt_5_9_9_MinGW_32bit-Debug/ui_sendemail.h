/********************************************************************************
** Form generated from reading UI file 'sendemail.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDEMAIL_H
#define UI_SENDEMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendEmail
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *host;
    QLabel *label_2;
    QSpinBox *port;
    QCheckBox *ssl;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QCheckBox *auth;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *username;
    QLabel *label_6;
    QLineEdit *password;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLineEdit *sender;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *recipients;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLineEdit *subject;
    QTextEdit *texteditor;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QPushButton *addAttachment;
    QListWidget *attachments;
    QPushButton *sendEmail;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLineEdit *host_2;
    QLabel *label_12;
    QSpinBox *port_2;
    QCheckBox *ssl_2;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QCheckBox *auth_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QLineEdit *username_2;
    QLabel *label_15;
    QLineEdit *password_2;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_17;
    QLineEdit *sender_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QLineEdit *recipients_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_19;
    QLineEdit *subject_2;
    QTextEdit *texteditor_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_20;
    QPushButton *addAttachment_2;
    QListWidget *attachments_2;
    QPushButton *sendEmail_2;

    void setupUi(QWidget *SendEmail)
    {
        if (SendEmail->objectName().isEmpty())
            SendEmail->setObjectName(QStringLiteral("SendEmail"));
        SendEmail->resize(710, 556);
        layoutWidget = new QWidget(SendEmail);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 12, 694, 534));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(87, 17));
        label->setMaximumSize(QSize(87, 17));

        horizontalLayout->addWidget(label);

        host = new QLineEdit(layoutWidget);
        host->setObjectName(QStringLiteral("host"));

        horizontalLayout->addWidget(host);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(34, 17));
        label_2->setMaximumSize(QSize(34, 17));

        horizontalLayout->addWidget(label_2);

        port = new QSpinBox(layoutWidget);
        port->setObjectName(QStringLiteral("port"));
        port->setMaximum(99999);

        horizontalLayout->addWidget(port);

        ssl = new QCheckBox(layoutWidget);
        ssl->setObjectName(QStringLiteral("ssl"));

        horizontalLayout->addWidget(ssl);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        auth = new QCheckBox(layoutWidget);
        auth->setObjectName(QStringLiteral("auth"));
        auth->setMinimumSize(QSize(21, 21));
        auth->setMaximumSize(QSize(21, 21));
        auth->setTristate(false);

        horizontalLayout_3->addWidget(auth);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        username = new QLineEdit(layoutWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setMinimumSize(QSize(211, 27));
        username->setMaximumSize(QSize(211, 27));

        horizontalLayout_4->addWidget(username);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(password);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);

        verticalLayout_2->addWidget(label_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(81, 0));
        label_8->setMaximumSize(QSize(81, 16777215));

        horizontalLayout_2->addWidget(label_8);

        sender = new QLineEdit(layoutWidget);
        sender->setObjectName(QStringLiteral("sender"));

        horizontalLayout_2->addWidget(sender);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(81, 0));
        label_9->setMaximumSize(QSize(81, 16777215));

        horizontalLayout_5->addWidget(label_9);

        recipients = new QLineEdit(layoutWidget);
        recipients->setObjectName(QStringLiteral("recipients"));

        horizontalLayout_5->addWidget(recipients);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(81, 0));
        label_10->setMaximumSize(QSize(81, 16777215));

        horizontalLayout_7->addWidget(label_10);

        subject = new QLineEdit(layoutWidget);
        subject->setObjectName(QStringLiteral("subject"));

        horizontalLayout_7->addWidget(subject);


        verticalLayout_2->addLayout(horizontalLayout_7);

        texteditor = new QTextEdit(layoutWidget);
        texteditor->setObjectName(QStringLiteral("texteditor"));
        texteditor->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(texteditor);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        addAttachment = new QPushButton(layoutWidget);
        addAttachment->setObjectName(QStringLiteral("addAttachment"));
        addAttachment->setMinimumSize(QSize(97, 0));
        addAttachment->setMaximumSize(QSize(97, 16777215));

        horizontalLayout_8->addWidget(addAttachment);


        verticalLayout->addLayout(horizontalLayout_8);

        attachments = new QListWidget(layoutWidget);
        attachments->setObjectName(QStringLiteral("attachments"));
        attachments->setMaximumSize(QSize(16777215, 64));

        verticalLayout->addWidget(attachments);


        verticalLayout_2->addLayout(verticalLayout);

        sendEmail = new QPushButton(layoutWidget);
        sendEmail->setObjectName(QStringLiteral("sendEmail"));

        verticalLayout_2->addWidget(sendEmail);

        layoutWidget_2 = new QWidget(SendEmail);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(330, 190, 694, 534));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(87, 17));
        label_11->setMaximumSize(QSize(87, 17));

        horizontalLayout_9->addWidget(label_11);

        host_2 = new QLineEdit(layoutWidget_2);
        host_2->setObjectName(QStringLiteral("host_2"));

        horizontalLayout_9->addWidget(host_2);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(34, 17));
        label_12->setMaximumSize(QSize(34, 17));

        horizontalLayout_9->addWidget(label_12);

        port_2 = new QSpinBox(layoutWidget_2);
        port_2->setObjectName(QStringLiteral("port_2"));
        port_2->setMaximum(99999);

        horizontalLayout_9->addWidget(port_2);

        ssl_2 = new QCheckBox(layoutWidget_2);
        ssl_2->setObjectName(QStringLiteral("ssl_2"));

        horizontalLayout_9->addWidget(ssl_2);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        horizontalLayout_11->addWidget(label_13);

        auth_2 = new QCheckBox(layoutWidget_2);
        auth_2->setObjectName(QStringLiteral("auth_2"));
        auth_2->setMinimumSize(QSize(21, 21));
        auth_2->setMaximumSize(QSize(21, 21));
        auth_2->setTristate(false);

        horizontalLayout_11->addWidget(auth_2);


        horizontalLayout_10->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_12->addWidget(label_14);

        username_2 = new QLineEdit(layoutWidget_2);
        username_2->setObjectName(QStringLiteral("username_2"));
        username_2->setMinimumSize(QSize(211, 27));
        username_2->setMaximumSize(QSize(211, 27));

        horizontalLayout_12->addWidget(username_2);

        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_12->addWidget(label_15);

        password_2 = new QLineEdit(layoutWidget_2);
        password_2->setObjectName(QStringLiteral("password_2"));
        password_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_12->addWidget(password_2);


        horizontalLayout_10->addLayout(horizontalLayout_12);


        verticalLayout_3->addLayout(horizontalLayout_10);

        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        verticalLayout_3->addWidget(label_16);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(81, 0));
        label_17->setMaximumSize(QSize(81, 16777215));

        horizontalLayout_13->addWidget(label_17);

        sender_2 = new QLineEdit(layoutWidget_2);
        sender_2->setObjectName(QStringLiteral("sender_2"));

        horizontalLayout_13->addWidget(sender_2);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_18 = new QLabel(layoutWidget_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(81, 0));
        label_18->setMaximumSize(QSize(81, 16777215));

        horizontalLayout_14->addWidget(label_18);

        recipients_2 = new QLineEdit(layoutWidget_2);
        recipients_2->setObjectName(QStringLiteral("recipients_2"));

        horizontalLayout_14->addWidget(recipients_2);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_19 = new QLabel(layoutWidget_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(81, 0));
        label_19->setMaximumSize(QSize(81, 16777215));

        horizontalLayout_15->addWidget(label_19);

        subject_2 = new QLineEdit(layoutWidget_2);
        subject_2->setObjectName(QStringLiteral("subject_2"));

        horizontalLayout_15->addWidget(subject_2);


        verticalLayout_3->addLayout(horizontalLayout_15);

        texteditor_2 = new QTextEdit(layoutWidget_2);
        texteditor_2->setObjectName(QStringLiteral("texteditor_2"));
        texteditor_2->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(texteditor_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_20 = new QLabel(layoutWidget_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_16->addWidget(label_20);

        addAttachment_2 = new QPushButton(layoutWidget_2);
        addAttachment_2->setObjectName(QStringLiteral("addAttachment_2"));
        addAttachment_2->setMinimumSize(QSize(97, 0));
        addAttachment_2->setMaximumSize(QSize(97, 16777215));

        horizontalLayout_16->addWidget(addAttachment_2);


        verticalLayout_4->addLayout(horizontalLayout_16);

        attachments_2 = new QListWidget(layoutWidget_2);
        attachments_2->setObjectName(QStringLiteral("attachments_2"));
        attachments_2->setMaximumSize(QSize(16777215, 64));

        verticalLayout_4->addWidget(attachments_2);


        verticalLayout_3->addLayout(verticalLayout_4);

        sendEmail_2 = new QPushButton(layoutWidget_2);
        sendEmail_2->setObjectName(QStringLiteral("sendEmail_2"));

        verticalLayout_3->addWidget(sendEmail_2);


        retranslateUi(SendEmail);

        QMetaObject::connectSlotsByName(SendEmail);
    } // setupUi

    void retranslateUi(QWidget *SendEmail)
    {
        SendEmail->setWindowTitle(QApplication::translate("SendEmail", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SendEmail", "SMTP server:", Q_NULLPTR));
        label_2->setText(QApplication::translate("SendEmail", "Port:", Q_NULLPTR));
        ssl->setText(QApplication::translate("SendEmail", "SSL", Q_NULLPTR));
        label_4->setText(QApplication::translate("SendEmail", "Use authentication", Q_NULLPTR));
        auth->setText(QString());
        label_5->setText(QApplication::translate("SendEmail", "Username:", Q_NULLPTR));
        label_6->setText(QApplication::translate("SendEmail", "Password:", Q_NULLPTR));
        label_7->setText(QApplication::translate("SendEmail", "Mime E-mail", Q_NULLPTR));
        label_8->setText(QApplication::translate("SendEmail", "Sender:", Q_NULLPTR));
        label_9->setText(QApplication::translate("SendEmail", "Recipients:", Q_NULLPTR));
        label_10->setText(QApplication::translate("SendEmail", "Subject:", Q_NULLPTR));
        label_3->setText(QApplication::translate("SendEmail", "Attachments:", Q_NULLPTR));
        addAttachment->setText(QApplication::translate("SendEmail", "Add File", Q_NULLPTR));
        sendEmail->setText(QApplication::translate("SendEmail", "Send Email", Q_NULLPTR));
        label_11->setText(QApplication::translate("SendEmail", "SMTP server:", Q_NULLPTR));
        label_12->setText(QApplication::translate("SendEmail", "Port:", Q_NULLPTR));
        ssl_2->setText(QApplication::translate("SendEmail", "SSL", Q_NULLPTR));
        label_13->setText(QApplication::translate("SendEmail", "Use authentication", Q_NULLPTR));
        auth_2->setText(QString());
        label_14->setText(QApplication::translate("SendEmail", "Username:", Q_NULLPTR));
        label_15->setText(QApplication::translate("SendEmail", "Password:", Q_NULLPTR));
        label_16->setText(QApplication::translate("SendEmail", "Mime E-mail", Q_NULLPTR));
        label_17->setText(QApplication::translate("SendEmail", "Sender:", Q_NULLPTR));
        label_18->setText(QApplication::translate("SendEmail", "Recipients:", Q_NULLPTR));
        label_19->setText(QApplication::translate("SendEmail", "Subject:", Q_NULLPTR));
        label_20->setText(QApplication::translate("SendEmail", "Attachments:", Q_NULLPTR));
        addAttachment_2->setText(QApplication::translate("SendEmail", "Add File", Q_NULLPTR));
        sendEmail_2->setText(QApplication::translate("SendEmail", "Send Email", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SendEmail: public Ui_SendEmail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDEMAIL_H
