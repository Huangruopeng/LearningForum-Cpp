#ifndef BOARD_H
#define BOARD_H
#include"post.h"
#include<vector>


class Board
{
private:
    QString type_name;

public:
    Board();
    vector<Post* > p;
    void Init(QString);
    QString get_type_name();
};

#endif // BOARD_H
