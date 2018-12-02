/********************************************************************************
** Form generated from reading UI file 'WritePostWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITEPOSTWIN_H
#define UI_WRITEPOSTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WritePostWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *poster;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *title_LE;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *content_TE;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *OK_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel_btn;

    void setupUi(QDialog *WritePostWin)
    {
        if (WritePostWin->objectName().isEmpty())
            WritePostWin->setObjectName(QStringLiteral("WritePostWin"));
        WritePostWin->resize(455, 392);
        verticalLayout_2 = new QVBoxLayout(WritePostWin);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(WritePostWin);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        poster = new QLabel(WritePostWin);
        poster->setObjectName(QStringLiteral("poster"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(poster->sizePolicy().hasHeightForWidth());
        poster->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(poster);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);

        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(WritePostWin);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(WritePostWin);
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

        horizontalLayout_2->addWidget(comboBox);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(WritePostWin);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        title_LE = new QLineEdit(WritePostWin);
        title_LE->setObjectName(QStringLiteral("title_LE"));

        horizontalLayout_3->addWidget(title_LE);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(WritePostWin);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        scrollArea = new QScrollArea(WritePostWin);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1000, 1000));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        scrollAreaWidgetContents->setMinimumSize(QSize(1000, 1000));
        scrollAreaWidgetContents->setMaximumSize(QSize(1000, 1000));
        content_TE = new QTextEdit(scrollAreaWidgetContents);
        content_TE->setObjectName(QStringLiteral("content_TE"));
        content_TE->setGeometry(QRect(0, 0, 1000, 1000));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(content_TE->sizePolicy().hasHeightForWidth());
        content_TE->setSizePolicy(sizePolicy2);
        content_TE->setMinimumSize(QSize(1000, 1000));
        content_TE->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_5->addWidget(scrollArea);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        OK_btn = new QPushButton(WritePostWin);
        OK_btn->setObjectName(QStringLiteral("OK_btn"));

        horizontalLayout_8->addWidget(OK_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        cancel_btn = new QPushButton(WritePostWin);
        cancel_btn->setObjectName(QStringLiteral("cancel_btn"));

        horizontalLayout_8->addWidget(cancel_btn);


        verticalLayout->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(WritePostWin);

        QMetaObject::connectSlotsByName(WritePostWin);
    } // setupUi

    void retranslateUi(QDialog *WritePostWin)
    {
        WritePostWin->setWindowTitle(QApplication::translate("WritePostWin", "Dialog", nullptr));
        label->setText(QApplication::translate("WritePostWin", "\345\217\221\345\270\226\344\272\272", nullptr));
        poster->setText(QString());
        label_2->setText(QApplication::translate("WritePostWin", "\351\200\211\346\213\251\347\211\210\345\235\227", nullptr));
        comboBox->setItemText(0, QApplication::translate("WritePostWin", "\346\201\213\347\210\261\344\272\244\345\217\213", nullptr));
        comboBox->setItemText(1, QApplication::translate("WritePostWin", "\345\215\207\345\255\246\344\272\244\346\265\201", nullptr));
        comboBox->setItemText(2, QApplication::translate("WritePostWin", "\345\255\246\344\271\240\344\272\244\346\265\201", nullptr));
        comboBox->setItemText(3, QApplication::translate("WritePostWin", "\350\277\220\345\212\250\345\201\245\345\272\267", nullptr));
        comboBox->setItemText(4, QApplication::translate("WritePostWin", "\345\256\236\344\271\240\345\267\245\344\275\234", nullptr));
        comboBox->setItemText(5, QApplication::translate("WritePostWin", "\344\274\221\351\227\262\345\250\261\344\271\220", nullptr));
        comboBox->setItemText(6, QApplication::translate("WritePostWin", "\346\230\237\345\272\247\345\215\240\345\215\234", nullptr));
        comboBox->setItemText(7, QApplication::translate("WritePostWin", "\345\244\226\345\207\272\346\227\205\346\270\270", nullptr));
        comboBox->setItemText(8, QString());

        label_3->setText(QApplication::translate("WritePostWin", "\346\240\207\351\242\230", nullptr));
        label_4->setText(QApplication::translate("WritePostWin", "\345\206\205\345\256\271", nullptr));
        OK_btn->setText(QApplication::translate("WritePostWin", "\347\241\256\350\256\244", nullptr));
        cancel_btn->setText(QApplication::translate("WritePostWin", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WritePostWin: public Ui_WritePostWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITEPOSTWIN_H
