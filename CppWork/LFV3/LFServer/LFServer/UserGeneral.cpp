#include"UserGeneral.h"
#include"User.h"
#include"Comment.h"
#include"Post.h"
#include"QDebug"
#include"Globle.h"
#include <QMessageBox>

GeneralUser::GeneralUser(){//initial
   //ismoderator=0;
}

GeneralUser::~GeneralUser()
{

}

void GeneralUser::delete_post_real(int deleteBoard,int deletePost)
{  
    f.board[deleteBoard]->post.erase(f.board[deleteBoard]->post.begin()+deletePost);
}

void GeneralUser::write_post(int b,QString t, QString c, QString i, QString u,QString T)
{
    Post *new_post=new Post;
    new_post->set_post(t,c,i,this->get_username(),T);
    f.board[b]->post.push_back(new_post);

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

/*void GeneralUser::set_moderator(int i)
{
    ismoderator=i;
}

int GeneralUser::is_moderator()
{   return ismoderator;}
*/
void GeneralUser::initial(QString name, QString password, QString id)
{

    change_id(id);
    change_password(password);
    change_username(name);
}

int GeneralUser::delete_post()
{/*
   if(f.board[current_board]->post[current_post]->get_username()==f.general[current_general]->get_username() && !f.board[current_board]->post[current_post]->is_commented){
          DeletePostWin *d=new DeletePostWin;
          d->show();
          return 1;
       }
   else
       return 0;

*/

}

int GeneralUser::user_login(QString name, QString password)
{

    QString name1;
    QString password1;
        for( int j=0;j<f.general.size();j++)
        {
            name1=f.general[j]->get_username();
            password1=f.general[j]->get_password();
            if(name1==name && password==password1)
            {   type=1;
                return j;
            }
        }

        for(int j=0;j<f.moderator.size();j++){
            name1=f.moderator[j]->get_username();
            password1=f.moderator[j]->get_password();
            if(name1==name && password==password1)
            {   type=2;
                return j;
            }
        }
        return -1;

}
