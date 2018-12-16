#ifndef POST_H
#define POST_H
#include<vector>
#include<QString>
#include"Comment.h"

using namespace std;

class Post
{
private:
    //int is_top;
    //int like_num;

    QString title;
    QString content;
    QString username;
    QString time;
    QString id;

public:
     Post();
    int is_commented=0;
    vector<Comment*> comment;//评论

    QString get_username();
    QString get_title();
    QString get_content();
    QString get_time();

    vector <Comment*> get_comment();

    void add_comment(Comment* a);
    //void initial();
    void set_post(QString title,QString content,QString id,QString poster,QString time);
    //void set_comment(vector <Comment *>);

};

#endif // POST_H
