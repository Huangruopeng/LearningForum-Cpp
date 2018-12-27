#include "serverWin.h"
#include <QApplication>
//#include "Globle.h"
#include "Forum.h"
#include "BoardWin1.h"
#include <QTcpServer>

int type=0;//定义用户类型 1：普通用户   2：版主   3：管理员
Forum f;

int current_board;//is not static?
int current_admin;
int current_general;
int current_moderator;
int current_post;


BoardWin *boardwindows;
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    //f.Init();
    f.Initforum();
    ServerWin w;

    w.show();


    return a.exec();
}
