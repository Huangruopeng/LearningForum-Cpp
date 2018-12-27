/********************************************************************************
** Form generated from reading UI file 'AppointWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINTWIN_H
#define UI_APPOINTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppointWin
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QTabWidget *tabWidget;
    QWidget *tab_9;
    QListWidget *listWidget_general;
    QWidget *tab_10;
    QListWidget *listWidget_moderator;
    QPushButton *appoint_btn;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_7;
    QTabWidget *tabWidget1;
    QWidget *tab;
    QListWidget *listWidget_1;
    QWidget *tab_2;
    QListWidget *listWidget_2;
    QWidget *tab_3;
    QListWidget *listWidget_3;
    QWidget *tab_4;
    QListWidget *listWidget_4;
    QWidget *tab_5;
    QListWidget *listWidget_5;
    QWidget *tab_6;
    QListWidget *listWidget_6;
    QWidget *tab_7;
    QListWidget *listWidget_7;
    QWidget *tab_8;
    QListWidget *listWidget_8;
    QPushButton *disappoint_btn;

    void setupUi(QDialog *AppointWin)
    {
        if (AppointWin->objectName().isEmpty())
            AppointWin->setObjectName(QStringLiteral("AppointWin"));
        AppointWin->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AppointWin->sizePolicy().hasHeightForWidth());
        AppointWin->setSizePolicy(sizePolicy);
        AppointWin->setMinimumSize(QSize(500, 500));
        AppointWin->setMaximumSize(QSize(500, 1000));
        verticalLayout_3 = new QVBoxLayout(AppointWin);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(AppointWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(AppointWin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(label_4);

        comboBox = new QComboBox(AppointWin);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(AppointWin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label_5);

        tabWidget = new QTabWidget(AppointWin);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setMinimumSize(QSize(350, 100));
        tabWidget->setMaximumSize(QSize(350, 3000));
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        listWidget_general = new QListWidget(tab_9);
        listWidget_general->setObjectName(QStringLiteral("listWidget_general"));
        listWidget_general->setGeometry(QRect(0, 0, 341, 291));
        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        listWidget_moderator = new QListWidget(tab_10);
        listWidget_moderator->setObjectName(QStringLiteral("listWidget_moderator"));
        listWidget_moderator->setGeometry(QRect(0, 0, 351, 261));
        tabWidget->addTab(tab_10, QString());

        horizontalLayout_2->addWidget(tabWidget);


        verticalLayout_2->addLayout(horizontalLayout_2);

        appoint_btn = new QPushButton(AppointWin);
        appoint_btn->setObjectName(QStringLiteral("appoint_btn"));

        verticalLayout_2->addWidget(appoint_btn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_3 = new QLabel(AppointWin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(AppointWin);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(AppointWin);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);


        horizontalLayout_3->addLayout(verticalLayout);

        tabWidget1 = new QTabWidget(AppointWin);
        tabWidget1->setObjectName(QStringLiteral("tabWidget1"));
        tabWidget1->setEnabled(true);
        tabWidget1->setMinimumSize(QSize(330, 0));
        tabWidget1->setMaximumSize(QSize(330, 16777215));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        listWidget_1 = new QListWidget(tab);
        listWidget_1->setObjectName(QStringLiteral("listWidget_1"));
        listWidget_1->setGeometry(QRect(0, 0, 5000, 5000));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(listWidget_1->sizePolicy().hasHeightForWidth());
        listWidget_1->setSizePolicy(sizePolicy3);
        listWidget_1->setMinimumSize(QSize(500, 500));
        listWidget_1->setSelectionMode(QAbstractItemView::MultiSelection);
        tabWidget1->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        listWidget_2 = new QListWidget(tab_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 0, 5000, 5000));
        sizePolicy3.setHeightForWidth(listWidget_2->sizePolicy().hasHeightForWidth());
        listWidget_2->setSizePolicy(sizePolicy3);
        listWidget_2->setMinimumSize(QSize(500, 500));
        tabWidget1->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        listWidget_3 = new QListWidget(tab_3);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(0, 0, 5000, 5000));
        listWidget_3->setMinimumSize(QSize(500, 500));
        tabWidget1->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        listWidget_4 = new QListWidget(tab_4);
        listWidget_4->setObjectName(QStringLiteral("listWidget_4"));
        listWidget_4->setGeometry(QRect(-2, -2, 5001, 5001));
        listWidget_4->setMinimumSize(QSize(500, 500));
        tabWidget1->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        listWidget_5 = new QListWidget(tab_5);
        listWidget_5->setObjectName(QStringLiteral("listWidget_5"));
        listWidget_5->setGeometry(QRect(-2, -1, 5001, 4991));
        listWidget_5->setMinimumSize(QSize(500, 500));
        tabWidget1->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        listWidget_6 = new QListWidget(tab_6);
        listWidget_6->setObjectName(QStringLiteral("listWidget_6"));
        listWidget_6->setGeometry(QRect(-1, -1, 4881, 4931));
        listWidget_6->setMinimumSize(QSize(500, 500));
        tabWidget1->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        listWidget_7 = new QListWidget(tab_7);
        listWidget_7->setObjectName(QStringLiteral("listWidget_7"));
        listWidget_7->setGeometry(QRect(-1, 0, 5001, 5001));
        listWidget_7->setMinimumSize(QSize(500, 500));
        tabWidget1->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        listWidget_8 = new QListWidget(tab_8);
        listWidget_8->setObjectName(QStringLiteral("listWidget_8"));
        listWidget_8->setGeometry(QRect(0, 0, 5000, 5000));
        listWidget_8->setMinimumSize(QSize(500, 500));
        tabWidget1->addTab(tab_8, QString());

        horizontalLayout_3->addWidget(tabWidget1);


        verticalLayout_2->addLayout(horizontalLayout_3);

        disappoint_btn = new QPushButton(AppointWin);
        disappoint_btn->setObjectName(QStringLiteral("disappoint_btn"));

        verticalLayout_2->addWidget(disappoint_btn);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(AppointWin);

        tabWidget->setCurrentIndex(0);
        tabWidget1->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(AppointWin);
    } // setupUi

    void retranslateUi(QDialog *AppointWin)
    {
        AppointWin->setWindowTitle(QApplication::translate("AppointWin", "Dialog", nullptr));
        label_2->setText(QApplication::translate("AppointWin", "\344\273\273\345\221\275\347\211\210\344\270\273", nullptr));
        label_4->setText(QApplication::translate("AppointWin", "\350\257\267\351\200\211\346\213\251\347\211\210\345\235\227", nullptr));
        comboBox->setItemText(0, QApplication::translate("AppointWin", "\346\201\213\347\210\261\344\272\244\345\217\213", nullptr));
        comboBox->setItemText(1, QApplication::translate("AppointWin", "\345\215\207\345\255\246\344\272\244\346\265\201", nullptr));
        comboBox->setItemText(2, QApplication::translate("AppointWin", "\345\255\246\344\271\240\344\272\244\346\265\201", nullptr));
        comboBox->setItemText(3, QApplication::translate("AppointWin", "\350\277\220\345\212\250\345\201\245\345\272\267", nullptr));
        comboBox->setItemText(4, QApplication::translate("AppointWin", "\345\256\236\344\271\240\345\267\245\344\275\234", nullptr));
        comboBox->setItemText(5, QApplication::translate("AppointWin", "\344\274\221\351\227\262\345\250\261\344\271\220", nullptr));
        comboBox->setItemText(6, QApplication::translate("AppointWin", "\346\230\237\345\272\247\345\215\240\345\215\234", nullptr));
        comboBox->setItemText(7, QApplication::translate("AppointWin", "\345\244\226\345\207\272\346\227\205\346\270\270", nullptr));
        comboBox->setItemText(8, QString());

        label_5->setText(QApplication::translate("AppointWin", "\350\257\267\351\200\211\346\213\251\347\224\250\346\210\267", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("AppointWin", "\346\231\256\351\200\232\347\224\250\346\210\267", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("AppointWin", "\347\211\210\344\270\273", nullptr));
        appoint_btn->setText(QApplication::translate("AppointWin", "\344\273\273\345\221\275", nullptr));
        label_3->setText(QApplication::translate("AppointWin", "\345\215\270\344\273\273\347\211\210\344\270\273", nullptr));
        label_6->setText(QApplication::translate("AppointWin", "\350\257\267\351\200\211\346\213\251\347\211\210\345\235\227", nullptr));
        label_7->setText(QApplication::translate("AppointWin", "\350\257\267\351\200\211\346\213\251\347\224\250\346\210\267", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab), QApplication::translate("AppointWin", "\346\201\213\347\210\261\344\272\244\345\217\213", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_2), QApplication::translate("AppointWin", "\345\215\207\345\255\246\344\272\244\346\265\201", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_3), QApplication::translate("AppointWin", "\345\255\246\344\271\240\344\272\244\346\265\201", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_4), QApplication::translate("AppointWin", "\350\277\220\345\212\250\345\201\245\345\272\267", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_5), QApplication::translate("AppointWin", "\345\256\236\344\271\240\345\267\245\344\275\234", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_6), QApplication::translate("AppointWin", "\344\274\221\351\227\262\345\250\261\344\271\220", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_7), QApplication::translate("AppointWin", "\346\230\237\345\272\247\345\215\240\345\215\234", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_8), QApplication::translate("AppointWin", "\345\244\226\345\207\272\346\227\205\346\270\270", nullptr));
        disappoint_btn->setText(QApplication::translate("AppointWin", "\345\215\270\344\273\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppointWin: public Ui_AppointWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINTWIN_H
