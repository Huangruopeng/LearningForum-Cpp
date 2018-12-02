#include "UserInfoWin.h"
#include "ui_UserInfoWin.h"
#include "Globle.h"
UserInfoWin::UserInfoWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserInfoWin)
{
    ui->setupUi(this);
    //ui->listWidget_general->clear();
    //ui->listWidget_moderator->clear();

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

}

UserInfoWin::~UserInfoWin()
{
    delete ui;
}

void UserInfoWin::on_listWidget_general_clicked(const QModelIndex &index)
{
    ui->id_lb->setText(f.general[ui->listWidget_general->currentRow()]->get_id());
    ui->usename_lb->setText(f.general[ui->listWidget_general->currentRow()]->get_username());
    ui->gender_lb->setText(f.general[ui->listWidget_general->currentRow()]->get_gender());
    ui->type_lb->setText("普通用户");
    ui->WeChat_lb->setText(f.general[ui->listWidget_general->currentRow()]->get_WeChatID());
}

void UserInfoWin::on_listWidget_moderator_clicked(const QModelIndex &index)
{  ui->id_lb->setText(f.moderator[ui->listWidget_moderator->currentRow()]->get_id());
    ui->usename_lb->setText(f.moderator[ui->listWidget_moderator->currentRow()]->get_username());
    ui->gender_lb->setText(f.moderator[ui->listWidget_moderator->currentRow()]->get_gender());
    ui->type_lb->setText("版主");
    ui->WeChat_lb->setText(f.moderator[ui->listWidget_moderator->currentRow()]->get_WeChatID());

}
