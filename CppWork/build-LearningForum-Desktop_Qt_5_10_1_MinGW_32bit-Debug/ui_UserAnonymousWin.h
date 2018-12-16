/********************************************************************************
** Form generated from reading UI file 'UserAnonymousWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERANONYMOUSWIN_H
#define UI_USERANONYMOUSWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserAnonymousWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *OK_btn;

    void setupUi(QDialog *UserAnonymousWin)
    {
        if (UserAnonymousWin->objectName().isEmpty())
            UserAnonymousWin->setObjectName(QStringLiteral("UserAnonymousWin"));
        UserAnonymousWin->resize(300, 150);
        UserAnonymousWin->setMinimumSize(QSize(300, 150));
        UserAnonymousWin->setMaximumSize(QSize(300, 150));
        verticalLayout_2 = new QVBoxLayout(UserAnonymousWin);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(UserAnonymousWin);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(UserAnonymousWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(UserAnonymousWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        OK_btn = new QPushButton(UserAnonymousWin);
        OK_btn->setObjectName(QStringLiteral("OK_btn"));

        horizontalLayout->addWidget(OK_btn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(UserAnonymousWin);

        QMetaObject::connectSlotsByName(UserAnonymousWin);
    } // setupUi

    void retranslateUi(QDialog *UserAnonymousWin)
    {
        UserAnonymousWin->setWindowTitle(QApplication::translate("UserAnonymousWin", "Dialog", nullptr));
        label->setText(QApplication::translate("UserAnonymousWin", "\346\202\250\346\230\257\345\214\277\345\220\215\347\224\250\346\210\267\344\270\215\350\203\275\350\277\233\350\241\214\350\257\245\346\223\215\344\275\234\343\200\202", nullptr));
        label_2->setText(QApplication::translate("UserAnonymousWin", "\346\230\257\345\220\246\347\231\273\345\275\225\357\274\237", nullptr));
        pushButton->setText(QApplication::translate("UserAnonymousWin", "\345\217\226\346\266\210", nullptr));
        OK_btn->setText(QApplication::translate("UserAnonymousWin", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserAnonymousWin: public Ui_UserAnonymousWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERANONYMOUSWIN_H
