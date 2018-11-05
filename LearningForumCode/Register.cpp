#include "Register.h"
#include "ui_Register.h"
#include "RegistAdmin.h"
#include <QMessageBox>
Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_OK_btn_clicked()
{
     QString name=ui->username_LE->text();
     QString password=ui->password_LE->text();
     QString confirmPW=ui->confirm_password_LE->text();
     if(name.isEmpty() || password.isEmpty() || confirmPW.isEmpty())
     {
         QMessageBox msgBox;
         msgBox.setText("必填项不能为空！");
         msgBox.exec();
     }

     if(password !=confirmPW)
     {
         QMessageBox msgBox;
         msgBox.setText("两次输入的密码不相同！");
         msgBox.exec();
     }




}





void Register::on_RegistAdmin_btn_clicked()
{

    RegistAdmin *ra=new RegistAdmin(this);
    ra->show();
}
