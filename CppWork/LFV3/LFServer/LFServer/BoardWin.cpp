#include "BoardWin1.h"
#include "ui_BoardWin.h"
#include "PostWin.h"
#include "globle.h"
#include <QDebug>

BoardWin::BoardWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BoardWin)
{
    ui->setupUi(this);

}

BoardWin::~BoardWin()
{
    delete ui;
}




Refresh()
{
    ui->listWidget->clear();
    ui->listWidget_2->clear();
    ui->listWidget_3->clear();
    ui->listWidget_4->clear();
    ui->listWidget_5->clear();
    ui->listWidget_6->clear();
    ui->listWidget_7->clear();
    ui->listWidget_8->clear();

    int t=f.board[0]->post.size();
    for(int i=0;i<t;i++){
        QString s=f.board[0]->post[i]->get_title();
        ui->listWidget->addItem(s);
    }

     t=f.board[1]->post.size();
      for(int i=0;i<t;i++){
        QString s=f.board[1]->post[i]->get_title();
        ui->listWidget_2->addItem(s);
       }

      t=f.board[2]->post.size();
        for(int i=0;i<t;i++){
          QString s=f.board[2]->post[i]->get_title();
          ui->listWidget_3->addItem(s);
      }

      t=f.board[3]->post.size();
        for(int i=0;i<t;i++){
          QString s=f.board[3]->post[i]->get_title();
          ui->listWidget_4->addItem(s);
      }

      t=f.board[4]->post.size();
         for(int i=0;i<t;i++){
           QString s=f.board[4]->post[i]->get_title();
           ui->listWidget_5->addItem(s);
         }

      t=f.board[5]->post.size();
          for(int i=0;i<t;i++){
             QString s=f.board[5]->post[i]->get_title();
             ui->listWidget_6->addItem(s);
          }

      t=f.board[6]->post.size();
           for(int i=0;i<t;i++){
             QString s=f.board[6]->post[i]->get_title();
             ui->listWidget_7->addItem(s);
            }

      t=f.board[7]->post.size();
           for(int i=0;i<t;i++){
              QString s=f.board[7]->post[i]->get_title();
              ui->listWidget_8->addItem(s);
           }

}

void BoardWin::on_listWidget_2_pressed(const QModelIndex &index)
{   current_board=1;
    current_post=ui->listWidget_2->currentRow();
    if (qApp->mouseButtons() == Qt::LeftButton) //左键
    {  qDebug()<<"zuojian1"<<endl;
        PostWin *p=new PostWin;
        p->show();
    }

}
