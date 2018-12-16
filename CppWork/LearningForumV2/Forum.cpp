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
using namespace  std;
Forum::Forum()
{

}

ostream & operator << (ostream & out,Comment *c)
{
    QString sender=c->get_sender();
    QString receiver=c->get_receiver();
    QString time=c->get_time();
    QString content=c->get_content();
    content.replace(QString("\n"),QString("~/"));
    content.replace(QString(" "),QString("_"));

    out<<"#"<<endl;
    out<<sender.toStdString()<<" "<<receiver.toStdString()<<" "<<content.toStdString()<<" "<<time.toStdString()<<endl;

}

istream & operator >> (istream & in,Comment *c)
{
    string sender,receiver,time,content,s;
    in>>s;//#
    qDebug()<<QString::fromStdString(s);

    in>>sender>>receiver>>content>>time;
    qDebug()<<QString::fromStdString(sender)<<QString::fromStdString(receiver)<<QString::fromStdString(content)<<QString::fromStdString(time);
    QString qcontent=QString::fromStdString(content);

    qcontent.replace(QString("_"),QString(" "));
    qcontent.replace(QString("~/"),QString("\n"));

    c->set_comment(QString::fromStdString(sender),QString::fromStdString(receiver),qcontent,QString::fromStdString(time));

    return in;
}

ostream & operator << (ostream & out,Post *p)
{
    vector <Comment *> c=p->get_comment();
    QString poster,title,id,content,time;
    int iscommented;
    int t=c.size();
    out<<"##"<<endl;
    poster=p->get_username();
    title=p->get_title();
    id=p->get_id();
    content=p->get_content();
    time=p->get_time();
    iscommented=p->is_commented;

    title.replace(QString(" "),QString("_"));
    title.replace(QString("\n"),QString("~/"));
    content.replace(QString(" "),QString("_"));
    content.replace(QString("\n"),QString("~/"));

    out<<poster.toStdString()<<" "
       <<title.toStdString()<<" "
       <<content.toStdString()<<" "
       <<id.toStdString()<<" "
        <<time.toStdString()<<" "
       <<iscommented<<" "
       <<t<<endl;

    for(int i=0;i<t;i++){
        out<<c[i];
    }

    return out;

}

istream & operator >> (istream & in,Post *p)
{
    string poster,title,id,time,content,s;
    int iscommented,t;
    in>>s;//##
    qDebug()<<QString::fromStdString(s);

    in>>poster>>title>>content>>id>>time>>iscommented>>t;
    qDebug()<<QString::fromStdString(poster)<<QString::fromStdString(title)<<QString::fromStdString(content)<<QString::fromStdString(id)<<QString::fromStdString(poster)<<QString::fromStdString(time);
    QString qtitle=QString::fromStdString(title);
    QString qcontent=QString::fromStdString(content);

    qtitle.replace(QString("_"),QString(" "));
    qtitle.replace(QString("~/"),QString("\n"));
    qcontent.replace(QString("_"),QString(" "));
    qcontent.replace(QString("~/"),QString("\n"));

    p->set_post(qtitle,qcontent,QString::fromStdString(id),QString::fromStdString(poster),QString::fromStdString(time));
    p->is_commented=iscommented;

    //vector <Comment *> comment;
    for(int i=0;i<t;i++){
        Comment *c=new Comment;
        in>>c;
        p->add_comment(c);
    }

    return in;
}

ostream & operator << (ostream & out,Board *b)
{
    int t=b->post.size();
    Post *p;
    QString Typename =b->get_type_name();
    QString moderator=b->get_moderator();

    out<<"###"<<endl;
    out<<Typename.toStdString()<<" "<<moderator.toStdString()<<" "<<t<<endl;

    for(int i=0;i<t;i++){
        p=b->post[i];
        out<<p;
    }
    return out;
}

