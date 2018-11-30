#include"Moderatoruser.h"
#include"Globle.h"
//using namespace std;

int ModeratorUser::get_board(int i)
{   return myboard[i];
}

void ModeratorUser::delete_post(int deleteBoard,int deletePost)
{
    f.board[deleteBoard]->post.erase(f.board[deleteBoard]->post.begin()+deletePost);
    //qDebug()<<f.board[current_board-1]->p.size();
}

void ModeratorUser::add_board(int i)
{
    myboard.push_back(i);
}
