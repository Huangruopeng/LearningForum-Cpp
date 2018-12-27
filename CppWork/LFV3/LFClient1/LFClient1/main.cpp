#include "EnterWin.h"
#include <QApplication>
#include "ClientWin.h"
#include "Forum.h"
#include "BoardWin.h"
#include <QTcpServer>
#include <QTcpSocket>
int type=0;//定义用户类型 1：普通用户   2：版主   3：管理员
Forum f;

int current_board;//is not static?
int current_admin;
int current_general;
int current_moderator;
int current_post;

BoardWin *boardwindows;
bool status;//用来判断是否进入了聊天室
int port;
QHostAddress *serverIP;
QString HostName;
QTcpSocket *tcpsocket;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

     EnterWin w;
     w.show();

     ClientWin c;
     c.show();




    return a.exec();
}