istream & operator >> (istream & in,Board *b)
{
    string Typename,moderator,s;
    int t;
    in>>s;//###

    qDebug()<<QString::fromStdString(s);

    in>>Typename>>moderator>>t;

    qDebug()<<QString::fromStdString(Typename)<<QString::fromStdString(moderator)<<t;

    b->set_type_name(QString::fromStdString(Typename));
    b->set_moderator(QString::fromStdString(moderator));

    for(int i=0;i<t;i++){
        Post *p=new Post;
        in>>p;
        b->post.push_back(p);
    }

    return in;
}

ofstream & operator << (ofstream & out,Administrator *a)
{
    QString username=a->get_username();
    QString password=a->get_password();
    QString id=a->get_id();
    out<<"###"<<endl;
    out<<username.toStdString()<<" "<<password.toStdString()<<" "<<id.toStdString()<<endl;
    return out;
}

ifstream & operator >> (ifstream & in,Administrator *a)
{   //qDebug()<<"vnsv";
    string username,password,id,s;
    in>>s;
    if(s=="###"){
        in>>username>>password>>id;
        qDebug()<<QString::fromStdString(username)<<QString::fromStdString(password)<<QString::fromStdString(id);
        a->change_password(QString::fromStdString(password));
        a->change_id(QString::fromStdString(id));
        a->change_username(QString::fromStdString(username));
        //return in;
    }



}

ofstream & operator << (ofstream & out, GeneralUser *g)
{
    QString username=g->get_username();
    QString id=g->get_id();
    QString password=g->get_password();
    out<<"###"<<endl;
    out<<username.toStdString()<<" "<<password.toStdString()<<" "<<id.toStdString()<<endl;//" "<<0<<endl;
    return out;

}

ifstream & operator >> (ifstream & in,GeneralUser *g)
{
    string username,password,id,s;
   // int ismoderator;
    in>>s;
    if(s=="###"){
        in>>username>>password>>id;//>>ismoderator;

        g->change_id(QString::fromStdString(id));
        g->change_password(QString::fromStdString(password));
        g->change_username(QString::fromStdString(username));
        //g->set_moderator(ismoderator);

        return in;

    }


}

ofstream & operator << (ofstream & out, ModeratorUser *m)
{
    QString username=m->get_username();
    QString id=m->get_id();
    QString password=m->get_password();
    int t=m->myboard.size();
    out<<"###"<<endl;
    out<<username.toStdString()<<" "<<password.toStdString()<<" "<<id.toStdString()<<" "<<t<<" ";

    for(int i; i<t-1;i++){
        out<<m->myboard[i]<<" ";
    }
    out<<m->myboard[t-1]<<endl;

    return out;

}

ifstream & operator >> (ifstream & in, ModeratorUser *m)
{
    string username,password,id,s;
    int t,board;
    in>>s;
    in>>username>>password>>id>>t;
    qDebug()<<"版主管理的版块数量"<<t;
    m->set_id(QString::fromStdString(id));
    m->set_password(QString::fromStdString(password));
    m->set_username(QString::fromStdString(username));

    for(int i=0;i<t;i++){
        in>>board;
        qDebug()<<"版主管理的版块"<<board;
        m->myboard.push_back(board);
    }

    return in;


}

QString Forum::get_current_time()
{

    QDateTime time=QDateTime::currentDateTime();
    return time.toString("MM.dd-hh:mm-yyyy");

}

/*int Forum::login(QString name, QString password, int i)
{   QString name1,password1;
    if(i==1)//管理员
    {
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
    }
    else if (i==2)//普通用户或者是版主
    {
        for( int j=0;j<general.size();j++)
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


}*/

