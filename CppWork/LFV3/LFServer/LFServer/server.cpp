#include "server.h"
#include <QHostAddress>
#include "Globle.h"
Server::Server(QObject *parent, int port):QTcpServer(parent)
{
    listen(QHostAddress::Any, port); //监听
}

void Server::incomingConnection(int socketDescriptor)
{   qDebug()<<"有新连接";
    TcpClientSocket *tcpclientsocket = new TcpClientSocket(this);//只要有新的连接就生成一个新的通信套接字
    //将新创建的通信套接字描述符指定为参数socketdescriptor
    tcpclientsocket->setSocketDescriptor(socketDescriptor);

    //将这个套接字加入客户端套接字列表中
    tcpclientsocketlist.append(tcpclientsocket);


    //接收到tcpclientsocket发送过来的更新界面的信号
    connect(tcpclientsocket, &TcpClientSocket::updateserver, this, &Server::sliotupdateserver);
    connect(tcpclientsocket, &TcpClientSocket::clientdisconnected, this, &Server::slotclientdisconnect);

}

void Server::sliotupdateserver(QString msg, int length)
{


    QString data=msg;
    qDebug()<<"收到的msg"+msg;
    QStringList list=data.split("<<>>");
    if(list[0]=="login"){//"login<<>>type#username#password
       qDebug()<<"登录请求";
        QString type=list[1].split("#")[0];
        if(type=="4"){
            QString ForumStr=GetForumStr();
            QString backMsg="confirm<<>>4#0<<>>"+ForumStr;
            QTcpSocket *item =tcpclientsocketlist.at(tcpclientsocketlist.count());//最新连接当然是当前的客户端
            //QString backMsg="confirm<<>>"+QString::number(type)+"#"+QString::number(n);

            item->write(backMsg.toUtf8().data());

        }
        else{
            qDebug()<<"非匿名用户";
            QString name=list[1].split("#")[1];
            qDebug()<<name;
            QString password=list[1].split("#")[2];//这里可以加错误判断
            qDebug()<<password;
            Confirmlogin(name,password,type);
        }




      }

    else if(list[0]=="update"){
        UpdateForum(list[1]);

        QString ForumStr=GetForumStr();
        ForumStr="update<<>>"+ForumStr;
        for(int i = 0; i < tcpclientsocketlist.count(); i++)
        {
            QTcpSocket *item = tcpclientsocketlist.at(i);

            item->write(ForumStr.toUtf8().data());
        }

    }
    else if(list[0]=="logout"){
        //输出有人注销就可以了
        //将这个信号发送给界面
        emit updateserver(msg, length);
    }
    else {
        //将这个信号发送给界面
        qDebug()<<"连接成功";
        emit updateserver(msg, length);
    }


}

void Server::slotclientdisconnect(int descriptor)
{
    for(int i = 0; i < tcpclientsocketlist.count(); i++)
    {
        QTcpSocket *item = tcpclientsocketlist.at(i);
        if(item->socketDescriptor() == descriptor)
        {
            tcpclientsocketlist.removeAt(i);//如果有客户端断开连接， 就将列表中的套接字删除
            return;
        }
    }
    return;
}

void Server::Confirmlogin(QString name, QString password, QString usertype)
{   qDebug()<<"开始验证用户信息";
    if(usertype=="1" ||usertype=="2"){//普通用户或者版主 都属于general用户

        GeneralUser *g=new GeneralUser;
        int n=g->user_login(name,password);
        qDebug()<<"获得了用户的标号"<<n;
        if(n!=-1){
            qDebug()<<tcpclientsocketlist.count();

            QTcpSocket *item =tcpclientsocketlist.at(tcpclientsocketlist.count()-1);//最新连接当然是当前的客户端

            QString backMsg="confirm<<>>"+QString::number(type)+"#"+QString::number(n);
            QString ForumStr=GetForumStr();
            backMsg=backMsg+"<<>>"+ForumStr;
            qDebug()<<"准备发消息";
            item->write(backMsg.toUtf8().data());
            qDebug()<<"发出消息";
        }
        else{
            QTcpSocket *item =tcpclientsocketlist.at(tcpclientsocketlist.count());//最新连接当然是当前的客户端
            QString backMsg="error#";
            item->write(backMsg.toUtf8().data());
        }

    }
    else if(usertype=="3"){
        Administrator *a=new Administrator;
        int n=a->user_login(name,password);
        if(n!=-1){
            QTcpSocket *item =tcpclientsocketlist.at(tcpclientsocketlist.count());//最新连接当然是当前的客户端
            QString backMsg="confirm<<>>"+QString::number(type)+"#"+QString::number(n);
            QString ForumStr=GetForumStr();
            backMsg=backMsg+"<<>>"+ForumStr;

            item->write(backMsg.toUtf8().data());
        }
        else{
            QTcpSocket *item =tcpclientsocketlist.at(tcpclientsocketlist.count());//最新连接当然是当前的客户端
            QString backMsg="error#";
            item->write(backMsg.toUtf8().data());
        }

    }

}

