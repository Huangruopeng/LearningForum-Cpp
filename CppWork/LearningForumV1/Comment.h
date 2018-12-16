#ifndef COMMENT_H
#define COMMENT_H
#include"User.h"
#include<QString>

using namespace std;

class Comment
{
private:
    QString sender;
    QString receiver;
    QString content;
    QString time;
public:
    Comment();
    void set_comment(QString sender,QString receiver,QString content,QString time);
    QString get_sender();
    QString get_receiver();
    QString get_content();
    QString get_time();
};

#endif // COMMENT_H
