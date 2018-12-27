#include"UserModerator.h"
#include"Globle.h"

using namespace std;

int ModeratorUser::get_board(int i)
{   return myboard[i];
}

/*void ModeratorUser::delete_post(int deleteBoard,int deletePost)
{
    f.board[deleteBoard]->post.erase(f.board[deleteBoard]->post.begin()+deletePost);
    //qDebug()<<f.board[current_board-1]->p.size();
}*/

void ModeratorUser::add_board(int i)
{
    myboard.push_back(i);
}

void ModeratorUser::initial(QString name,QString password,QString id,int board)
{
    change_id(id);
    change_password(password);
    change_username(name);
    add_board(board);

}

int ModeratorUser::delete_post()
{/*
    if(f.board[current_board]->get_moderator()==f.moderator[current_moderator]->get_username())
    {   DeletePostWin *d=new DeletePostWin;
        d->show();
        return 1;
    }
    else
        return 0;
        //QMessageBox::warning( this,("Warning"), ("You don't have the priority!"));
*/
}

/*int ModeratorUser::user_login(QString name, QString passwd)
{

}*/

