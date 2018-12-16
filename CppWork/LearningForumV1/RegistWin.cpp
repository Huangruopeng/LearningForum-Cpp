#include "RegistWin.h"
#include "ui_RegistWin.h"
#include "RegistAdminWin.h"
#include "Globle.h"
#include "UserGeneral.h"
#include <QMessageBox>
RegistWin::RegistWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistWin)
{
    ui->setupUi(this);
}

RegistWin::~RegistWin()
{
    delete ui;
}

void RegistWin::on_Cancel_btn_clicked()
{
    this->close();
}

void RegistWin::on_OK_btn_clicked()
{
    QString name=ui->username_LE->text();
    QString password=ui->password_LE->text();
    QString confirmpw=ui->confirm_password_LE->text();
    QString WeChat=ui->WeChat_LE->text();
    QString gender;
    if(ui->female->isChecked()){
        gender="小姐姐";
    }
    else if(ui->male->isChecked()){
        gender="小哥哥";
    }
    else if(ui->secret->isChecked()){
        gender="秘密";
    }

    if(name.isEmpty()||password.isEmpty())
         QMessageBox::warning( this,("Warning"), ("请完整填写名字!"));

    if(password!=confirmpw)
        QMessageBox::warning( this,("Warning"), ("两次密码输入不相同！请重新输入！"));


    GeneralUser *g=new GeneralUser;
    int idn=rand();
    QString ids=QString::number(idn,10);
    g->initial(name,password,"n"+ids);
    f.general.push_back(g);



}

void RegistWin::on_RegistAdmin_btn_clicked()
{
    this->close();
    RegistAdminWin *rw=new RegistAdminWin;
    rw->show();
}
