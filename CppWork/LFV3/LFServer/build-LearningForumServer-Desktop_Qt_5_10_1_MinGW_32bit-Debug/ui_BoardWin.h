/********************************************************************************
** Form generated from reading UI file 'BoardWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDWIN_H
#define UI_BOARDWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoardWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget1;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_9;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_15;
    QListWidget *listWidget;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_10;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_16;
    QListWidget *listWidget_2;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_11;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_17;
    QListWidget *listWidget_3;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_12;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_18;
    QListWidget *listWidget_4;
    QWidget *tab_5;
    QHBoxLayout *horizontalLayout_13;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_19;
    QListWidget *listWidget_5;
    QWidget *tab_6;
    QHBoxLayout *horizontalLayout_14;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_8;
    QVBoxLayout *verticalLayout_21;
    QListWidget *listWidget_6;
    QWidget *tab_7;
    QHBoxLayout *horizontalLayout_15;
    QScrollArea *scrollArea_8;
    QWidget *scrollAreaWidgetContents_9;
    QVBoxLayout *verticalLayout_22;
    QListWidget *listWidget_7;
    QWidget *tab_8;
    QHBoxLayout *horizontalLayout_16;
    QScrollArea *scrollArea_9;
    QWidget *scrollAreaWidgetContents_10;
    QVBoxLayout *verticalLayout_23;
    QListWidget *listWidget_8;
    QWidget *tab_9;
    QVBoxLayout *verticalLayout_13;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_12;
    QListWidget *listWidget_search;
    QPushButton *refresh_btn;

    void setupUi(QWidget *BoardWin)
    {
        if (BoardWin->objectName().isEmpty())
            BoardWin->setObjectName(QStringLiteral("BoardWin"));
        BoardWin->resize(514, 533);
        verticalLayout_2 = new QVBoxLayout(BoardWin);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget1 = new QTabWidget(BoardWin);
        tabWidget1->setObjectName(QStringLiteral("tabWidget1"));
        tabWidget1->setEnabled(true);
        tabWidget1->setMinimumSize(QSize(500, 500));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_9 = new QHBoxLayout(tab);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        scrollArea_2 = new QScrollArea(tab);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy);
        scrollArea_2->setMinimumSize(QSize(0, 0));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 4000, 4000));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents_2->setMinimumSize(QSize(4000, 4000));
        scrollAreaWidgetContents_2->setMaximumSize(QSize(4000, 4000));
        verticalLayout_15 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        listWidget = new QListWidget(scrollAreaWidgetContents_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(0, 0));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout_15->addWidget(listWidget);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_9->addWidget(scrollArea_2);

        tabWidget1->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_10 = new QHBoxLayout(tab_2);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        scrollArea_3 = new QScrollArea(tab_2);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        sizePolicy.setHeightForWidth(scrollArea_3->sizePolicy().hasHeightForWidth());
        scrollArea_3->setSizePolicy(sizePolicy);
        scrollArea_3->setMinimumSize(QSize(0, 0));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 4000, 4000));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_3->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_3->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents_3->setMinimumSize(QSize(4000, 4000));
        scrollAreaWidgetContents_3->setMaximumSize(QSize(4000, 4000));
        verticalLayout_16 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        listWidget_2 = new QListWidget(scrollAreaWidgetContents_3);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        sizePolicy.setHeightForWidth(listWidget_2->sizePolicy().hasHeightForWidth());
        listWidget_2->setSizePolicy(sizePolicy);
        listWidget_2->setMinimumSize(QSize(0, 0));
        listWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout_16->addWidget(listWidget_2);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        horizontalLayout_10->addWidget(scrollArea_3);

        tabWidget1->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_11 = new QHBoxLayout(tab_3);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        scrollArea_4 = new QScrollArea(tab_3);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        sizePolicy.setHeightForWidth(scrollArea_4->sizePolicy().hasHeightForWidth());
        scrollArea_4->setSizePolicy(sizePolicy);
        scrollArea_4->setMinimumSize(QSize(0, 0));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 4000, 4000));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_4->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_4->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents_4->setMinimumSize(QSize(4000, 4000));
        scrollAreaWidgetContents_4->setMaximumSize(QSize(4000, 4000));
        verticalLayout_17 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        listWidget_3 = new QListWidget(scrollAreaWidgetContents_4);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        sizePolicy.setHeightForWidth(listWidget_3->sizePolicy().hasHeightForWidth());
        listWidget_3->setSizePolicy(sizePolicy);
        listWidget_3->setMinimumSize(QSize(0, 0));
        listWidget_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout_17->addWidget(listWidget_3);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        horizontalLayout_11->addWidget(scrollArea_4);

        tabWidget1->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        horizontalLayout_12 = new QHBoxLayout(tab_4);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        scrollArea_5 = new QScrollArea(tab_4);
        scrollArea_5->setObjectName(QStringLiteral("scrollArea_5"));
        sizePolicy.setHeightForWidth(scrollArea_5->sizePolicy().hasHeightForWidth());
        scrollArea_5->setSizePolicy(sizePolicy);
        scrollArea_5->setMinimumSize(QSize(0, 0));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 4000, 4000));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_5->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_5->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents_5->setMinimumSize(QSize(4000, 4000));
        scrollAreaWidgetContents_5->setMaximumSize(QSize(4000, 4000));
        verticalLayout_18 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        listWidget_4 = new QListWidget(scrollAreaWidgetContents_5);
        listWidget_4->setObjectName(QStringLiteral("listWidget_4"));
        sizePolicy.setHeightForWidth(listWidget_4->sizePolicy().hasHeightForWidth());
        listWidget_4->setSizePolicy(sizePolicy);
        listWidget_4->setMinimumSize(QSize(0, 0));
        listWidget_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout_18->addWidget(listWidget_4);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        horizontalLayout_12->addWidget(scrollArea_5);

        tabWidget1->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        horizontalLayout_13 = new QHBoxLayout(tab_5);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        scrollArea_6 = new QScrollArea(tab_5);
        scrollArea_6->setObjectName(QStringLiteral("scrollArea_6"));
        sizePolicy.setHeightForWidth(scrollArea_6->sizePolicy().hasHeightForWidth());
        scrollArea_6->setSizePolicy(sizePolicy);
        scrollArea_6->setMinimumSize(QSize(0, 0));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 4000, 4000));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_6->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_6->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents_6->setMinimumSize(QSize(4000, 4000));
        scrollAreaWidgetContents_6->setMaximumSize(QSize(4000, 4000));
        verticalLayout_19 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        listWidget_5 = new QListWidget(scrollAreaWidgetContents_6);
        listWidget_5->setObjectName(QStringLiteral("listWidget_5"));
        sizePolicy.setHeightForWidth(listWidget_5->sizePolicy().hasHeightForWidth());
        listWidget_5->setSizePolicy(sizePolicy);
        listWidget_5->setMinimumSize(QSize(0, 0));
        listWidget_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout_19->addWidget(listWidget_5);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        horizontalLayout_13->addWidget(scrollArea_6);

        tabWidget1->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        horizontalLayout_14 = new QHBoxLayout(tab_6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        scrollArea_7 = new QScrollArea(tab_6);
        scrollArea_7->setObjectName(QStringLiteral("scrollArea_7"));
        sizePolicy.setHeightForWidth(scrollArea_7->sizePolicy().hasHeightForWidth());
        scrollArea_7->setSizePolicy(sizePolicy);
        scrollArea_7->setMinimumSize(QSize(0, 0));
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QStringLiteral("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 4000, 4000));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_8->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_8->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents_8->setMinimumSize(QSize(4000, 4000));
        scrollAreaWidgetContents_8->setMaximumSize(QSize(4000, 4000));
        verticalLayout_21 = new QVBoxLayout(scrollAreaWidgetContents_8);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        listWidget_6 = new QListWidget(scrollAreaWidgetContents_8);
        listWidget_6->setObjectName(QStringLiteral("listWidget_6"));
        sizePolicy.setHeightForWidth(listWidget_6->sizePolicy().hasHeightForWidth());
        listWidget_6->setSizePolicy(sizePolicy);
        listWidget_6->setMinimumSize(QSize(0, 0));
        listWidget_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout_21->addWidget(listWidget_6);

        scrollArea_7->setWidget(scrollAreaWidgetContents_8);

        horizontalLayout_14->addWidget(scrollArea_7);

        tabWidget1->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        horizontalLayout_15 = new QHBoxLayout(tab_7);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        scrollArea_8 = new QScrollArea(tab_7);
        scrollArea_8->setObjectName(QStringLiteral("scrollArea_8"));
        sizePolicy.setHeightForWidth(scrollArea_8->sizePolicy().hasHeightForWidth());
        scrollArea_8->setSizePolicy(sizePolicy);
        scrollArea_8->setMinimumSize(QSize(0, 0));
        scrollArea_8->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QStringLiteral("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 4000, 4000));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_9->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_9->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents_9->setMinimumSize(QSize(4000, 4000));
        scrollAreaWidgetContents_9->setMaximumSize(QSize(4000, 4000));
        verticalLayout_22 = new QVBoxLayout(scrollAreaWidgetContents_9);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        listWidget_7 = new QListWidget(scrollAreaWidgetContents_9);
        listWidget_7->setObjectName(QStringLiteral("listWidget_7"));
        sizePolicy.setHeightForWidth(listWidget_7->sizePolicy().hasHeightForWidth());
        listWidget_7->setSizePolicy(sizePolicy);
        listWidget_7->setMinimumSize(QSize(0, 0));
        listWidget_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_7->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout_22->addWidget(listWidget_7);

        scrollArea_8->setWidget(scrollAreaWidgetContents_9);

        horizontalLayout_15->addWidget(scrollArea_8);

        tabWidget1->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        horizontalLayout_16 = new QHBoxLayout(tab_8);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        scrollArea_9 = new QScrollArea(tab_8);
        scrollArea_9->setObjectName(QStringLiteral("scrollArea_9"));
        sizePolicy.setHeightForWidth(scrollArea_9->sizePolicy().hasHeightForWidth());
        scrollArea_9->setSizePolicy(sizePolicy);
        scrollArea_9->setMinimumSize(QSize(0, 0));
        scrollArea_9->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName(QStringLiteral("scrollAreaWidgetContents_10"));
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 4000, 4000));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_10->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_10->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents_10->setMinimumSize(QSize(4000, 4000));
        scrollAreaWidgetContents_10->setMaximumSize(QSize(4000, 4000));
        verticalLayout_23 = new QVBoxLayout(scrollAreaWidgetContents_10);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        listWidget_8 = new QListWidget(scrollAreaWidgetContents_10);
        listWidget_8->setObjectName(QStringLiteral("listWidget_8"));
        sizePolicy.setHeightForWidth(listWidget_8->sizePolicy().hasHeightForWidth());
        listWidget_8->setSizePolicy(sizePolicy);
        listWidget_8->setMinimumSize(QSize(0, 0));
        listWidget_8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_8->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout_23->addWidget(listWidget_8);

        scrollArea_9->setWidget(scrollAreaWidgetContents_10);

        horizontalLayout_16->addWidget(scrollArea_9);

        tabWidget1->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        verticalLayout_13 = new QVBoxLayout(tab_9);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        scrollArea = new QScrollArea(tab_9);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(0, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 4000, 4000));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents->setMinimumSize(QSize(4000, 4000));
        scrollAreaWidgetContents->setMaximumSize(QSize(4000, 4000));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        listWidget_search = new QListWidget(scrollAreaWidgetContents);
        listWidget_search->setObjectName(QStringLiteral("listWidget_search"));
        sizePolicy.setHeightForWidth(listWidget_search->sizePolicy().hasHeightForWidth());
        listWidget_search->setSizePolicy(sizePolicy);
        listWidget_search->setMinimumSize(QSize(0, 0));
        listWidget_search->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_search->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout_12->addWidget(listWidget_search);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_13->addWidget(scrollArea);

        tabWidget1->addTab(tab_9, QString());

        verticalLayout->addWidget(tabWidget1);

        refresh_btn = new QPushButton(BoardWin);
        refresh_btn->setObjectName(QStringLiteral("refresh_btn"));

        verticalLayout->addWidget(refresh_btn);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(BoardWin);

        tabWidget1->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BoardWin);
    } // setupUi

    void retranslateUi(QWidget *BoardWin)
    {
        BoardWin->setWindowTitle(QApplication::translate("BoardWin", "Form", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab), QApplication::translate("BoardWin", "\346\201\213\347\210\261\344\272\244\345\217\213", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_2), QApplication::translate("BoardWin", "\345\215\207\345\255\246\344\272\244\346\265\201", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_3), QApplication::translate("BoardWin", "\345\255\246\344\271\240\344\272\244\346\265\201", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_4), QApplication::translate("BoardWin", "\350\277\220\345\212\250\345\201\245\345\272\267", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_5), QApplication::translate("BoardWin", "\345\256\236\344\271\240\345\267\245\344\275\234", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_6), QApplication::translate("BoardWin", "\344\274\221\351\227\262\345\250\261\344\271\220", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_7), QApplication::translate("BoardWin", "\346\230\237\345\272\247\345\215\240\345\215\234", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_8), QApplication::translate("BoardWin", "\345\244\226\345\207\272\346\227\205\346\270\270", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_9), QApplication::translate("BoardWin", "\346\220\234\347\264\242\347\273\223\346\236\234", nullptr));
        refresh_btn->setText(QApplication::translate("BoardWin", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoardWin: public Ui_BoardWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDWIN_H
