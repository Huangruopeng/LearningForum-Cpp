#include "Board.h"

Board::Board()
{
}

void Board::Init(QString s)
{
    this->type_name=s;
}

QString Board::get_type_name()
{
    return type_name;
}
