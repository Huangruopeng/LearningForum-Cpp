#include "Forum.h"
#include "Administrator.h"
#include "User.h"
#include "Generaluser.h"
#include "Post.h"
#include "Comment.h"
#include "globle.h"
#include <QDebug>

using namespace  std;
Forum::Forum()
{

}

int Forum::login(QString name, QString password, int i)
{   QString name1,password1;
    if(i==1)//管理员
    {
        for(int j=0;j<admin.size();j++)
        {
            name1=admin[j]->get_username();
            password1=admin[j]->get_password();
            if(name==name1 && password==password1)
            {  return 1;
            }

        }
        return 0;
    }
    else if (i==2)//普通用户
    {
        for( int j=0;j<general.size();j++)
        {
            name1=general[j]->get_username();
            password1=general[j]->get_password();
            if(name1==name && password==password1)
            {
                return 1;
            }
        }
        return 0;
    }

}
void Forum::logout() //now i don't know how to construct
{


}

