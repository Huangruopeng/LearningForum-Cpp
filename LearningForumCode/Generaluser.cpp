#include"Generaluser.h"
#include"User.h"
#include"Comment.h"
#include"Post.h"
#include"QDebug"
#include"Globle.h"

extern  int current_board;
GeneralUser::GeneralUser(){//initial
   is_moderator=0;
}

void GeneralUser::delete_my_post(int i)
{
   if(f.board[current_board-1]->p[i]->is_commented==0)//no comments
   {
       f.board[current_board-1]->p.erase(f.board[current_board-1]->p.begin()+i);
       //qDebug<<f.board[current_board-1]->p.size();
   }
   
}

void GeneralUser::write_post(QString t, QString c, QString i, QString u,QString T)
{
    Post *new_post=new Post;
    new_post->set_post(t,c,i,this->get_username(),T);
    f.board[current_board-1]->p.push_back(new_post);
    
}

void GeneralUser::write_comment(QString r,QString c)
{
    Comment *new_comment=new Comment;
    QString T=new_comment->get_time();
    new_comment->set_comment(this->get_id(),r,c,T);
    f.board[current_board-1]->p[current_post]->add_comment(new_comment);
        
}

int GeneralUser::get_gender()
{return gender;
}

QString GeneralUser::get_WeChatID()
{
    return WeChatID;
}

void GeneralUser::set_moderator(int i)
{
    is_moderator=i;
}