QString Server::GetForumStr()
{

     QString ForumStr="";
     int BoardNum=f.board.size();
     for(int b=0;b<BoardNum;b++){
         QString Typename =f.board[b]->get_type_name();
         QString moderator = f.board[b]->get_moderator();
         int PostNum=f.board[b]->post.size();
         ForumStr=ForumStr+"###"+Typename+" "+moderator+" "+QString::number(PostNum);
         for(int p=0;p<PostNum;p++){
             QString poster,title,id,content,time;
             int CommentNum=f.board[b]->post[p]->comment.size();
             int iscommented=f.board[b]->post[p]->is_commented;
             poster=f.board[b]->post[p]->get_username();
             title=f.board[b]->post[p]->get_title();
             id=f.board[b]->post[p]->get_id();
             content=f.board[b]->post[p]->get_content();
             time=f.board[b]->post[p]->get_time();

             title.replace(QString(" "),QString("_"));
             title.replace(QString("\n"),QString("~/"));
             content.replace(QString(" "),QString("_"));
             content.replace(QString("\n"),QString("~/"));

             ForumStr=ForumStr+"##"+poster+" "+title+" "+content+" "+id+" "+time+" "+QString::number(iscommented)+" "+QString::number(CommentNum);

             for(int c=0;c<CommentNum;c++){
                 QString sender,receiver,time,content;
                 sender=f.board[b]->post[p]->comment[c]->get_sender();
                 receiver=f.board[b]->post[p]->comment[c]->get_receiver();
                 time=f.board[b]->post[p]->comment[c]->get_time();
                 content=f.board[b]->post[p]->comment[c]->get_content();

                 content.replace(QString("\n"),QString("~/"));
                 content.replace(QString(" "),QString("_"));

                 ForumStr=ForumStr+"#"+sender+" "+receiver+" "+content+" "+time;

             }
         }
     }



     ForumStr=ForumStr+"####";
     int AdminNum=f.admin.size();
     ForumStr+=QString::number(AdminNum);
     for(int a=0;a<AdminNum;a++){
         QString name,id;
         name=f.admin[a]->get_username();
         id=f.admin[a]->get_id();
         ForumStr+="##"+name+" "+id;
     }

     int ModeratorNum=f.moderator.size();
     ForumStr+="###"+QString::number(ModeratorNum);
     for(int m=0;m<ModeratorNum;m++){
         QString name,id;
         name=f.moderator[m]->get_username();
         id=f.moderator[m]->get_id();
         int myboardNum=f.moderator[m]->myboard.size();
         ForumStr+="##"+name+" "+id+" "+QString::number(myboardNum);
         for(int n=0;n<myboardNum;n++){
             ForumStr=ForumStr+" "+QString::number(f.moderator[m]->myboard[n]);
         }
     }

     int GeneralNum=f.general.size();
     ForumStr+="###"+QString::number(GeneralNum);
     for(int g=0;g<GeneralNum;g++){
         QString name,id;
         name=f.general[g]->get_username();
         id=f.general[g]->get_id();
         ForumStr+="##"+name+" "+id;
     }

     qDebug()<<ForumStr;


     return ForumStr;

}

void Server::UpdateForum(QString ForumStr)
{   f.board.clear();
    qDebug()<<"进入更新论坛";
    qDebug()<<ForumStr;
    //QStringList Board_or_User=ForumStr.split("####");

    QStringList Boardlist=ForumStr.split("###",QString::SkipEmptyParts);

    for(int b=0;b<8;b++){
        QStringList Postlist=Boardlist[b].split("##",QString::SkipEmptyParts);

        QStringList BoardInfo=Postlist[0].split(" ");

         Board *B=new Board;
         B->set_type_name(BoardInfo[0]);
         B->set_moderator(BoardInfo[1]);
         f.board.push_back(B);
         qDebug()<<f.board[b]->get_type_name()<<f.board[b]->get_moderator();

        int PostNum=BoardInfo[2].toInt();
       // qDebug()<<BoardInfo[0]<<" "<<BoardInfo[1]<<" "<<PostNum;

        for(int p=0;p<PostNum;p++){
            QStringList Commentlist=Postlist[p+1].split("#",QString::SkipEmptyParts);
            QStringList PostInfo=Commentlist[0].split(" ");

            QString poster,title,content,id,time;
            int iscommented=PostInfo[5].toInt();
            int CommentNum=PostInfo[6].toInt();
            poster=PostInfo[0];
            title=PostInfo[1];
            content=PostInfo[2];
            id=PostInfo[3];
            time=PostInfo[4];

            title.replace(QString("_"),QString(" "));
            title.replace(QString("~/"),QString("\n"));
            content.replace(QString("_"),QString(" "));
            content.replace(QString("~/"),QString("\n"));


            Post *P=new Post;
            P->set_post(title,content,id,poster,time);
            f.board[b]->post.push_back(P);
            qDebug()<<poster<<" "<<title<<" "<<content<<" "<<id<<" "<<time<<" "<<iscommented<<" "<<CommentNum;
            qDebug()<<f.board[b]->post[p]->get_username()<<f.board[b]->post[p]->get_title()<<f.board[b]->post[p]->get_content()<<f.board[b]->post[p]->get_id()<<f.board[b]->post[p]->get_time()<<f.board[b]->post[p]->is_commented;

            for(int c=0;c<CommentNum;c++){
                QStringList CommentInfo=Commentlist[c+1].split(" ");

                QString sender,receiver,content,time;
                sender=CommentInfo[0];
                receiver=CommentInfo[1];
                content=CommentInfo[2];
                time=CommentInfo[3];

                Comment *C=new Comment;
                C->set_comment(sender,receiver,content,time);
                f.board[b]->post[p]->comment.push_back(C);
                //f.board[b]->post[p]->comment[c]->set_comment(sender,receiver,content,time);
                qDebug()<<sender<<" "<<receiver<<" "<<content<<" "<<time;
                qDebug()<<f.board[b]->post[p]->comment[c]->get_sender()<<f.board[b]->post[p]->comment[c]->get_receiver()<<f.board[b]->post[p]->comment[c]->get_content()<<f.board[b]->post[p]->comment[c]->get_time();

            }

        }

    }

}




