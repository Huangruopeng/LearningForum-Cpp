#ifndef GENERALUSER_H
#define GENERALUSER_H
#include "User.h"

using namespace std;

class GeneralUser:public User
{
public:
    GeneralUser();
    ~GeneralUser();


    void write_post(int b,QString t,QString c,QString i,QString u,QString T);
    void write_comment(QString,QString);
    void view_post();
    void delete_post_real(int current_board,int current_post);
   // void delete_my_comment();
    //int get_level();


    QString get_gender();
    int is_moderator();
    void set_moderator(int i);
    QString get_WeChatID();

    virtual void initial(QString name,QString password,QString id);
    virtual int delete_post();
     int user_login(QString name,QString passwd);
    //virtual void view_my_information();//查看自己信息

private:
    int level;
    int ismoderator;
    QString gender;
    QString WeChatID;

};

#endif // GENERALUSER_H
