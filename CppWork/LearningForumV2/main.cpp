#include "EnterWin.h"
#include <QApplication>
//#include "Globle.h"
#include "Forum.h"
#include "BoardWin.h"

int type=0;//定义用户类型 1：普通用户   2：版主   3：管理员
Forum f;

int current_board;//is not static?
int current_admin;
int current_general;
int current_moderator;
int current_post;
//int deleteBoard;
//int deletePost;
BoardWin *boardwindows;
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    f.Init();
     EnterWin w;
     w.show();
    //BoardWin b;
   // b.show();

    return a.exec();
}
