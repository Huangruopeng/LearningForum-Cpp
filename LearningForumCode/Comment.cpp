#include "Comment.h"
#include <QDateTime>
Comment::Comment()
{
}

void Comment::set_comment(QString id1,QString id2,QString c)
{
    sender=id1;
    receiver=id2;
    content=c;
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
    return datetime->date().tostring();
    
}
