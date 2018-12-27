#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include"User.h"
using namespace std;
class Administrator : public User
{
public:
    Administrator();
    ~Administrator();
    void Appoint_moderator(int type,int board,int appointU);
    void Dismiss_moderator(int disappointBoard,int disappointModerator);
    void delete_post_real(int deleteBoard,int deletePost);
    void initial(QString name,QString password,QString id);
    int user_login(QString name,QString passwd);

private:
    //QString name;
    //QString password;



};
#endif // ADMINISTRATOR_H

