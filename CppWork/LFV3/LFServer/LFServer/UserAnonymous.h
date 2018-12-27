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
    QString get_log_time();
    void set_log_time();
private:
    QString log_time;

};

#endif // USERANONYMOUS_H
