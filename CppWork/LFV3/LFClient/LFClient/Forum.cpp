#include "Forum.h"
#include "UserAdministrator.h"
#include "User.h"
#include "UserGeneral.h"
#include "UserModerator.h"
#include "Post.h"
#include "Comment.h"
#include "Globle.h"
#include <QDebug>
#include <QDateTime>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <exception>
using namespace  std;
Forum::Forum()
{

}

QString Forum::get_current_time()
{

    QDateTime time=QDateTime::currentDateTime();
    return time.toString("MM.dd-hh:mm-yyyy");

}


void Forum::logout() //now i don't know how to construct
{

}

QString Forum::GetForumStr()
{
     QString ForumStr="";
     int BoardNum=f.board.size();
     for(int b=0;b<BoardNum;b++){
         QString Typename =f.board[b]->get_type_name();
         QString moderator = f.board[b]->get_moderator();
         int PostNum=f.board[b]->post.size();
         ForumStr=ForumStr+"###"+Typename+" "+moderator+" "+QString::number(PostNum);
         for(int p=0;p<PostNum;p++){
             QString poster,title,id,content,time;
             int CommentNum=f.board[b]->post[p]->comment.size();
             int iscommented=f.board[b]->post[p]->is_commented;
             poster=f.board[b]->post[p]->get_username();
             title=f.board[b]->post[p]->get_title();
             id=f.board[b]->post[p]->get_id();
             content=f.board[b]->post[p]->get_content();
             time=f.board[b]->post[p]->get_time();

             title.replace(QString(" "),QString("_"));
             title.replace(QString("\n"),QString("~/"));
             content.replace(QString(" "),QString("_"));
             content.replace(QString("\n"),QString("~/"));

             ForumStr=ForumStr+"##"+poster+" "+title+" "+content+" "+id+" "+time+" "+QString::number(iscommented)+" "+QString::number(CommentNum);

             for(int c=0;c<CommentNum;c++){
                 QString sender,receiver,time,content;
                 sender=f.board[b]->post[p]->comment[c]->get_sender();
                 receiver=f.board[b]->post[p]->comment[c]->get_receiver();
                 time=f.board[b]->post[p]->comment[c]->get_time();
                 content=f.board[b]->post[p]->comment[c]->get_content();

                 content.replace(QString("\n"),QString("~/"));
                 content.replace(QString(" "),QString("_"));

                 ForumStr=ForumStr+"#"+sender+" "+receiver+" "+content+" "+time;

             }
         }
     }



     ForumStr=ForumStr+"####";
     int AdminNum=f.admin.size();
     ForumStr+=QString::number(AdminNum);
     for(int a=0;a<AdminNum;a++){
         QString name,id;
         name=f.admin[a]->get_username();
         id=f.admin[a]->get_id();
         ForumStr+="##"+name+" "+id;
     }

     int ModeratorNum=f.moderator.size();
     ForumStr+="###"+QString::number(ModeratorNum);
     for(int m=0;m<ModeratorNum;m++){
         QString name,id;
         name=f.moderator[m]->get_username();
         id=f.moderator[m]->get_id();
         int myboardNum=f.moderator[m]->myboard.size();
         ForumStr+="##"+name+" "+id+" "+QString::number(myboardNum);
         for(int n=0;n<myboardNum;n++){
             ForumStr=ForumStr+" "+QString::number(f.moderator[m]->myboard[n]);
         }
     }

     int GeneralNum=f.general.size();
     ForumStr+="###"+QString::number(GeneralNum);
     for(int g=0;g<GeneralNum;g++){
         QString name,id;
         name=f.general[g]->get_username();
         id=f.general[g]->get_id();
         ForumStr+="##"+name+" "+id;
     }

     qDebug()<<ForumStr;


     return ForumStr;

}



























