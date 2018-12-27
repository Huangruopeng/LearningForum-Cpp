/********************************************************************************
** Form generated from reading UI file 'UserMyInfoWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMYINFOWIN_H
#define UI_USERMYINFOWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserMyInfoWin
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *username_label;
    QLabel *usename_lb;
    QHBoxLayout *horizontalLayout_2;
    QLabel *id_label;
    QLabel *id_lb;
    QHBoxLayout *horizontalLayout_3;
    QLabel *username_label_3;
    QLabel *type_lb;
    QHBoxLayout *horizontalLayout_6;
    QLabel *username_label_2;
    QLabel *myboard_lb;
    QHBoxLayout *horizontalLayout_4;
    QLabel *username_label_4;
    QLabel *WeChat_lb;
    QHBoxLayout *horizontalLayout_5;
    QLabel *username_label_5;
    QLabel *gender_lb;

    void setupUi(QDialog *UserMyInfoWin)
    {
        if (UserMyInfoWin->objectName().isEmpty())
            UserMyInfoWin->setObjectName(QStringLiteral("UserMyInfoWin"));
        UserMyInfoWin->resize(400, 300);
        verticalLayout_3 = new QVBoxLayout(UserMyInfoWin);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(UserMyInfoWin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";"));
        label_4->setTextFormat(Qt::PlainText);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        username_label = new QLabel(UserMyInfoWin);
        username_label->setObjectName(QStringLiteral("username_label"));

        horizontalLayout->addWidget(username_label);

        usename_lb = new QLabel(UserMyInfoWin);
        usename_lb->setObjectName(QStringLiteral("usename_lb"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(usename_lb->sizePolicy().hasHeightForWidth());
        usename_lb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(usename_lb);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        id_label = new QLabel(UserMyInfoWin);
        id_label->setObjectName(QStringLiteral("id_label"));

        horizontalLayout_2->addWidget(id_label);

        id_lb = new QLabel(UserMyInfoWin);
        id_lb->setObjectName(QStringLiteral("id_lb"));
        sizePolicy.setHeightForWidth(id_lb->sizePolicy().hasHeightForWidth());
        id_lb->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(id_lb);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        username_label_3 = new QLabel(UserMyInfoWin);
        username_label_3->setObjectName(QStringLiteral("username_label_3"));

        horizontalLayout_3->addWidget(username_label_3);

        type_lb = new QLabel(UserMyInfoWin);
        type_lb->setObjectName(QStringLiteral("type_lb"));
        sizePolicy.setHeightForWidth(type_lb->sizePolicy().hasHeightForWidth());
        type_lb->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(type_lb);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        username_label_2 = new QLabel(UserMyInfoWin);
        username_label_2->setObjectName(QStringLiteral("username_label_2"));

        horizontalLayout_6->addWidget(username_label_2);

        myboard_lb = new QLabel(UserMyInfoWin);
        myboard_lb->setObjectName(QStringLiteral("myboard_lb"));
        sizePolicy.setHeightForWidth(myboard_lb->sizePolicy().hasHeightForWidth());
        myboard_lb->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(myboard_lb);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        username_label_4 = new QLabel(UserMyInfoWin);
        username_label_4->setObjectName(QStringLiteral("username_label_4"));

        horizontalLayout_4->addWidget(username_label_4);

        WeChat_lb = new QLabel(UserMyInfoWin);
        WeChat_lb->setObjectName(QStringLiteral("WeChat_lb"));
        sizePolicy.setHeightForWidth(WeChat_lb->sizePolicy().hasHeightForWidth());
        WeChat_lb->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(WeChat_lb);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        username_label_5 = new QLabel(UserMyInfoWin);
        username_label_5->setObjectName(QStringLiteral("username_label_5"));

        horizontalLayout_5->addWidget(username_label_5);

        gender_lb = new QLabel(UserMyInfoWin);
        gender_lb->setObjectName(QStringLiteral("gender_lb"));
        sizePolicy.setHeightForWidth(gender_lb->sizePolicy().hasHeightForWidth());
        gender_lb->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(gender_lb);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(UserMyInfoWin);

        QMetaObject::connectSlotsByName(UserMyInfoWin);
    } // setupUi

    void retranslateUi(QDialog *UserMyInfoWin)
    {
        UserMyInfoWin->setWindowTitle(QApplication::translate("UserMyInfoWin", "Dialog", nullptr));
        label_4->setText(QApplication::translate("UserMyInfoWin", "\346\210\221\347\232\204\344\277\241\346\201\257", nullptr));
        username_label->setText(QApplication::translate("UserMyInfoWin", "\347\224\250\346\210\267\345\220\215", nullptr));
        usename_lb->setText(QString());
        id_label->setText(QApplication::translate("UserMyInfoWin", "  ID ", nullptr));
        id_lb->setText(QString());
        username_label_3->setText(QApplication::translate("UserMyInfoWin", "\347\261\273 \345\236\213", nullptr));
        type_lb->setText(QString());
        username_label_2->setText(QApplication::translate("UserMyInfoWin", "\347\256\241\347\220\206\347\232\204\347\211\210\351\235\242", nullptr));
        myboard_lb->setText(QString());
        username_label_4->setText(QApplication::translate("UserMyInfoWin", "WeChat_ID", nullptr));
        WeChat_lb->setText(QString());
        username_label_5->setText(QApplication::translate("UserMyInfoWin", "\346\200\247\345\210\253", nullptr));
        gender_lb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserMyInfoWin: public Ui_UserMyInfoWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMYINFOWIN_H
