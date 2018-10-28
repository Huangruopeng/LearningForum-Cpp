#ifndef POST_H
#define POST_H
#include<vector>
#include<QString>

using namespace std;

class Post
{
private:
    //int is_top;
    //int like_num;
    vector<Comment> c;//评论
    QString title;
    QString content;
    QString username;
    QString time;

public:
    Post();
    //void Like();
    void set_post(QString,QString,QString,QString);
   // void set_top();
    //void set_not_top();
    QString get_username();
    QString get_title();
    QString get_content();
    QString get_time();
    //int get_like_num();
    void add_comment(Comment* a);
    vector <Comment*> get_comment();
    void set_comment(vector <comment *>);


};

#endif // POST_H
