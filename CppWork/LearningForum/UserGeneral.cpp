#include"UserGeneral.h"
#include"User.h"
#include"Comment.h"
#include"Post.h"
#include"QDebug"
#include"Globle.h"
#include"DeletePostWin.h"
#include <QMessageBox>

GeneralUser::GeneralUser(){//initial
   ismoderator=0;
}

void GeneralUser::delete_post_real(int deleteBoard,int deletePost)
{  
    f.board[deleteBoard]->post.erase(f.board[deleteBoard]->post.begin()+deletePost);
}

void GeneralUser::write_post(QString t, QString c, QString i, QString u,QString T)
{
    Post *new_post=new Post;
    new_post->set_post(t,c,i,this->get_username(),T);
    f.board[current_board-1]->post.push_back(new_post);

}

void GeneralUser::write_comment(QString r,QString c)
{
    Comment *new_comment=new Comment;
    QString T=new_comment->get_time();
    new_comment->set_comment(this->get_id(),r,c,T);
    f.board[current_board-1]->post[current_post]->add_comment(new_comment);

}

QString GeneralUser::get_gender()
{return gender;
}

QString GeneralUser::get_WeChatID()
{
    return WeChatID;
}

void GeneralUser::set_moderator(int i)
{
    ismoderator=i;
}

int GeneralUser::is_moderator()
{   return ismoderator;}

void GeneralUser::initial(QString name, QString password, QString id)
{
    //name=n;
    change_id(id);
    change_password(password);
    change_username(name);
}

int GeneralUser::delete_post()
{
   if(f.board[current_board]->post[current_post]->get_username()==f.general[current_general]->get_username() && !f.board[current_board]->post[current_post]->is_commented){
          DeletePostWin *d=new DeletePostWin;
          d->show();
          return 1;
       }
   else
       return 0;
   // QMessageBox::warning( this,("Warning"), ("You don't have the priority!"));


}

