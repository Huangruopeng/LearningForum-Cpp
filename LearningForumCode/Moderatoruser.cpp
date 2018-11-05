#include"Moderatoruser.h"
#include"globle.h"
//using namespace std;

int ModeratorUser::get_board()
{
    return board;
}

void ModeratorUser::delete_post(int i)
{
    f.board[current_board-1]->p.erase(f.board[current_board-1]->p.begin()+i);
    //qDebug()<<f.board[current_board-1]->p.size();
}