void Forum::logout() //now i don't know how to construct
{
     ofstream out1;
     try{
         out1.open("C:/Users/Rocair/Desktop/CppWork/LearningForumV2/fileboard.txt");
     }
     catch(exception & e){
         QMessageBox::warning(NULL,("Warning"), ("文件打开错误"));
     }
     for(int i=0;i<8;i++){
         out1<<f.board[i];

     }
     out1.close();

     ofstream out2;
     try{
         out2.open("C:/Users/Rocair/Desktop/CppWork/LearningForumV2/fileadmin.txt");
     }
     catch(exception &e){
         QMessageBox::warning(NULL,("Warning"), ("admin文件打开错误"));
     }
     int t=f.admin.size();
     out2<<t<<endl;
     for(int i=0;i<t;i++){
         out2<<f.admin[i];
     }
     out2.close();

     ofstream out3;
     try{
         out3.open("C:/Users/Rocair/Desktop/CppWork/LearningForumV2/filegeneral.txt");
     }
     catch(exception &e){
         QMessageBox::warning( NULL,("Warning"), ("general文件打开错误"));
     }
     t=f.general.size();
     out3<<t<<endl;
     for(int i=0;i<t;i++){
         out3<<f.general[i];
     }
     out3.close();

     ofstream out4;
     try{
         out4.open("C:/Users/Rocair/Desktop/CppWork/LearningForumV2/filemoderator.txt");
     }
     catch(exception &e){
         QMessageBox::warning( NULL,("Warning"), ("moderator文件打开错误"));
     }
     t=f.moderator.size();
     out4<<t<<endl;
     qDebug()<<"版主数量"<<t;
     for(int i=0;i<t;i++){
         out4<<f.moderator[i];
     }
     out4.close();
}

