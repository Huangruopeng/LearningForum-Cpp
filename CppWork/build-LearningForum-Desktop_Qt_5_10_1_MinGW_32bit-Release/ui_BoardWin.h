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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoardWin
{
public:
    QAction *actionAppoiny_Disappoint;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *ProfilePicture_label;
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
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Board_1;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_5;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_7;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_4;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_11;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTabWidget *tabWidget1;
    QWidget *tab;
    QListWidget *listWidget;
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
    QHBoxLayout *horizontalLayout_7;
    QPushButton *set_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *writepost_btn;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuj;

    void setupUi(QMainWindow *BoardWin)
    {
        if (BoardWin->objectName().isEmpty())
            BoardWin->setObjectName(QStringLiteral("BoardWin"));
        BoardWin->resize(728, 621);
        actionAppoiny_Disappoint = new QAction(BoardWin);
        actionAppoiny_Disappoint->setObjectName(QStringLiteral("actionAppoiny_Disappoint"));
        centralWidget = new QWidget(BoardWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_9 = new QHBoxLayout(centralWidget);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        ProfilePicture_label = new QLabel(centralWidget);
        ProfilePicture_label->setObjectName(QStringLiteral("ProfilePicture_label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProfilePicture_label->sizePolicy().hasHeightForWidth());
        ProfilePicture_label->setSizePolicy(sizePolicy);
        ProfilePicture_label->setStyleSheet(QStringLiteral("image: url(:/png/ProfilePic.png);"));
        ProfilePicture_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(ProfilePicture_label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        username_label = new QLabel(centralWidget);
        username_label->setObjectName(QStringLiteral("username_label"));

        horizontalLayout->addWidget(username_label);

        usename_lb = new QLabel(centralWidget);
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
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        id_label = new QLabel(centralWidget);
        id_label->setObjectName(QStringLiteral("id_label"));

        horizontalLayout_2->addWidget(id_label);

        id_lb = new QLabel(centralWidget);
        id_lb->setObjectName(QStringLiteral("id_lb"));
        sizePolicy1.setHeightForWidth(id_lb->sizePolicy().hasHeightForWidth());
        id_lb->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(id_lb);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        username_label_3 = new QLabel(centralWidget);
        username_label_3->setObjectName(QStringLiteral("username_label_3"));

        horizontalLayout_3->addWidget(username_label_3);

        type_lb = new QLabel(centralWidget);
        type_lb->setObjectName(QStringLiteral("type_lb"));
        sizePolicy1.setHeightForWidth(type_lb->sizePolicy().hasHeightForWidth());
        type_lb->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(type_lb);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(1, 3);

        verticalLayout_10->addLayout(horizontalLayout_6);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Board_1 = new QPushButton(centralWidget);
        Board_1->setObjectName(QStringLiteral("Board_1"));
        sizePolicy.setHeightForWidth(Board_1->sizePolicy().hasHeightForWidth());
        Board_1->setSizePolicy(sizePolicy);
        Board_1->setStyleSheet(QString::fromUtf8("border-image: url(:/png/\346\201\213\347\210\261\344\272\244\345\217\213.png);"));

        verticalLayout_2->addWidget(Board_1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(label_2);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/png/\345\215\207\345\255\246.png);"));

        verticalLayout_3->addWidget(pushButton_2);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_3->addWidget(label_4);

        verticalLayout_3->setStretch(0, 10);
        verticalLayout_3->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/png/\345\255\246\344\271\240\344\272\244\346\265\201.png);"));

        verticalLayout_4->addWidget(pushButton_3);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_4->addWidget(label_5);

        verticalLayout_4->setStretch(0, 10);
        verticalLayout_4->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/png/\350\277\220\345\212\250.png);"));

        verticalLayout_6->addWidget(pushButton_5);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);
        label_11->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_6->addWidget(label_11);

        verticalLayout_6->setStretch(0, 10);
        verticalLayout_6->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout_6, 1, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/png/\345\267\245\344\275\234.png);"));

        verticalLayout_8->addWidget(pushButton_7);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);
        label_9->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_8->addWidget(label_9);

        verticalLayout_8->setStretch(0, 10);
        verticalLayout_8->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout_8, 2, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/png/\344\274\221\351\227\262.png);"));

        verticalLayout_5->addWidget(pushButton_4);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        label_6->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_5->addWidget(label_6);

        verticalLayout_5->setStretch(0, 10);
        verticalLayout_5->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout_5, 2, 1, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setStyleSheet(QString::fromUtf8("border-image: url(:/png/\346\230\237\345\272\247.png);"));

        verticalLayout_9->addWidget(pushButton_11);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);
        label_10->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_9->addWidget(label_10);

        verticalLayout_9->setStretch(0, 10);
        verticalLayout_9->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout_9, 3, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/png/\346\227\205\346\270\270.png);"));

        verticalLayout_7->addWidget(pushButton_6);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_7->addWidget(label_7);

        verticalLayout_7->setStretch(0, 10);
        verticalLayout_7->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout_7, 3, 1, 1, 1);


        verticalLayout_10->addLayout(gridLayout);

        verticalLayout_10->setStretch(0, 1);
        verticalLayout_10->setStretch(1, 3);

        horizontalLayout_8->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout_11->addLayout(horizontalLayout_5);

        tabWidget1 = new QTabWidget(centralWidget);
        tabWidget1->setObjectName(QStringLiteral("tabWidget1"));
        tabWidget1->setEnabled(true);
        tabWidget1->setMinimumSize(QSize(500, 500));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        listWidget = new QListWidget(tab);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 5000, 5000));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(500, 500));
        listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        tabWidget1->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        listWidget_2 = new QListWidget(tab_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 0, 5000, 5000));
        sizePolicy.setHeightForWidth(listWidget_2->sizePolicy().hasHeightForWidth());
        listWidget_2->setSizePolicy(sizePolicy);
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

        verticalLayout_11->addWidget(tabWidget1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        set_btn = new QPushButton(centralWidget);
        set_btn->setObjectName(QStringLiteral("set_btn"));

        horizontalLayout_7->addWidget(set_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        writepost_btn = new QPushButton(centralWidget);
        writepost_btn->setObjectName(QStringLiteral("writepost_btn"));

        horizontalLayout_7->addWidget(writepost_btn);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_11);

        horizontalLayout_8->setStretch(0, 2);
        horizontalLayout_8->setStretch(1, 5);

        horizontalLayout_9->addLayout(horizontalLayout_8);

        BoardWin->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(BoardWin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BoardWin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BoardWin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BoardWin->setStatusBar(statusBar);
        menuBar = new QMenuBar(BoardWin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 728, 17));
        menuj = new QMenu(menuBar);
        menuj->setObjectName(QStringLiteral("menuj"));
        BoardWin->setMenuBar(menuBar);

        menuBar->addAction(menuj->menuAction());
        menuj->addSeparator();
        menuj->addAction(actionAppoiny_Disappoint);

        retranslateUi(BoardWin);

        tabWidget1->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(BoardWin);
    } // setupUi

    void retranslateUi(QMainWindow *BoardWin)
    {
        BoardWin->setWindowTitle(QApplication::translate("BoardWin", "BoardWin", nullptr));
        actionAppoiny_Disappoint->setText(QApplication::translate("BoardWin", "Appoiny/Disappoint", nullptr));
        ProfilePicture_label->setText(QString());
        username_label->setText(QApplication::translate("BoardWin", "\347\224\250\346\210\267\345\220\215", nullptr));
        usename_lb->setText(QString());
        id_label->setText(QApplication::translate("BoardWin", "  ID ", nullptr));
        id_lb->setText(QString());
        username_label_3->setText(QApplication::translate("BoardWin", "\347\261\273 \345\236\213", nullptr));
        type_lb->setText(QString());
        Board_1->setText(QString());
        label_2->setText(QApplication::translate("BoardWin", "\346\201\213\347\210\261\344\272\244\345\217\213", nullptr));
        pushButton_2->setText(QString());
        label_4->setText(QApplication::translate("BoardWin", "\345\215\207\345\255\246\344\272\244\346\265\201", nullptr));
        pushButton_3->setText(QString());
        label_5->setText(QApplication::translate("BoardWin", "\345\255\246\344\271\240\344\272\244\346\265\201", nullptr));
        pushButton_5->setText(QString());
        label_11->setText(QApplication::translate("BoardWin", "\350\277\220\345\212\250\345\201\245\345\272\267", nullptr));
        pushButton_7->setText(QString());
        label_9->setText(QApplication::translate("BoardWin", "\345\256\236\344\271\240\345\267\245\344\275\234", nullptr));
        pushButton_4->setText(QString());
        label_6->setText(QApplication::translate("BoardWin", "\344\274\221\351\227\262\345\250\261\344\271\220", nullptr));
        pushButton_11->setText(QString());
        label_10->setText(QApplication::translate("BoardWin", "\346\230\237\345\272\247\345\215\240\345\215\234", nullptr));
        pushButton_6->setText(QString());
        label_7->setText(QApplication::translate("BoardWin", "\345\244\226\345\207\272\346\227\205\346\270\270", nullptr));
        pushButton->setText(QApplication::translate("BoardWin", "\346\220\234\347\264\242", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab), QApplication::translate("BoardWin", "\346\201\213\347\210\261\344\272\244\345\217\213", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_2), QApplication::translate("BoardWin", "\345\215\207\345\255\246\344\272\244\346\265\201", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_3), QApplication::translate("BoardWin", "\345\255\246\344\271\240\344\272\244\346\265\201", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_4), QApplication::translate("BoardWin", "\350\277\220\345\212\250\345\201\245\345\272\267", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_5), QApplication::translate("BoardWin", "\345\256\236\344\271\240\345\267\245\344\275\234", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_6), QApplication::translate("BoardWin", "\344\274\221\351\227\262\345\250\261\344\271\220", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_7), QApplication::translate("BoardWin", "\346\230\237\345\272\247\345\215\240\345\215\234", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab_8), QApplication::translate("BoardWin", "\345\244\226\345\207\272\346\227\205\346\270\270", nullptr));
        set_btn->setText(QApplication::translate("BoardWin", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        writepost_btn->setText(QApplication::translate("BoardWin", "\346\210\221\350\246\201\345\217\221\345\270\226", nullptr));
        menuj->setTitle(QApplication::translate("BoardWin", "\347\256\241\347\220\206\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoardWin: public Ui_BoardWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDWIN_H
