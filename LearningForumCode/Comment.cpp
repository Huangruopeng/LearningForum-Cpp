#include "Comment.h"
#include <QDateTime>
#include "Comment.h"
Comment::Comment()
{
}

void Comment::set_comment(QString id1,QString id2,QString c,QString T)
{
    sender=id1;
    receiver=id2;
    content=c;
    time=T;
}

QString Comment::get_sender()
{
    return sender;
}

QString Comment::get_receiver()
{
    return receiver;
}

QString Comment::get_content()
{
    return content;
}

QString Comment::get_time()
{   QDateTime *datetime=new QDateTime(QDateTime::currentDateTime());
    return datetime->date().toString();
    
}
