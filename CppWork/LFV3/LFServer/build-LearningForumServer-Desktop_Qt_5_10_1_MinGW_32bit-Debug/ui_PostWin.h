/********************************************************************************
** Form generated from reading UI file 'PostWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTWIN_H
#define UI_POSTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PostWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *poster;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *time;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *refresh_btn;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget;

    void setupUi(QDialog *PostWin)
    {
        if (PostWin->objectName().isEmpty())
            PostWin->setObjectName(QStringLiteral("PostWin"));
        PostWin->resize(434, 460);
        verticalLayout_2 = new QVBoxLayout(PostWin);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(PostWin);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        poster = new QLabel(PostWin);
        poster->setObjectName(QStringLiteral("poster"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(poster->sizePolicy().hasHeightForWidth());
        poster->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(poster);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(PostWin);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        title = new QLabel(PostWin);
        title->setObjectName(QStringLiteral("title"));
        sizePolicy.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(title);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(PostWin);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        time = new QLabel(PostWin);
        time->setObjectName(QStringLiteral("time"));
        sizePolicy.setHeightForWidth(time->sizePolicy().hasHeightForWidth());
        time->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(time);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        refresh_btn = new QPushButton(PostWin);
        refresh_btn->setObjectName(QStringLiteral("refresh_btn"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(refresh_btn->sizePolicy().hasHeightForWidth());
        refresh_btn->setSizePolicy(sizePolicy1);
        refresh_btn->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(refresh_btn);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 2);
        horizontalLayout_4->setStretch(3, 2);
        horizontalLayout_4->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(PostWin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_5->addWidget(label_4);

        textBrowser = new QTextBrowser(PostWin);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout_5->addWidget(textBrowser);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(PostWin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_6->addWidget(label_5);

        scrollArea = new QScrollArea(PostWin);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 300));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 4000, 4000));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy2);
        scrollAreaWidgetContents->setMinimumSize(QSize(4000, 4000));
        scrollAreaWidgetContents->setMaximumSize(QSize(4000, 4000));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy3);
        listWidget->setMinimumSize(QSize(0, 0));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout_3->addWidget(listWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_6->addWidget(scrollArea);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(PostWin);

        QMetaObject::connectSlotsByName(PostWin);
    } // setupUi

    void retranslateUi(QDialog *PostWin)
    {
        PostWin->setWindowTitle(QApplication::translate("PostWin", "Dialog", nullptr));
        label->setText(QApplication::translate("PostWin", "\345\217\221\345\270\226\344\272\272", nullptr));
        poster->setText(QString());
        label_3->setText(QApplication::translate("PostWin", "\346\240\207\351\242\230", nullptr));
        title->setText(QString());
        label_2->setText(QApplication::translate("PostWin", "\345\217\221\345\270\226\346\227\266\351\227\264", nullptr));
        time->setText(QString());
        refresh_btn->setText(QApplication::translate("PostWin", "\345\210\267\346\226\260", nullptr));
        label_4->setText(QApplication::translate("PostWin", "\345\206\205\345\256\271", nullptr));
        label_5->setText(QApplication::translate("PostWin", "\350\257\204\350\256\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PostWin: public Ui_PostWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTWIN_H