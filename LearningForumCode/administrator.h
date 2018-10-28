#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include"user.h"
using namespace std;
class Administrator : public User
{
public:
    Administrator();
    void Appoint_moderator(int i);
    void Dismiss_moderator(int i);


};
#endif // ADMINISTRATOR_H

