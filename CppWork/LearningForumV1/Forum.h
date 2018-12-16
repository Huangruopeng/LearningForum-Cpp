#ifndef FORUM_H
#define FORUM_H
#include "Board.h"
#include "User.h"
#include "UserAdministrator.h"
#include "UserGeneral.h"
#include "UserModerator.h"
#include <iostream>

using namespace std;

class Forum
{
public:
    Forum();
    vector<Board*> board ;
    vector<Administrator*> admin;
    vector<GeneralUser*> general;
    vector<ModeratorUser*> moderator;
    void Init();
    //int login(QString name, QString password,int i);
    void logout();
    QString get_current_time();
};

#endif // FORUM_H
