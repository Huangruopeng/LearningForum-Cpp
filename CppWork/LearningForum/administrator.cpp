#include "Administrator.h"
#include"Moderatoruser.h"
#include "Globle.h"

Administrator::Administrator()
{
}

void Administrator::delete_post(int deleteBoard,int deletePost)
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

    }
    else if(type==1)//是一个普通用户
       {  m->change_username(f.general[appointU]->get_username());
          m->change_password(f.general[appointU]->get_id());
          m->change_id(f.general[appointU]->get_password());
          m->add_board(board);
          f.general.erase(f.general.begin()+appointU);
          f.moderator.push_back(m);
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



