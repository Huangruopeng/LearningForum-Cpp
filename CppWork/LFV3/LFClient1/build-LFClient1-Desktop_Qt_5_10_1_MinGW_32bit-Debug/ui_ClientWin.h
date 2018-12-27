/********************************************************************************
** Form generated from reading UI file 'ClientWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIN_H
#define UI_CLIENTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWin
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *ServerIP_LE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *HostName_LE;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *ServerPort_LE;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *connect_btn;
    QPushButton *update_btn;

    void setupUi(QWidget *ClientWin)
    {
        if (ClientWin->objectName().isEmpty())
            ClientWin->setObjectName(QStringLiteral("ClientWin"));
        ClientWin->resize(368, 125);
        verticalLayout_3 = new QVBoxLayout(ClientWin);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(ClientWin);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        ServerIP_LE = new QLineEdit(ClientWin);
        ServerIP_LE->setObjectName(QStringLiteral("ServerIP_LE"));

        horizontalLayout->addWidget(ServerIP_LE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(ClientWin);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        HostName_LE = new QLineEdit(ClientWin);
        HostName_LE->setObjectName(QStringLiteral("HostName_LE"));

        horizontalLayout_2->addWidget(HostName_LE);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(ClientWin);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        ServerPort_LE = new QLineEdit(ClientWin);
        ServerPort_LE->setObjectName(QStringLiteral("ServerPort_LE"));

        horizontalLayout_3->addWidget(ServerPort_LE);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        connect_btn = new QPushButton(ClientWin);
        connect_btn->setObjectName(QStringLiteral("connect_btn"));

        horizontalLayout_4->addWidget(connect_btn);

        update_btn = new QPushButton(ClientWin);
        update_btn->setObjectName(QStringLiteral("update_btn"));

        horizontalLayout_4->addWidget(update_btn);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(ClientWin);

        QMetaObject::connectSlotsByName(ClientWin);
    } // setupUi

    void retranslateUi(QWidget *ClientWin)
    {
        ClientWin->setWindowTitle(QApplication::translate("ClientWin", "Form", nullptr));
        label_3->setText(QApplication::translate("ClientWin", "Ip", nullptr));
        ServerIP_LE->setText(QString());
        label_2->setText(QApplication::translate("ClientWin", "Name", nullptr));
        HostName_LE->setText(QString());
        label->setText(QApplication::translate("ClientWin", "Port", nullptr));
        connect_btn->setText(QApplication::translate("ClientWin", "\350\277\236\346\216\245", nullptr));
        update_btn->setText(QApplication::translate("ClientWin", "\346\233\264\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWin: public Ui_ClientWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIN_H
