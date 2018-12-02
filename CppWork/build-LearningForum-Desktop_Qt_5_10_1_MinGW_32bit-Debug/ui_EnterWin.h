/********************************************************************************
** Form generated from reading UI file 'EnterWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERWIN_H
#define UI_ENTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EnterWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *EnterPicture_label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *username_label;
    QLineEdit *username_LE;
    QHBoxLayout *horizontalLayout_4;
    QLabel *password_label;
    QLineEdit *password_LE;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *Administractor_btn;
    QRadioButton *User_btn;
    QHBoxLayout *horizontalLayout;
    QPushButton *Cancel_btn;
    QPushButton *OK_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *sign_in_btn;

    void setupUi(QDialog *EnterWin)
    {
        if (EnterWin->objectName().isEmpty())
            EnterWin->setObjectName(QStringLiteral("EnterWin"));
        EnterWin->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(EnterWin);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        EnterPicture_label = new QLabel(EnterWin);
        EnterPicture_label->setObjectName(QStringLiteral("EnterPicture_label"));
        EnterPicture_label->setStyleSheet(QStringLiteral("image: url(:/png/EnterWinPic.png);"));

        verticalLayout_2->addWidget(EnterPicture_label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        username_label = new QLabel(EnterWin);
        username_label->setObjectName(QStringLiteral("username_label"));

        horizontalLayout_3->addWidget(username_label);

        username_LE = new QLineEdit(EnterWin);
        username_LE->setObjectName(QStringLiteral("username_LE"));

        horizontalLayout_3->addWidget(username_LE);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        password_label = new QLabel(EnterWin);
        password_label->setObjectName(QStringLiteral("password_label"));

        horizontalLayout_4->addWidget(password_label);

        password_LE = new QLineEdit(EnterWin);
        password_LE->setObjectName(QStringLiteral("password_LE"));

        horizontalLayout_4->addWidget(password_LE);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Administractor_btn = new QRadioButton(EnterWin);
        Administractor_btn->setObjectName(QStringLiteral("Administractor_btn"));

        horizontalLayout_2->addWidget(Administractor_btn);

        User_btn = new QRadioButton(EnterWin);
        User_btn->setObjectName(QStringLiteral("User_btn"));
        User_btn->setCheckable(true);
        User_btn->setChecked(true);

        horizontalLayout_2->addWidget(User_btn);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Cancel_btn = new QPushButton(EnterWin);
        Cancel_btn->setObjectName(QStringLiteral("Cancel_btn"));

        horizontalLayout->addWidget(Cancel_btn);

        OK_btn = new QPushButton(EnterWin);
        OK_btn->setObjectName(QStringLiteral("OK_btn"));

        horizontalLayout->addWidget(OK_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sign_in_btn = new QPushButton(EnterWin);
        sign_in_btn->setObjectName(QStringLiteral("sign_in_btn"));

        horizontalLayout->addWidget(sign_in_btn);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(EnterWin);

        QMetaObject::connectSlotsByName(EnterWin);
    } // setupUi

    void retranslateUi(QDialog *EnterWin)
    {
        EnterWin->setWindowTitle(QApplication::translate("EnterWin", "Dialog", nullptr));
        EnterPicture_label->setText(QString());
        username_label->setText(QApplication::translate("EnterWin", "\347\224\250\346\210\267\345\220\215", nullptr));
        username_LE->setPlaceholderText(QApplication::translate("EnterWin", "byr001", nullptr));
        password_label->setText(QApplication::translate("EnterWin", "\345\257\206  \347\240\201", nullptr));
        password_LE->setPlaceholderText(QApplication::translate("EnterWin", "66", nullptr));
        Administractor_btn->setText(QApplication::translate("EnterWin", "\347\256\241\347\220\206\345\221\230", nullptr));
        User_btn->setText(QApplication::translate("EnterWin", "\347\224\250\346\210\267", nullptr));
        Cancel_btn->setText(QApplication::translate("EnterWin", "Cancel", nullptr));
        OK_btn->setText(QApplication::translate("EnterWin", "OK", nullptr));
        sign_in_btn->setText(QApplication::translate("EnterWin", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterWin: public Ui_EnterWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERWIN_H
