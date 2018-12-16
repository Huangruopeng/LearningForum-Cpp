#include "WritePostWin.h"
#include "ui_WritePostWin.h"
#include "Globle.h"
#include <QMessageBox>
WritePostWin::WritePostWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WritePostWin)
{
    ui->setupUi(this);
    if(type==1){
        ui->poster->setText(f.general[current_general]->get_username());
    }
    else if(type==2){
        ui->poster->setText(f.moderator[current_moderator]->get_username());
    }
    else if(type==3){
        ui->poster->setText(f.admin[current_admin]->get_username());
    }

}

WritePostWin::~WritePostWin()
{
    delete ui;
}

void WritePostWin::on_OK_btn_clicked()
{   int b=ui->comboBox->currentIndex();
    QString t=ui->title_LE->text();
    QString c=ui->content_TE->toPlainText();
    QString i,u,T;
    T=f.get_current_time();
    if(type==1){
        i=f.general[current_general]->get_id();
        u=f.general[current_general]->get_username();
        f.general[current_general]->write_post(b,t,c,i,u,T);
    }
    else if(type==2){
        i=f.moderator[current_moderator]->get_id();
        u=f.moderator[current_moderator]->get_username();
        f.moderator[current_moderator]->write_post(b,t,c,i,u,T);
    }
    else if(type==3){
        QMessageBox::warning(this,("提示"), ("管理员不能发帖！"));
        //i=f.admin[current_admin]->get_id();
        //u=f.admin[current_admin]->get_username();
        //f.admin[current_admin
    }


   /* Post *p=new Post;
    p->set_post(t,c,i,u,T);
    f.board[whichboard]->add_post(p);*/

    QMessageBox::information(this,("提示"), ("发帖成功！"));
}
