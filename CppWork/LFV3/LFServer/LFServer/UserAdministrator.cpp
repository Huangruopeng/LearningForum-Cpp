#include "UserAdministrator.h"
#include"UserModerator.h"
#include "Globle.h"

Administrator::Administrator()
{
}

Administrator::~Administrator()
{

}

void Administrator::delete_post_real(int deleteBoard,int deletePost)
{
    f.board[deleteBoard]->post.erase(f.board[deleteBoard]->post.begin()+deletePost);
}
void Administrator::Appoint_moderator(int type,int board,int appointU)
{
     ModeratorUser *m=new ModeratorUser;
    if(type==2)//本来就是一个版主
       {
          m=f.moderator[appointU];
          m->add_board(board);
          f.moderator.erase(f.moderator.begin()+appointU);//注意是否减一
          f.moderator.insert(f.moderator.begin()+appointU,m);
          f.board[board]->set_moderator(f.moderator[appointU]->get_username());

    }
    else if(type==1)//是一个普通用户
       {  m->change_username(f.general[appointU]->get_username());
          m->change_password(f.general[appointU]->get_id());
          m->change_id(f.general[appointU]->get_password());
          m->add_board(board);
          f.general.erase(f.general.begin()+appointU);
          f.moderator.push_back(m);
          f.board[board]->set_moderator(f.general[appointU]->get_username());
         // f.moderator.insert(f.moderator.back()-1,m);


    }


}

void Administrator::Dismiss_moderator(int disappointBoard,int disappointModerator)
{

    GeneralUser *g=new GeneralUser;
    g->change_username(f.moderator[disappointModerator]->get_username());
    g->change_id(f.moderator[disappointModerator]->get_id());
    g->change_password(f.moderator[disappointModerator]->get_password());
    f.moderator.erase(f.moderator.begin()+disappointModerator);
    f.general.push_back(g);

}

void Administrator::initial(QString name,QString password,QString id)
{
    change_id(id);
    change_password(password);
    change_username(name);
}

int Administrator::user_login(QString name, QString password)
{
    QString name1,password1;
        //if(i==1)//管理员
       //{
            for(int j=0;j<f.admin.size();j++)
            {
                name1=f.admin[j]->get_username();
                password1=f.admin[j]->get_password();
                if(name==name1 && password==password1)
                {   type=3;
                    return j;
                }

            }
            return -1;
       // }
}

