#include "UserMyInfoWin.h"
#include "ui_UserMyInfoWin.h"
#include "Globle.h"
UserMyInfoWin::UserMyInfoWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserMyInfoWin)
{
    ui->setupUi(this);
    if(type==1)
    {
        ui->id_lb->setText(f.general[current_general]->get_id());
        ui->usename_lb->setText(f.general[current_general]->get_username());
        ui->gender_lb->setText(f.general[current_general]->get_gender());
        ui->type_lb->setText("普通用户");
       // ui->myboard_lb->setText("");
        ui->WeChat_lb->setText(f.general[current_general]->get_WeChatID());
    }
    else if(type==2){
        ui->id_lb->setText(f.moderator[current_moderator]->get_id());
        ui->usename_lb->setText(f.moderator[current_moderator]->get_username());
        ui->gender_lb->setText(f.moderator[current_moderator]->get_gender());
        ui->type_lb->setText("版主");
        //ui->type_lb->setText("jdns");

        QString myB="";
        for(int i=0;i<f.moderator[current_moderator]->myboard.size();i++){
            myB=myB+f.board[f.moderator[current_moderator]->myboard[i]]->get_type_name()+"  ";
        }

        ui->myboard_lb->setText(myB);
        ui->WeChat_lb->setText(f.moderator[current_moderator]->get_WeChatID());

    }
    else if(type==3){
        ui->id_lb->setText(f.admin[current_admin]->get_id());
        ui->usename_lb->setText(f.admin[current_admin]->get_username());
        ui->gender_lb->setText("");
        ui->type_lb->setText("管理员");
        ui->WeChat_lb->setText("");
    }
}

UserMyInfoWin::~UserMyInfoWin()
{
    delete ui;
}
