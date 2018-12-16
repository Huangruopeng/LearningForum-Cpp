#include "User.h"
#include "UserMyInfoWin.h"
#include "PostWin.h"
#include <QMessageBox>
#include "EnterWin.h"
#include "Globle.h"
User::User()
{
}
User::~User()
{

}
void User::change_password(QString s)
{    password=s;

}

void User::change_username(QString s)
{
    username=s;
}

void User::change_id(QString s)
{
    id=s;
}
QString User::get_id()
{
    return id;
}

QString User::get_password()
{
    return password;
}

QString User::get_username()
{
    return username;
}

void User::set_password(QString s)
{
    password=s;
}

void User::set_username(QString s)
{
    username=s;
}

void User::set_id(QString s)
{
    id=s;
}

void User::view_post()
{
    //弹出帖子窗口
}

void User::view_my_information()
{
    UserMyInfoWin *myi= new UserMyInfoWin;
    myi->show();
}


void User::user_logout()
{
    boardwindows->close();
    EnterWin *ew=new EnterWin;
    ew->show();

}

