#ifndef FORUM_H
#define FORUM_H
#include "Board.h"
#include "User.h"
#include "Administrator.h"
#include "Generaluser.h"
#include "Moderatoruser.h"
#include <iostream>

using namespace std;

class Forum
{
public:
    Forum();
    vector<Board*> board;
    vector<Administrator*> admin;
    vector<GeneralUser*> general;
    vector<ModeratorUser*> moderator;
    void Init();
    int login(QString, QString,int)
    void logout();
};

#endif // FORUM_H
