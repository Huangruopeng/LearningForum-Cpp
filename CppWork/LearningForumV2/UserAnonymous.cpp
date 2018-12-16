#include "UserAnonymous.h"

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
