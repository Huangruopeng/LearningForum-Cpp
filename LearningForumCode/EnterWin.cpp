#include "EnterWin.h"
#include "ui_EnterWin.h"
#include "Globle.h"
//#include "BoardWin.h"
#include <QMainWindow>
#include "BoardWindows.h"
#include "Register.h"
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
    //
    this->close();
    BoardWindows *b=new BoardWindows;
     b->show();

    //
    if(ui->Administractor_btn->isChecked())
    {
        int i=f.login(name,password,1);
        if(i!=0)
        {
            admin=f.admin[i];
            this->close();
            BoardWindows *b=new BoardWindows(this);
            b->show();
            current_admin=i;
            type=1;

        }
        else
        {
            //error
        }

    }
    else if(ui->User_btn->isChecked())
    {
        int i=f.login(name,password,2);
        if(i!=0)
        {
            general=f.general[i];
            this->close();
            BoardWindows *b=new BoardWindows(this);
            b->show();
            current_general=i;

        }
    }
}


void EnterWin::on_sign_in_btn_clicked()
{
    QString name=ui->username_LE->text();
    QString password=ui->password_LE->text();

     Register *r=new Register(this);
     r->show();

}

void EnterWin::on_Cancel_btn_clicked()
{

}
