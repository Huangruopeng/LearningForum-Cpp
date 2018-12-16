#include "Board.h"

Board::Board()
{
}

/*void Board::Init(QString s)
{
    this->type_name=s;
}*/

QString Board::get_type_name()
{
    return type_name;
}

void Board::set_type_name(QString s)
{
    this->type_name=s;
}

QString Board::get_moderator()
{
    return board_moderator;
}

void Board::set_moderator(QString s)
{
    board_moderator=s;
}

void Board::add_post(Post *p)
{
    post.push_back(p);
   // post.insert(post.back(),p);
}
