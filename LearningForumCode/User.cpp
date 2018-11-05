#include "User.h"


User::User()
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

void User::choose_board(int i)
{
    board=i;
}

void User::view_post(int i)
{
    //弹出帖子窗口
}

void User::view_Information()
{
    //print all information
}

void User::initial()
{
    id="";
    username="";
    password="";
    is_online=0;
    board=0;
}

void User::set_profile_picture()
{

}
