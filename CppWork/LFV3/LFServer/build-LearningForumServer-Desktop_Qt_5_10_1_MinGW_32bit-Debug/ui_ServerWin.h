/********************************************************************************
** Form generated from reading UI file 'ServerWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWIN_H
#define UI_SERVERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonCreateChattingRoom;
    QPushButton *viewpost_btn;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *ServerWin)
    {
        if (ServerWin->objectName().isEmpty())
            ServerWin->setObjectName(QStringLiteral("ServerWin"));
        ServerWin->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(ServerWin);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(ServerWin);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        textEdit = new QTextEdit(ServerWin);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ServerWin);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(ServerWin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonCreateChattingRoom = new QPushButton(ServerWin);
        pushButtonCreateChattingRoom->setObjectName(QStringLiteral("pushButtonCreateChattingRoom"));

        horizontalLayout_2->addWidget(pushButtonCreateChattingRoom);

        viewpost_btn = new QPushButton(ServerWin);
        viewpost_btn->setObjectName(QStringLiteral("viewpost_btn"));

        horizontalLayout_2->addWidget(viewpost_btn);

        pushButtonSave = new QPushButton(ServerWin);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        horizontalLayout_2->addWidget(pushButtonSave);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ServerWin);

        QMetaObject::connectSlotsByName(ServerWin);
    } // setupUi

    void retranslateUi(QWidget *ServerWin)
    {
        ServerWin->setWindowTitle(QApplication::translate("ServerWin", "Form", nullptr));
        label_2->setText(QApplication::translate("ServerWin", "\350\277\236\346\216\245\346\227\245\345\277\227", nullptr));
        label->setText(QApplication::translate("ServerWin", "\347\253\257\345\217\243", nullptr));
        pushButtonCreateChattingRoom->setText(QApplication::translate("ServerWin", "\345\274\200\345\247\213\347\233\221\345\220\254", nullptr));
        viewpost_btn->setText(QApplication::translate("ServerWin", "\346\237\245\347\234\213\345\270\226\345\255\220", nullptr));
        pushButtonSave->setText(QApplication::translate("ServerWin", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerWin: public Ui_ServerWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWIN_H
