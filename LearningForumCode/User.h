#ifndef USER_H
#define USER_H
#include<QString>
#include<vector>
#include<QMovie>
#include<QPicture>
using namespace std;

class User
{
public:
    //QMovie profile_picture;
    QPicture profile_picture;
    User();
    ~User();
    void initial();
    void view_post(int);
    void choose_board(int);
    void change_username(QString s);
    void change_password(QString s);
    void change_id(QString s);
    QString get_username();
    QString get_password();
    QString get_id();
    void set_username(QString s);
    void set_password(QString s);
    void view_Information();
    void user_login();
    void user_logout();
    void set_profile_picture();


private:
    QString username;
    QString password;
    QString id;
    int is_online;
    int board;




};

#endif // USER_H
