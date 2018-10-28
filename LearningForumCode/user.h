#ifndef USER_H
#define USER_H
#include<QString>
#include<vector>

using namespace std;

class User
{
public:
    User();
    ~User();
    void View_post(int);
    void Change_username();
    void Change_password();
    QString get_uesername();
    QString get_password();
    QString get_id();
    QString get_username();
    QString set_password();
    void View_Information();
    void User_login();
    void User_logout();

private:
    QString username;
    QString password;
    QString id;
    int is_online;
    int board;



};

#endif // USER_H
