#ifndef USERANONYMOUS_H
#define USERANONYMOUS_H
#include"User.h"
using namespace std;

class Anonymous : public User
{
public:
    Anonymous();
    //QString log_time;
    void initial(QString name,QString password,QString id);
    int user_login(QString name,QString passwd);

};

#endif // USERANONYMOUS_H
