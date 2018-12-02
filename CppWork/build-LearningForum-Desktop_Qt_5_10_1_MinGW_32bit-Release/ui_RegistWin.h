/********************************************************************************
** Form generated from reading UI file 'RegistWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTWIN_H
#define UI_REGISTWIN_H

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

class Ui_RegistWin
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_7;
    QLineEdit *username_LE;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_8;
    QLineEdit *password_LE;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_9;
    QLineEdit *confirm_password_LE;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *confirm_password_LE_3;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QRadioButton *male;
    QRadioButton *female;
    QRadioButton *secret;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *OK_btn;
    QPushButton *Cancel_btn;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *RegistAdmin_btn;

    void setupUi(QDialog *RegistWin)
    {
        if (RegistWin->objectName().isEmpty())
            RegistWin->setObjectName(QStringLiteral("RegistWin"));
        RegistWin->resize(400, 300);
        verticalLayout_3 = new QVBoxLayout(RegistWin);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(RegistWin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";"));
        label_4->setTextFormat(Qt::PlainText);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(RegistWin);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        label_7 = new QLabel(RegistWin);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(label_7);

        username_LE = new QLineEdit(RegistWin);
        username_LE->setObjectName(QStringLiteral("username_LE"));

        horizontalLayout->addWidget(username_LE);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(2, 6);
        horizontalLayout->setStretch(3, 2);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(RegistWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        label_8 = new QLabel(RegistWin);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_2->addWidget(label_8);

        password_LE = new QLineEdit(RegistWin);
        password_LE->setObjectName(QStringLiteral("password_LE"));
        password_LE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(password_LE);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(2, 6);
        horizontalLayout_2->setStretch(3, 2);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(RegistWin);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        label_9 = new QLabel(RegistWin);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_3->addWidget(label_9);

        confirm_password_LE = new QLineEdit(RegistWin);
        confirm_password_LE->setObjectName(QStringLiteral("confirm_password_LE"));

        horizontalLayout_3->addWidget(confirm_password_LE);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(2, 6);
        horizontalLayout_3->setStretch(3, 2);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(RegistWin);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_6);

        confirm_password_LE_3 = new QLineEdit(RegistWin);
        confirm_password_LE_3->setObjectName(QStringLiteral("confirm_password_LE_3"));

        horizontalLayout_5->addWidget(confirm_password_LE_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(1, 6);
        horizontalLayout_5->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(RegistWin);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        male = new QRadioButton(RegistWin);
        male->setObjectName(QStringLiteral("male"));

        horizontalLayout_4->addWidget(male);

        female = new QRadioButton(RegistWin);
        female->setObjectName(QStringLiteral("female"));

        horizontalLayout_4->addWidget(female);

        secret = new QRadioButton(RegistWin);
        secret->setObjectName(QStringLiteral("secret"));

        horizontalLayout_4->addWidget(secret);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(4, 2);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        OK_btn = new QPushButton(RegistWin);
        OK_btn->setObjectName(QStringLiteral("OK_btn"));

        horizontalLayout_6->addWidget(OK_btn);

        Cancel_btn = new QPushButton(RegistWin);
        Cancel_btn->setObjectName(QStringLiteral("Cancel_btn"));

        horizontalLayout_6->addWidget(Cancel_btn);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_10 = new QLabel(RegistWin);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_10);

        label_11 = new QLabel(RegistWin);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_7->addWidget(label_11);

        label_12 = new QLabel(RegistWin);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_7->addWidget(label_12);

        horizontalLayout_7->setStretch(0, 10);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 10);

        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        RegistAdmin_btn = new QPushButton(RegistWin);
        RegistAdmin_btn->setObjectName(QStringLiteral("RegistAdmin_btn"));
        RegistAdmin_btn->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        horizontalLayout_8->addWidget(RegistAdmin_btn);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(RegistWin);

        QMetaObject::connectSlotsByName(RegistWin);
    } // setupUi

    void retranslateUi(QDialog *RegistWin)
    {
        RegistWin->setWindowTitle(QApplication::translate("RegistWin", "Dialog", nullptr));
        label_4->setText(QApplication::translate("RegistWin", "\346\263\250\345\206\214\346\226\260\347\224\250\346\210\267", nullptr));
        label->setText(QApplication::translate("RegistWin", "\347\224\250\346\210\267\345\220\215 ", nullptr));
        label_7->setText(QApplication::translate("RegistWin", "*", nullptr));
        label_2->setText(QApplication::translate("RegistWin", "\345\257\206\347\240\201", nullptr));
        label_8->setText(QApplication::translate("RegistWin", "*", nullptr));
        label_3->setText(QApplication::translate("RegistWin", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label_9->setText(QApplication::translate("RegistWin", "*", nullptr));
        label_6->setText(QApplication::translate("RegistWin", "WeChat", nullptr));
        label_5->setText(QApplication::translate("RegistWin", "\346\200\247\345\210\253", nullptr));
        male->setText(QApplication::translate("RegistWin", "\347\224\267", nullptr));
        female->setText(QApplication::translate("RegistWin", "\345\245\263", nullptr));
        secret->setText(QApplication::translate("RegistWin", "\344\277\235\345\257\206", nullptr));
        OK_btn->setText(QApplication::translate("RegistWin", "OK", nullptr));
        Cancel_btn->setText(QApplication::translate("RegistWin", "Cancel", nullptr));
        label_10->setText(QApplication::translate("RegistWin", "\345\205\266\344\270\255\346\240\207\346\234\211", nullptr));
        label_11->setText(QApplication::translate("RegistWin", "*", nullptr));
        label_12->setText(QApplication::translate("RegistWin", "\344\270\272\345\277\205\345\241\253\351\241\271\344\270\215\350\203\275\344\270\272\347\251\272", nullptr));
        RegistAdmin_btn->setText(QApplication::translate("RegistWin", "\346\210\221\346\230\257\350\246\201\346\263\250\345\206\214\347\256\241\347\220\206\345\221\230\347\232\204\345\244\247\344\275\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistWin: public Ui_RegistWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTWIN_H
