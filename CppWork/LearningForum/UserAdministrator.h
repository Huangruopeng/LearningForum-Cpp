#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include"User.h"
using namespace std;
class Administrator : public User
{
public:
    Administrator();
    void Appoint_moderator(int type,int board,int appointU);
    void Dismiss_moderator(int disappointBoard,int disappointModerator);
    void delete_post_real(int deleteBoard,int deletePost);
    void initial(QString name,QString password,QString id);
   // void view_my_information();
   // QString get_password();
   // QString get_name();
   // void set_name(QString);
   // void set_password(QString);
private:
    //QString name;
    //QString password;



};
#endif // ADMINISTRATOR_H

