#include "Post.h"
#include "Comment.h"

Post::Post()
{
}
/*void Post::initial()
{
    is_commented=0;
}*/

QString Post::get_content()
{
    return this->content;
}

QString Post::get_title()
{
    return title;
}

QString Post::get_username()
{
    return username;
}

QString Post::get_time()
{    return time;
}
QString Post::get_id()
{
    return id;
}
void Post::set_post(QString t, QString c, QString i, QString u,QString T)
{
    this->title=t;
    this->content=c;
    this->id=i;
    this->username=u;
    this->time=T;
}

void Post::add_comment(Comment *a)
{
    this->comment.push_back(a);
}

/*void Post::set_comment(vector<Comment *> s)
{
    comment=s;
}*/

vector <Comment *> Post::get_comment(){
    return comment;
}
