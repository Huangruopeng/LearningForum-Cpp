#include "AppointWin.h"
#include "ui_AppointWin.h"
#include "Globle.h"
#include <QMessageBox>
int appointUser;
int appointBoard;
int disappointModerator;
int appointType;
int disappointBoard;
AppointWin::AppointWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AppointWin)
{
    ui->setupUi(this);

    this->refresh();




}

AppointWin::~AppointWin()
{
    delete ui;
}


void AppointWin::on_listWidget_general_clicked(const QModelIndex &index)
{
    appointUser=ui->listWidget_general->currentRow();
    appointBoard=ui->comboBox->currentIndex();
    appointType=1;
}



void AppointWin::on_listWidget_moderator_clicked(const QModelIndex &index)
{   appointUser=ui->listWidget_moderator->currentRow();
    appointBoard=ui->comboBox->currentIndex();
    appointType=2;

}

void AppointWin::on_appoint_btn_clicked()
{
    f.admin[current_admin]->Appoint_moderator(appointType,appointBoard,appointUser);
    QMessageBox::information(this, ("提示"), ("任命成功！"));
    this->refresh();
    QString ForumStr=f.GetForumStr();
    QString msg="update<<>>"+ForumStr;
    tcpsocket->write(msg.toUtf8().data());

}

void AppointWin::on_listWidget_1_clicked(const QModelIndex &index)
{   QString moderatorname=ui->listWidget_1->currentItem()->text();
    int t=f.moderator.size();
    for(int i=0;i<t;i++){
        if(f.moderator[i]->get_username()==moderatorname){
            disappointModerator=i;
            break;
        }
    }
}

void AppointWin::on_listWidget_2_clicked(const QModelIndex &index)
{   QString moderatorname=ui->listWidget_2->currentItem()->text();
    int t=f.moderator.size();
    for(int i=0;i<t;i++){
        if(f.moderator[i]->get_username()==moderatorname){
            disappointModerator=i;
            break;
        }
    }

}

void AppointWin::on_listWidget_3_clicked(const QModelIndex &index)
{  QString moderatorname=ui->listWidget_3->currentItem()->text();
    int t=f.moderator.size();
    for(int i=0;i<t;i++){
        if(f.moderator[i]->get_username()==moderatorname){
            disappointModerator=i;
            break;
        }
    }

}

void AppointWin::on_listWidget_4_clicked(const QModelIndex &index)
{  QString moderatorname=ui->listWidget_4->currentItem()->text();
    int t=f.moderator.size();
    for(int i=0;i<t;i++){
        if(f.moderator[i]->get_username()==moderatorname){
            disappointModerator=i;
            break;
        }
    }

}

void AppointWin::on_listWidget_5_clicked(const QModelIndex &index)
{   QString moderatorname=ui->listWidget_5->currentItem()->text();
    int t=f.moderator.size();
    for(int i=0;i<t;i++){
        if(f.moderator[i]->get_username()==moderatorname){
            disappointModerator=i;
            break;
        }
    }

}

void AppointWin::on_listWidget_6_clicked(const QModelIndex &index)
{   QString moderatorname=ui->listWidget_6->currentItem()->text();
    int t=f.moderator.size();
    for(int i=0;i<t;i++){
        if(f.moderator[i]->get_username()==moderatorname){
            disappointModerator=i;
            break;
        }
    }

}

void AppointWin::on_listWidget_7_clicked(const QModelIndex &index)
{  QString moderatorname=ui->listWidget_7->currentItem()->text();
    int t=f.moderator.size();
    for(int i=0;i<t;i++){
        if(f.moderator[i]->get_username()==moderatorname){
            disappointModerator=i;
            break;
        }
    }

}

void AppointWin::on_listWidget_8_clicked(const QModelIndex &index)
{  QString moderatorname=ui->listWidget_8->currentItem()->text();
    int t=f.moderator.size();
    for(int i=0;i<t;i++){
        if(f.moderator[i]->get_username()==moderatorname){
            disappointModerator=i;
            break;
        }
    }

}

void AppointWin::on_disappoint_btn_clicked()
{
    f.admin[current_admin]->Dismiss_moderator(disappointBoard,disappointModerator);
    //QMessageBox::( this,("Warning"), ("You don't have the priority!"));
    QMessageBox::information(this, ("提示"), ("卸任成功！"));
    this->refresh();

    QString ForumStr=f.GetForumStr();
     QString msg="update<<>>"+ForumStr;
     tcpsocket->write(msg.toUtf8().data());
}

void AppointWin::refresh()
{   ui->listWidget_1->clear();
    ui->listWidget_2->clear();
    ui->listWidget_3->clear();
    ui->listWidget_4->clear();
    ui->listWidget_5->clear();
    ui->listWidget_6->clear();
    ui->listWidget_7->clear();
    ui->listWidget_8->clear();

    ui->listWidget_general->clear();
    ui->listWidget_moderator->clear();

    int t=f.general.size();
    for(int i=0;i<t;i++){
        QString s=f.general[i]->get_username();
        ui->listWidget_general->addItem(s);
    }
    t=f.moderator.size();
    for(int i=0;i<t;i++){
        QString s=f.moderator[i]->get_username();
        ui->listWidget_moderator->addItem(s);
    }

    for(int i=0;i<t;i++){
        QString s=f.moderator[i]->get_username();
        int t=f.moderator[i]->myboard.size();
        for(int j=0;j<t;j++){
            int n=f.moderator[i]->myboard[j];
            if(n==0){
                ui->listWidget_1->addItem(s);
            }
            else if(n==1){
                ui->listWidget_2->addItem(s);
            }
            else if(n==2){
                ui->listWidget_3->addItem(s);
            }
            else if(n==3){
                ui->listWidget_4->addItem(s);
            }
            else if(n==4){
                ui->listWidget_5->addItem(s);
            }
            else if(n==5){
                ui->listWidget_6->addItem(s);
            }
            else if(n==6){
                ui->listWidget_7->addItem(s);
            }
            else if(n==7){
                ui->listWidget_8->addItem(s);
            }
        }


    }

}
