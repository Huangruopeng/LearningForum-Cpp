#include "UserAnonymousWin.h"
#include "ui_UserAnonymousWin.h"
#include "Globle.h"

UserAnonymousWin::UserAnonymousWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserAnonymousWin)
{
    ui->setupUi(this);
}

UserAnonymousWin::~UserAnonymousWin()
{
    delete ui;
}

void UserAnonymousWin::on_OK_btn_clicked()
{
    f.logout();
    boardwindows->close();
    EnterWin *ew=new EnterWin;
    ew->show();
}

void UserAnonymousWin::on_pushButton_clicked()
{
     this->close();
}
