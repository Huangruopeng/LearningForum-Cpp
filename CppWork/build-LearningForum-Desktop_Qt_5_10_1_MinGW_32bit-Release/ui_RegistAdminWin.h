/********************************************************************************
** Form generated from reading UI file 'RegistAdminWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTADMINWIN_H
#define UI_REGISTADMINWIN_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegistAdminWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
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
    QLabel *label_13;
    QLineEdit *confirm_password_LE_3;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *OK_btn;
    QPushButton *Cancel_btn;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QDialog *RegistAdminWin)
    {
        if (RegistAdminWin->objectName().isEmpty())
            RegistAdminWin->setObjectName(QStringLiteral("RegistAdminWin"));
        RegistAdminWin->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(RegistAdminWin);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(RegistAdminWin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";"));
        label_4->setTextFormat(Qt::PlainText);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(RegistAdminWin);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        label_7 = new QLabel(RegistAdminWin);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(label_7);

        username_LE = new QLineEdit(RegistAdminWin);
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
        label_2 = new QLabel(RegistAdminWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        label_8 = new QLabel(RegistAdminWin);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_2->addWidget(label_8);

        password_LE = new QLineEdit(RegistAdminWin);
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
        label_3 = new QLabel(RegistAdminWin);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        label_9 = new QLabel(RegistAdminWin);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_3->addWidget(label_9);

        confirm_password_LE = new QLineEdit(RegistAdminWin);
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
        label_6 = new QLabel(RegistAdminWin);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_6);

        label_13 = new QLabel(RegistAdminWin);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_5->addWidget(label_13);

        confirm_password_LE_3 = new QLineEdit(RegistAdminWin);
        confirm_password_LE_3->setObjectName(QStringLiteral("confirm_password_LE_3"));

        horizontalLayout_5->addWidget(confirm_password_LE_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(2, 6);
        horizontalLayout_5->setStretch(3, 2);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        OK_btn = new QPushButton(RegistAdminWin);
        OK_btn->setObjectName(QStringLiteral("OK_btn"));

        horizontalLayout_6->addWidget(OK_btn);

        Cancel_btn = new QPushButton(RegistAdminWin);
        Cancel_btn->setObjectName(QStringLiteral("Cancel_btn"));

        horizontalLayout_6->addWidget(Cancel_btn);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_10 = new QLabel(RegistAdminWin);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_10);

        label_11 = new QLabel(RegistAdminWin);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_7->addWidget(label_11);

        label_12 = new QLabel(RegistAdminWin);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_7->addWidget(label_12);

        horizontalLayout_7->setStretch(0, 10);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 10);

        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(RegistAdminWin);

        QMetaObject::connectSlotsByName(RegistAdminWin);
    } // setupUi

    void retranslateUi(QDialog *RegistAdminWin)
    {
        RegistAdminWin->setWindowTitle(QApplication::translate("RegistAdminWin", "Dialog", nullptr));
        label_4->setText(QApplication::translate("RegistAdminWin", "\346\263\250\345\206\214\346\226\260\347\256\241\347\220\206\345\221\230", nullptr));
        label->setText(QApplication::translate("RegistAdminWin", "\347\224\250\346\210\267\345\220\215 ", nullptr));
        label_7->setText(QApplication::translate("RegistAdminWin", "*", nullptr));
        label_2->setText(QApplication::translate("RegistAdminWin", "\345\257\206\347\240\201", nullptr));
        label_8->setText(QApplication::translate("RegistAdminWin", "*", nullptr));
        label_3->setText(QApplication::translate("RegistAdminWin", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label_9->setText(QApplication::translate("RegistAdminWin", "*", nullptr));
        label_6->setText(QApplication::translate("RegistAdminWin", "\351\252\214\350\257\201\345\257\206\347\240\201", nullptr));
        label_13->setText(QApplication::translate("RegistAdminWin", "*", nullptr));
        OK_btn->setText(QApplication::translate("RegistAdminWin", "OK", nullptr));
        Cancel_btn->setText(QApplication::translate("RegistAdminWin", "Cancel", nullptr));
        label_10->setText(QApplication::translate("RegistAdminWin", "\345\205\266\344\270\255\346\240\207\346\234\211", nullptr));
        label_11->setText(QApplication::translate("RegistAdminWin", "*", nullptr));
        label_12->setText(QApplication::translate("RegistAdminWin", "\344\270\272\345\277\205\345\241\253\351\241\271\344\270\215\350\203\275\344\270\272\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistAdminWin: public Ui_RegistAdminWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTADMINWIN_H
