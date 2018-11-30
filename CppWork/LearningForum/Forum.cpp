#include "Forum.h"
#include "Administrator.h"
#include "User.h"
#include "Generaluser.h"
#include "Post.h"
#include "Comment.h"
#include "Globle.h"
#include <QDebug>
#include <QDateTime>
using namespace  std;
Forum::Forum()
{

}

QString Forum::get_current_time()
{
    QDateTime *datetime=new QDateTime(QDateTime::currentDateTime());
    return datetime->date().toString();
}

int Forum::login(QString name, QString password, int i)
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


}
void Forum::logout() //now i don't know how to construct
{


}

void Forum::Init()
{




    GeneralUser *g1,*g2,*g3;
    g1=new GeneralUser;
    g1->set_username("byr001");
    g1->set_password("66");
    g1->set_id("g001");
    f.general.push_back(g1);
    g2=new GeneralUser;
    g2->set_username("byr002");
    g2->set_password("66");
    g2->set_id("g002");
    f.general.push_back(g2);
    g3=new GeneralUser;
    g3->set_username("byr003");
    g3->set_password("66");
    g3->set_id("g003");
    f.general.push_back(g3);


    Administrator *a1=new Administrator;
    a1->set_username("vip001");
    a1->set_password("88");
    a1->set_id("a001");
    f.admin.push_back(a1);

    Administrator *a2=new Administrator;
    a2->set_username("vip002");
    a2->set_password("88");
    a2->set_id("a002");
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




}

