#include "DeletePostWin.h"
#include "ui_DeletePostWin.h"
#include "Globle.h"
DeletePostWin::DeletePostWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeletePostWin)
{
    ui->setupUi(this);
}

DeletePostWin::~DeletePostWin()
{
    delete ui;
}

void DeletePostWin::on_OK_btn_clicked()
{
    if(type==3)
        f.admin[current_admin]->delete_post_real(current_board,current_post);
    else if(type==2)
        f.moderator[current_moderator]->delete_post_real(current_board,current_post);
    else if(type==1)
        f.general[current_general]->delete_post_real(current_board,current_post);

    this->close();

    //f.board[current_board]->post.erase(f.board[current_board]->post.begin()+current_post);
    QString ForumStr=f.GetForumStr();
    QString msg="update<<>>"+ForumStr;
    tcpsocket->write(msg.toUtf8().data());
}
