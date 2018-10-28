#ifndef GENERALUSER_H
#define GENERALUSER_H
#include "User.h"

using namespace std;

class GeneralUser:public User
{
public:
    GeneralUser();
    int board();
    void Write_post();
    void write_comment();
    //void View_post();
    void delete_my_post();
    void delete_my_comment();
    int get_level();
    //纯虚函数
    int get_gender();
    QString get_WeChatID();

private:
    int level;
    int is_moderator;
    int gender;
    QString WeChatID;

};

#endif // GENERALUSER_H