void Forum::Init()
{
   /* GeneralUser *g1,*g2,*g3;
    g1=new GeneralUser;
    g1->initial("byr001","66","g001");
    f.general.push_back(g1);

    g2=new GeneralUser;
    g2->initial("byr002","66","g002");
    f.general.push_back(g2);

    g3=new GeneralUser;
    g3->initial("byr003","66","g003");
    f.general.push_back(g3);

    ModeratorUser *m1=new ModeratorUser;
    m1->initial("byr004","66","m004",0);
    f.moderator.push_back(m1);


    Administrator *a1=new Administrator;
    a1->initial("vip001","88","a001");
    f.admin.push_back(a1);

    Administrator *a2=new Administrator;
    a2->initial("vip002","88","a002");
    f.admin.push_back(a2);


    Board *b1,*b2,*b3,*b4,*b5,*b6,*b7,*b8;//初始四个板块
    b1=new Board;b2=new Board;b3=new Board;b4=new Board;
    b5=new Board;b6=new Board;b7=new Board;b8=new Board;

    b1->set_type_name("恋爱交友");
    f.board.push_back(b1);
    b2->set_type_name("升学交流");
    f.board.push_back(b2);
    b3->set_type_name("学习交流");
    f.board.push_back(b3);
    b4->set_type_name("运动健康");
    f.board.push_back(b4);
    b5->set_type_name("实习工作");
    f.board.push_back(b5);
    b6->set_type_name("休闲娱乐");
    f.board.push_back(b6);
    b7->set_type_name("星座占卜");
    f.board.push_back(b7);
    b8->set_type_name("外出旅游");
    f.board.push_back(b8);


    Post *p1=new Post;
    p1->set_post("[王道]北师小姐姐征友","北师小姐想找北邮小哥哥","001","byr001","2018.1.1");
    f.board[0]->post.push_back(p1);
    f.board[0]->post[0]->is_commented=1;
    f.board[0]->set_moderator("byr004");

    Post *p2=new Post;
    p2->set_post("北邮计算机院男神","集样貌与才华于一体","002","byr002","2018.1.2");
    f.board[0]->post.push_back(p2);
    f.board[0]->post[1]->is_commented=1;

    Post *p3=new Post;
    Post *p4=new Post;
    p3->set_post("如何找实验室","最近周围同学都到实验去了，想问一下如何联系实验室","003","byr001","2018.1.1");
    f.board[1]->post.push_back(p3);
    f.board[1]->post[0]->is_commented=1;
    p4->set_post("考研经历分享","马上就要考研了，希望大家分享自己的考研经历","004","byr002","2018.1.2");
    f.board[1]->post.push_back(p4);
    f.board[1]->post[1]->is_commented=1;

    Comment *c1,*c2,*c3,*c4,*c5,*c6,*c7,*c8;
      c1=new Comment;c2=new Comment;c3=new Comment;c4=new Comment;
      c5=new Comment;c6=new Comment;c7=new Comment;c8=new Comment;
    c1->set_comment("byr002","byr001","我邮的妹子更好看","2018.2.2");
    f.board[0]->post[0]->comment.push_back(c1);
    c2->set_comment("byr003","byr001","楼上正解！这叫政治正确","2018.2.3");
    f.board[0]->post[0]->comment.push_back(c2);

    c3->set_comment("byr001","byr002","震惊，我院还有男神！","2018.2.2");
    f.board[0]->post[1]->comment.push_back(c3);
    c4->set_comment("byr003","byr002","想认识男神","2018.2.3");
    f.board[0]->post[1]->comment.push_back(c4);

    c5->set_comment("byr002","byr001","给老师发邮件.","2018.2.2");
    f.board[1]->post[0]->comment.push_back(c5);
    c6->set_comment("byr003","byr001","联系学长，问学长","2018.2.3");
    f.board[1]->post[0]->comment.push_back(c6);

    c7->set_comment("byr001","byr002","不玩手机，不玩手机，不玩手机","2018.2.2");
    f.board[1]->post[1]->comment.push_back(c7);
    c8->set_comment("byr003","byr002","坚持不懈，重在参与","2018.2.3");
    f.board[1]->post[1]->comment.push_back(c8);
    */
    int num;
    f.admin.clear();
    //qDebug()<<"nvkf";
    ifstream in1;
  try{
       in1.open("C:/Users/Rocair/Desktop/CppWork/LearningForumV2/fileadmin.txt");//暂时先用绝对路径
    }
  catch(exception &e){
       QMessageBox::warning( NULL,("Warning"), ("admin文件打开错误"));
    }

   in1>>num;
   for(int j=0;j<num;j++){
        Administrator *a=new Administrator;
        in1>>a;
        f.admin.push_back(a);
        qDebug()<<j<<f.admin[j]->get_username()<<endl;
    }
    in1.close();
    qDebug()<<"admin读取结束";



    f.general.clear();
    ifstream in2;
    try{
        in2.open("C:/Users/Rocair/Desktop/CppWork/LearningForumV2/filegeneral.txt");
    }
    catch (exception &e){
        QMessageBox::warning( NULL,("Warning"), ("general文件打开错误"));
    }

     in2>>num;
    for(int j=0;j<num;j++){
        GeneralUser *g=new GeneralUser;
        in2>>g;
        f.general.push_back(g);
        qDebug()<<j<<f.general[j]->get_username()<<f.general[j]->get_password()<<f.general[j]->get_id();

    }
    in2.close();



    f.moderator.clear();
    ifstream in3;
       try{
            in3.open("C:/Users/Rocair/Desktop/CppWork/LearningForumV2/filemoderator.txt");
           }
       catch (exception &e){
             QMessageBox::warning( NULL,("Warning"), ("moderator文件打开错误"));
           }
       in3>>num;
       for(int j=0;j<num;j++){
            ModeratorUser *m=new ModeratorUser;
            in3>>m;
            f.moderator.push_back(m);
            qDebug()<<j<<f.moderator[j]->get_username();

           }
      in3.close();



    f.board.clear();
     ifstream in4;
     try{
          in4.open("C:/Users/Rocair/Desktop/CppWork/LearningForumV2/fileboard.txt");
         }
     catch (exception &e){
           QMessageBox::warning( NULL,("Warning"), ("board文件打开错误"));
         }

     int j=0;
     for(int i=0;i<8;i++){
         Board *b=new Board;
         in4>>b;
         f.board.push_back(b);
         qDebug()<<j<<f.board[j]->get_type_name();
          j++;

     }
     in4.close();

}





























