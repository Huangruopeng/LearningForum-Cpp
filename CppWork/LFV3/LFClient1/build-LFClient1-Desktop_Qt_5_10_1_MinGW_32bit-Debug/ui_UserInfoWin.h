/********************************************************************************
** Form generated from reading UI file 'UserInfoWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFOWIN_H
#define UI_USERINFOWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInfoWin
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab_9;
    QVBoxLayout *verticalLayout_6;
    QListWidget *listWidget_general;
    QWidget *tab_10;
    QVBoxLayout *verticalLayout_5;
    QListWidget *listWidget_moderator;
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
    QHBoxLayout *horizontalLayout_4;
    QLabel *username_label_4;
    QLabel *WeChat_lb;
    QHBoxLayout *horizontalLayout_5;
    QLabel *username_label_5;
    QLabel *gender_lb;

    void setupUi(QDialog *UserInfoWin)
    {
        if (UserInfoWin->objectName().isEmpty())
            UserInfoWin->setObjectName(QStringLiteral("UserInfoWin"));
        UserInfoWin->resize(366, 307);
        verticalLayout_4 = new QVBoxLayout(UserInfoWin);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(UserInfoWin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";"));
        label_4->setTextFormat(Qt::PlainText);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        label = new QLabel(UserInfoWin);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        tabWidget = new QTabWidget(UserInfoWin);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(350, 100));
        tabWidget->setMaximumSize(QSize(3000, 3000));
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        verticalLayout_6 = new QVBoxLayout(tab_9);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        listWidget_general = new QListWidget(tab_9);
        listWidget_general->setObjectName(QStringLiteral("listWidget_general"));

        verticalLayout_6->addWidget(listWidget_general);

        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        verticalLayout_5 = new QVBoxLayout(tab_10);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        listWidget_moderator = new QListWidget(tab_10);
        listWidget_moderator->setObjectName(QStringLiteral("listWidget_moderator"));

        verticalLayout_5->addWidget(listWidget_moderator);

        tabWidget->addTab(tab_10, QString());

        verticalLayout_2->addWidget(tabWidget);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        username_label = new QLabel(UserInfoWin);
        username_label->setObjectName(QStringLiteral("username_label"));

        horizontalLayout->addWidget(username_label);

        usename_lb = new QLabel(UserInfoWin);
        usename_lb->setObjectName(QStringLiteral("usename_lb"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(usename_lb->sizePolicy().hasHeightForWidth());
        usename_lb->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(usename_lb);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        id_label = new QLabel(UserInfoWin);
        id_label->setObjectName(QStringLiteral("id_label"));

        horizontalLayout_2->addWidget(id_label);

        id_lb = new QLabel(UserInfoWin);
        id_lb->setObjectName(QStringLiteral("id_lb"));
        sizePolicy1.setHeightForWidth(id_lb->sizePolicy().hasHeightForWidth());
        id_lb->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(id_lb);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        username_label_3 = new QLabel(UserInfoWin);
        username_label_3->setObjectName(QStringLiteral("username_label_3"));

        horizontalLayout_3->addWidget(username_label_3);

        type_lb = new QLabel(UserInfoWin);
        type_lb->setObjectName(QStringLiteral("type_lb"));
        sizePolicy1.setHeightForWidth(type_lb->sizePolicy().hasHeightForWidth());
        type_lb->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(type_lb);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        username_label_4 = new QLabel(UserInfoWin);
        username_label_4->setObjectName(QStringLiteral("username_label_4"));

        horizontalLayout_4->addWidget(username_label_4);

        WeChat_lb = new QLabel(UserInfoWin);
        WeChat_lb->setObjectName(QStringLiteral("WeChat_lb"));
        sizePolicy1.setHeightForWidth(WeChat_lb->sizePolicy().hasHeightForWidth());
        WeChat_lb->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(WeChat_lb);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        username_label_5 = new QLabel(UserInfoWin);
        username_label_5->setObjectName(QStringLiteral("username_label_5"));

        horizontalLayout_5->addWidget(username_label_5);

        gender_lb = new QLabel(UserInfoWin);
        gender_lb->setObjectName(QStringLiteral("gender_lb"));
        sizePolicy1.setHeightForWidth(gender_lb->sizePolicy().hasHeightForWidth());
        gender_lb->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(gender_lb);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(UserInfoWin);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserInfoWin);
    } // setupUi

    void retranslateUi(QDialog *UserInfoWin)
    {
        UserInfoWin->setWindowTitle(QApplication::translate("UserInfoWin", "Dialog", nullptr));
        label_4->setText(QApplication::translate("UserInfoWin", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("UserInfoWin", "\350\257\267\351\200\211\346\213\251\347\224\250\346\210\267", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("UserInfoWin", "\346\231\256\351\200\232\347\224\250\346\210\267", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("UserInfoWin", "\347\211\210\344\270\273", nullptr));
        username_label->setText(QApplication::translate("UserInfoWin", "\347\224\250\346\210\267\345\220\215", nullptr));
        usename_lb->setText(QString());
        id_label->setText(QApplication::translate("UserInfoWin", "  ID ", nullptr));
        id_lb->setText(QString());
        username_label_3->setText(QApplication::translate("UserInfoWin", "\347\261\273 \345\236\213", nullptr));
        type_lb->setText(QString());
        username_label_4->setText(QApplication::translate("UserInfoWin", "WeChat_ID", nullptr));
        WeChat_lb->setText(QString());
        username_label_5->setText(QApplication::translate("UserInfoWin", "\346\200\247\345\210\253", nullptr));
        gender_lb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserInfoWin: public Ui_UserInfoWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFOWIN_H
