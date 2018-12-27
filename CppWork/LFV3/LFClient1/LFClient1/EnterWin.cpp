#include "EnterWin.h"
#include "ui_EnterWin.h"
#include "Globle.h"
//#include "BoardWin.h"
#include <QMainWindow>
#include<QMessageBox>
#include "BoardWin.h"
#include "RegistWin.h"
#include "Forum.h"
#include <QTcpSocket>

EnterWin::EnterWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnterWin)
{
    ui->setupUi(this);
    ui->password_LE->setText("66");
    ui->username_LE->setText("byr001");
}

EnterWin::~EnterWin()
{
    delete ui;
}

void EnterWin::on_OK_btn_clicked()
{

    QString name=ui->username_LE->text();
    QString password=ui->password_LE->text();

    int key=0;
    if(ui->Anonymous_btn->isChecked()){
        type=4;
        key=1;
        QString msg="login<<>>4#";
        tcpsocket->write(msg.toUtf8().data());
    }
    else{
        if(name.isEmpty()||password.isEmpty())
         {QMessageBox::information( this,("提示"), ("请完整输入用户名和密码!"));}
        else{


           if(ui->Administractor_btn->isChecked()){

                QString msg="login<<>>3#" + name+password;
                tcpsocket->write(msg.toUtf8().data());

             }
           else if(ui->User_btn->isChecked()){

               QString msg="login<<>>1#" + name+"#"+password;
               tcpsocket->write(msg.toUtf8().data());
             }
           }
        }

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
