#include "ClientWin.h"
#include "ui_ClientWin.h"
#include <QMessageBox>
#include "Globle.h"
#include "Forum.h"
#include <QTcpSocket>

ClientWin::ClientWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWin)
{
    ui->setupUi(this);
    status =false;
    port=8888;
    ui->ServerIP_LE->setText("127.0.0.1");
    ui->ServerPort_LE->setText(QString::number(port) );
    serverIP= new QHostAddress();

    ui->update_btn->setEnabled(false);
}

ClientWin::~ClientWin()
{
    delete ui;
}

void ClientWin::on_connect_btn_clicked()
{
    //首先判断这个用户是不是在聊天室中
    if(status == false)
    {
        //不在聊天室中就和服务器进行连接
        QString ip = ui->ServerIP_LE->text();//从界面获取ip地址
        if(!serverIP->setAddress(ip))//用这个函数判断IP地址是否可以被正确解析
        {
            //不能被正确解析就弹出一个警告窗口
            QMessageBox::warning(this, "错误", "IP地址不正确");
            return;
        }
        if(ui->HostName_LE->text() == "")
        {
            //用户名不能为空
            QMessageBox::warning(this, "错误", "用户名不能为空");
            return;
        }

        //从界面获取用户名
        //HostName = ui->lineEditUserName->text();
        //创建一个通信套接字，用来和服务器进行通信
        tcpsocket = new QTcpSocket(this);


        //和服务器进行连接
        tcpsocket->connectToHost(*serverIP, port);

        //和服务器连接成功能会触发connected信号
        connect(tcpsocket, &QTcpSocket::connected, this, &ClientWin::slotconnectedsuccess);
        //接收到服务器的信息就会触发readyRead信号
        connect(tcpsocket, &QTcpSocket::readyRead, this, &ClientWin::slotreceive);



        //将进入聊天室的标志位置为true；
        status = true;
    }
    else//已经进入了聊天室
    {
        int length = 0;
        QString msg = HostName + ":Leave Chat Room";

        //创建一个通信套接字，用来和服务器进行通信
       tcpsocket = new QTcpSocket(this);
        tcpsocket->write(msg.toUtf8().data());
        tcpsocket->disconnectFromHost();
        status = false;
        //离开聊天室就会触发disconnected信号
        connect(tcpsocket, &QTcpSocket::disconnected, this, &ClientWin::slotdisconnected);
    }


}


void ClientWin::on_update_btn_clicked()
{/*
    if(ui->lineEditSend->text() == "")
    {
        return;
    }
   // QString msg = userName + ":" + ui->->text();
   // tcpsocket = new QTcpSocket(this);
    QString
    tcpsocket->write(msg.toUtf8().data());
    ui->lineEditSend->clear();
    */
}

void ClientWin::slotconnectedsuccess()//用来处理连接成功的信号
{
    //进入聊天室可以发送信息了
    ui->update_btn->setEnabled(true);
    //将进入聊天的按钮改为离开聊天室
    ui->connect_btn->setText("离开聊天室");

    int length = 0;
    //将用户名发送给服务器
    HostName= ui->HostName_LE->text();
    QString msg= HostName+" :Enter Chat Room";
    //tcpsocket = new QTcpSocket(this);
    tcpsocket->write(msg.toUtf8().data());

}

void ClientWin::slotreceive()//接收服务器传过来的信息
{
    QByteArray array = tcpsocket->readAll();
    QString msg = array;
    qDebug()<<"收到的msg:"+msg;
    QStringList list=msg.split("<<>>");
    if(list[0]=="error"){
        //提示密码错误
        QMessageBox::warning(this, "错误", "密码或者用户名错误");
    }
    else if(list[0]=="confirm"){
        qDebug()<<"收到确认登录消息";
        type=list[1].split("#")[0].toInt();
        if(type==1)
           current_general=list[1].split("#")[1].toInt();
        else if(type==2)
            current_moderator=list[1].split("#")[1].toInt();
        else if(type==3)
            current_admin=list[1].split("#")[1].toInt();
        else if(type==4){

        }


        QMessageBox::information(this, "提示", "登录成功");

        UpdateForum(list[2]);

        boardwindows =new BoardWin;
        boardwindows->show();


    }
    else if(list[0]=="update"){
        UpdateForum(list[1]);
    }


}

void ClientWin::slotdisconnected()//用来处理离开聊天室的信号
{
    ui->update_btn->setEnabled(false);
    ui->connect_btn->setText("进入聊天室");
}



void ClientWin::UpdateForum(QString ForumStr)
{   f.board.clear();
    f.admin.clear();
    f.general.clear();
    f.moderator.clear();
    qDebug()<<"进入更新论坛";
    qDebug()<<ForumStr;
    QStringList Board_or_User=ForumStr.split("####");

    QStringList Boardlist=Board_or_User[0].split("###",QString::SkipEmptyParts);

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

    QStringList Userlist=Board_or_User[1].split("###",QString::SkipEmptyParts);
    QStringList Adminlist=Userlist[0].split("##");
    int AdminNum=Adminlist[0].toInt();
    for(int i=0;i<AdminNum;i++){
        QStringList AdminInfo=Adminlist[i+1].split(" ");
        QString name,id;
        name=AdminInfo[0];
        id=AdminInfo[1];

        Administrator *A=new Administrator;
        A->change_username(name);
        A->change_id(id);
        f.admin.push_back(A);
        //f.admin[i]->change_username(name);
        //f.admin[i]->change_id(id);
        qDebug()<<name<<" "<<id;
    }

    QStringList Moderatorlist=Userlist[1].split("##");
    int ModeratorNum=Moderatorlist[0].toInt();
    for(int i=0;i<ModeratorNum;i++){
        QStringList ModeratorInfo=Moderatorlist[i+1].split(" ");
        QString name=ModeratorInfo[0];
        QString id=ModeratorInfo[1];
        ModeratorUser *M=new ModeratorUser;
        M->change_username(name);
        M->change_id(id);
        f.moderator.push_back(M);
        //f.moderator[i]->change_username(name);
       // f.moderator[i]->change_id(id);
        int myBoardNum=ModeratorInfo[2].toInt();
        qDebug()<<name<<" "<<id<<myBoardNum;
        for(int j=0;j<myBoardNum;j++){
            f.moderator[i]->myboard.push_back(ModeratorInfo[3+j].toInt());
            qDebug()<<ModeratorInfo[3+j].toInt();
        }
    }

    QStringList Generallist=Userlist[2].split("##");
    int GeneralNum=Generallist[0].toInt();
    for(int i=0;i<GeneralNum;i++){
        QStringList GeneralInfo=Generallist[i+1].split(" ");
        QString name= GeneralInfo[0];
        QString id= GeneralInfo[1];

        GeneralUser *G=new GeneralUser;
        G->change_username(name);
        G->change_id(id);
        f.general.push_back(G);
        qDebug()<<name<<" "<<id;
        //f.general[i]->change_username(name);
        //f.general[i]->change_id(id);
    }
}


