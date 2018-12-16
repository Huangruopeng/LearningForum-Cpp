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

    void view_post();
   // virtual void delete_post()=0;
    //void choose_board(int);
    void change_username(QString s);
    void change_password(QString s);
    void change_id(QString s);
    QString get_username();
    QString get_password();
    QString get_id();
    void set_username(QString s);
    void set_password(QString s);
    void set_id(QString s);







    void view_my_information();//查看自己信息
    void view_all_information();

    virtual void initial(QString name,QString password, QString id)=0;
    virtual int user_login(QString name,QString passwd)=0;
    void user_logout();

    //void set_profile_picture();
private:
    QString username;
    QString password;
    QString id;
    int is_online;
    //int board;




};

#endif // USER_H
