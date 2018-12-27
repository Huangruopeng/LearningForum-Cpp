#include "UserAnonymous.h"
#include "Globle.h"
Anonymous::Anonymous()
{

}
void Anonymous ::initial(QString name,QString password,QString id)
{
    change_id(id);
    change_password(password);
    change_username(name);
}

int Anonymous ::user_login(QString name, QString password)
{
    return 0;

}

QString Anonymous::get_log_time()
{
    return log_time;
}

void Anonymous::set_log_time()
{
    log_time=f.get_current_time();
}
