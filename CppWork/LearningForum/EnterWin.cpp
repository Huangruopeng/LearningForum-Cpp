#include "EnterWin.h"
#include "ui_EnterWin.h"
#include "Globle.h"
//#include "BoardWin.h"
#include <QMainWindow>
#include<QMessageBox>
#include "BoardWin.h"
#include "RegistWin.h"
#include "Forum.h"

EnterWin::EnterWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnterWin)
{
    ui->setupUi(this);
}

EnterWin::~EnterWin()
{
    delete ui;
}

void EnterWin::on_OK_btn_clicked()
{

    QString name=ui->username_LE->text();
    QString password=ui->password_LE->text();
   // this->close();
    //BoardWin *b=new BoardWin;
    // b->show();
    if(name.isEmpty()||password.isEmpty())
     {QMessageBox::information( this,("提示"), ("请完整输入用户名和密码!"));}
    else{
       int key=0;
       if(ui->Administractor_btn->isChecked()){
            int i=f.login(name,password,1);
              if(i!=-1){
                   current_admin=i;
                   key=1;
                   f.admin[current_admin]->user_login(f.admin[current_admin]->get_username());
                }
              else{
                  QMessageBox::warning(this,("提示"), ("用户名或密码错误!"));
                 }
         }
       else if(ui->User_btn->isChecked()){
        //else{
           int i=f.login(name,password,2);
           if(i!=-1){
                 if(type==1){
                    current_general=i;
                    key=1;
                    f.general[current_general]->user_login(f.general[current_general]->get_username());
                 }
                 else if(type==2){
                    current_moderator=i;
                    key=1;
                    f.moderator[current_moderator]->user_login(f.moderator[current_moderator]->get_username());
                  }
             }
           else
               { QMessageBox::warning(this,("提示"), ("用户名或密码错误!"));}
        }

           if(key==1){
              this->close();              
              //BoardWin *b=new BoardWin;
              //b->show();
              boardwindows =new BoardWin;
              boardwindows->show();
             }
     }
    //this->close();
   // BoardWin *b=new BoardWin;
  //   b->show();
}


void EnterWin::on_sign_in_btn_clicked()
{
     RegistWin *r=new RegistWin(this);
     r->show();

}

void EnterWin::on_Cancel_btn_clicked()
{
    this->close();
}
