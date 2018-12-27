#ifndef BOARD_H
#define BOARD_H
#include"Post.h"
#include<vector>


class Board
{
private:
    QString type_name;
    QString board_moderator;

public:
    Board();
    vector<Post* > post;
    //void Init(QString);
    QString get_type_name();
    void set_type_name(QString);
    void set_moderator(QString);
    QString get_moderator();
    void add_post(Post *p);
};

#endif // BOARD_H
