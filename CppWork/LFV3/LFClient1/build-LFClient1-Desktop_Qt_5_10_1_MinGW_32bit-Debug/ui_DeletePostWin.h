/********************************************************************************
** Form generated from reading UI file 'DeletePostWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPOSTWIN_H
#define UI_DELETEPOSTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeletePostWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *OK_btn;

    void setupUi(QDialog *DeletePostWin)
    {
        if (DeletePostWin->objectName().isEmpty())
            DeletePostWin->setObjectName(QStringLiteral("DeletePostWin"));
        DeletePostWin->resize(300, 107);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DeletePostWin->sizePolicy().hasHeightForWidth());
        DeletePostWin->setSizePolicy(sizePolicy);
        DeletePostWin->setMinimumSize(QSize(300, 100));
        DeletePostWin->setMaximumSize(QSize(300, 200));
        verticalLayout_2 = new QVBoxLayout(DeletePostWin);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(DeletePostWin);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OK_btn = new QPushButton(DeletePostWin);
        OK_btn->setObjectName(QStringLiteral("OK_btn"));

        horizontalLayout->addWidget(OK_btn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(DeletePostWin);

        QMetaObject::connectSlotsByName(DeletePostWin);
    } // setupUi

    void retranslateUi(QDialog *DeletePostWin)
    {
        DeletePostWin->setWindowTitle(QApplication::translate("DeletePostWin", "Dialog", nullptr));
        label->setText(QApplication::translate("DeletePostWin", "\344\275\240\347\241\256\345\256\232\350\246\201\345\210\240\351\231\244\350\257\245\345\270\226\345\255\220?!", nullptr));
        OK_btn->setText(QApplication::translate("DeletePostWin", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeletePostWin: public Ui_DeletePostWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPOSTWIN_H
