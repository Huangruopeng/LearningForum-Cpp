#include "PostWin.h"
#include "ui_PostWin.h"
#include "Globle.h"
#include <QDebug>
#include "Forum.h"
PostWin::PostWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PostWin)
{
    ui->setupUi(this);

    ui->poster->setText(f.board[current_board]->post[current_post]->get_username());
    ui->title->setText(f.board[current_board]->post[current_post]->get_title());
    ui->time->setText(f.board[current_board]->post[current_post]->get_time());
    ui->textBrowser->setText(f.board[current_board]->post[current_post]->get_content());
    int t=f.board[current_board]->post[current_post]->comment.size();
    for(int i=0;i<t;i++){
        QString sender=f.board[current_board]->post[current_post]->comment[i]->get_sender();
        QString receiver=f.board[current_board]->post[current_post]->comment[i]->get_receiver();
        QString time=f.board[current_board]->post[current_post]->comment[i]->get_time();
        QString content=f.board[current_board]->post[current_post]->comment[i]->get_content();
        ui->listWidget->addItem(sender+"@"+receiver+" "+time+"\n   "+content+"\n");
    }
}

PostWin::~PostWin()
{
    delete ui;
}

void PostWin::on_OK_btn_clicked()
{   Comment *c=new Comment;
    QString content=ui->content->toPlainText();
    QString time=f.get_current_time();
    QString receiver=ui->receiver_LE->text();
    if(receiver.isEmpty()){
        receiver=f.board[current_admin]->post[current_post]->get_username();
    }

    if(type==1){
        c->set_comment(f.general[current_general]->get_username(),receiver,content,time);
        f.board[current_board]->post[current_post]->comment.push_back(c);
        f.board[current_board]->post[current_post]->is_commented=1;
    }
    else if(type==2){
        c->set_comment(f.moderator[current_moderator]->get_username(),receiver,content,time);
        f.board[current_board]->post[current_post]->comment.push_back(c);
        f.board[current_board]->post[current_post]->is_commented=1;
    }
    else if(type==3){
        c->set_comment(f.admin[current_admin]->get_username(),receiver,content,time);
        f.board[current_board]->post[current_post]->comment.push_back(c);
        f.board[current_board]->post[current_post]->is_commented=1;
    }
    else if(type==4){
         QMessageBox::warning( this,("Warning"), ("You don't have the priority!"));
    }

    qDebug()<<ui->receiver_LE->text();
    QString ForumStr=f.GetForumStr();
    QString msg="update<<>>"+ForumStr;
    tcpsocket->write(msg.toUtf8().data());
}

void PostWin::on_refresh_btn_clicked()
{   ui->listWidget->clear();
    int t=f.board[current_board]->post[current_post]->comment.size();
    for(int i=0;i<t;i++){
        QString sender=f.board[current_board]->post[current_post]->comment[i]->get_sender();
        QString receiver=f.board[current_board]->post[current_post]->comment[i]->get_receiver();
        QString time=f.board[current_board]->post[current_post]->comment[i]->get_time();
        QString content=f.board[current_board]->post[current_post]->comment[i]->get_content();
        ui->listWidget->addItem(sender+"@"+receiver+" "+time+"\n   "+content+"\n");
    }
}
