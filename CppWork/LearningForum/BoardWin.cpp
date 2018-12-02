#include "BoardWin.h"
#include "ui_BoardWin.h"
#include "PostWin.h"
#include "WritePostWin.h"
#include <QAction>
#include <QMenu>
#include<QDebug>
#include "Globle.h"
#include<QMessageBox>
#include "DeletePostWin.h"
#include <QPushButton>
#include "AppointWin.h"
#include "UserInfoWin.h"
#include "EnterWin.h"
BoardWin::BoardWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BoardWin)
{
    ui->setupUi(this);

    //Dialog *d=new Dialog;
   // d->show();

  if(type==1){
   ui->usename_lb->setText(f.general[current_general]->get_username());
   ui->id_lb->setText(f.general[current_general]->get_id());
   ui->type_lb->setText("普通用户");
     }
  else if(type==2){
      ui->usename_lb->setText(f.moderator[current_moderator]->get_username());
      ui->id_lb->setText(f.moderator[current_moderator]->get_id());
      ui->type_lb->setText("版主用户");
  }
  else if(type==3){
      ui->usename_lb->setText(f.admin[current_admin]->get_username());
      ui->id_lb->setText(f.admin[current_admin]->get_id());
      ui->type_lb->setText("管理员");
  }

   refresh();

}

BoardWin::~BoardWin()
{
    delete ui;
}

void BoardWin::on_writepost_btn_clicked()
{
    WritePostWin *w=new WritePostWin;
     w->show();
}

void BoardWin::on_delete_clicked()
{
    if(type==1){
        if(f.general[current_general]->delete_post()==0)
            QMessageBox::warning( this,("Warning"), ("You don't have the priority!"));
        /*
         if(f.board[current_board]->post[current_post]->get_username()==f.general[current_general]->get_username() && !f.board[current_board]->post[current_post]->is_commented)
         {
             DeletePostWin *d=new DeletePostWin;
             d->show();
         }
         else
             QMessageBox::warning( this,("Warning"), ("You don't have the priority!"));
          */
    }
    else if(type==2){
        if(f.moderator[current_moderator]->delete_post()==0)
            QMessageBox::warning( this,("Warning"), ("You don't have the priority!"));

        /*
        if(f.board[current_board]->get_moderator()==f.moderator[current_moderator]->get_username())
        {   DeletePostWin *d=new DeletePostWin;
            d->show();
        }
        else
            QMessageBox::warning( this,("Warning"), ("You don't have the priority!"));
            */
    }
    else if(type==3){
       // f.admin[current_admin]->delete_post();
        DeletePostWin *d=new DeletePostWin;
        d->show();
     }

}

void BoardWin::on_listWidget_pressed(const QModelIndex &index)
{   current_board=0;
    current_post=ui->listWidget->currentRow();
    if (qApp->mouseButtons() == Qt::LeftButton) //左键
    {  qDebug()<<"zuojian1"<<endl;


        PostWin *p=new PostWin;
        p->show();
    }
    else if(qApp->mouseButtons() == Qt::RightButton) //右键
    {
         qDebug()<<"youjian"<<endl;
         QMenu *cmenu = new QMenu(ui->listWidget);
               QAction *action1 = cmenu->addAction("删除");
         connect(action1, SIGNAL(triggered(bool)), this, SLOT(on_delete_clicked()));

          cmenu->exec(QCursor::pos());

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
    else if(qApp->mouseButtons() == Qt::RightButton) //右键
    {
         qDebug()<<"youjian"<<endl;
         QMenu *cmenu = new QMenu(ui->listWidget_2);
               QAction *action1 = cmenu->addAction("删除");
         connect(action1, SIGNAL(triggered(bool)), this, SLOT(on_delete_clicked()));

          cmenu->exec(QCursor::pos());

    }

}

void BoardWin::on_listWidget_3_pressed(const QModelIndex &index)
{    current_board=2;
     current_post=ui->listWidget_3->currentRow();
     if (qApp->mouseButtons() == Qt::LeftButton) //左键
     {  qDebug()<<"zuojian1"<<endl;


         PostWin *p=new PostWin;
         p->show();
     }
     else if(qApp->mouseButtons() == Qt::RightButton) //右键
     {
          qDebug()<<"youjian"<<endl;
          QMenu *cmenu = new QMenu(ui->listWidget_3);
                QAction *action1 = cmenu->addAction("删除");
          connect(action1, SIGNAL(triggered(bool)), this, SLOT(on_delete_clicked()));

           cmenu->exec(QCursor::pos());

     }

}

void BoardWin::on_listWidget_4_pressed(const QModelIndex &index)
{   current_board=3;
    current_post=ui->listWidget_4->currentRow();
    if (qApp->mouseButtons() == Qt::LeftButton) //左键
    {  qDebug()<<"zuojian1"<<endl;


        PostWin *p=new PostWin;
        p->show();
    }
    else if(qApp->mouseButtons() == Qt::RightButton) //右键
    {
         qDebug()<<"youjian"<<endl;
         QMenu *cmenu = new QMenu(ui->listWidget_4);
               QAction *action1 = cmenu->addAction("删除");
         connect(action1, SIGNAL(triggered(bool)), this, SLOT(on_delete_clicked()));

          cmenu->exec(QCursor::pos());

    }


}

void BoardWin::on_listWidget_5_pressed(const QModelIndex &index)
{   current_board=4;
    current_post=ui->listWidget_5->currentRow();
    if (qApp->mouseButtons() == Qt::LeftButton) //左键
    {  qDebug()<<"zuojian1"<<endl;


        PostWin *p=new PostWin;
        p->show();
    }
    else if(qApp->mouseButtons() == Qt::RightButton) //右键
    {
         qDebug()<<"youjian"<<endl;
         QMenu *cmenu = new QMenu(ui->listWidget_5);
               QAction *action1 = cmenu->addAction("删除");
         connect(action1, SIGNAL(triggered(bool)), this, SLOT(on_delete_clicked()));

          cmenu->exec(QCursor::pos());

    }


}

void BoardWin::on_listWidget_6_pressed(const QModelIndex &index)
{   current_board=5;
    current_post=ui->listWidget_6->currentRow();
    if (qApp->mouseButtons() == Qt::LeftButton) //左键
    {  qDebug()<<"zuojian1"<<endl;


        PostWin *p=new PostWin;
        p->show();
    }
    else if(qApp->mouseButtons() == Qt::RightButton) //右键
    {
         qDebug()<<"youjian"<<endl;
         QMenu *cmenu = new QMenu(ui->listWidget_6);
               QAction *action1 = cmenu->addAction("删除");
         connect(action1, SIGNAL(triggered(bool)), this, SLOT(on_delete_clicked()));

          cmenu->exec(QCursor::pos());

    }


}

void BoardWin::on_listWidget_7_pressed(const QModelIndex &index)
{    current_board=6;
     current_post=ui->listWidget_7->currentRow();
     if (qApp->mouseButtons() == Qt::LeftButton) //左键
     {  qDebug()<<"zuojian1"<<endl;


         PostWin *p=new PostWin;
         p->show();
     }
     else if(qApp->mouseButtons() == Qt::RightButton) //右键
     {
          qDebug()<<"youjian"<<endl;
          QMenu *cmenu = new QMenu(ui->listWidget_7);
                QAction *action1 = cmenu->addAction("删除");
          connect(action1, SIGNAL(triggered(bool)), this, SLOT(on_delete_clicked()));

           cmenu->exec(QCursor::pos());

     }


}

void BoardWin::on_listWidget_8_pressed(const QModelIndex &index)
{   current_board=7;
    current_post=ui->listWidget_8->currentRow();
    if (qApp->mouseButtons() == Qt::LeftButton) //左键
    {  qDebug()<<"zuojian1"<<endl;


        PostWin *p=new PostWin;
        p->show();
    }
    else if(qApp->mouseButtons() == Qt::RightButton) //右键
    {
         qDebug()<<"youjian"<<endl;
         QMenu *cmenu = new QMenu(ui->listWidget_8);
               QAction *action1 = cmenu->addAction("删除");
         connect(action1, SIGNAL(triggered(bool)), this, SLOT(on_delete_clicked()));

          cmenu->exec(QCursor::pos());

    }
}



void BoardWin::on_Board_1_clicked()
{
    ui->tabWidget1->setCurrentIndex(0);
}


void BoardWin::on_pushButton_2_clicked()
{
    ui->tabWidget1->setCurrentIndex(1);
}


void BoardWin::on_pushButton_3_clicked()
{
    ui->tabWidget1->setCurrentIndex(2);
}

void BoardWin::on_pushButton_5_clicked()
{
    ui->tabWidget1->setCurrentIndex(3);
}

void BoardWin::on_pushButton_7_clicked()
{
    ui->tabWidget1->setCurrentIndex(4);
}

void BoardWin::on_pushButton_4_clicked()
{
    ui->tabWidget1->setCurrentIndex(5);
}

void BoardWin::on_pushButton_11_clicked()
{
    ui->tabWidget1->setCurrentIndex(6);
}

void BoardWin::on_pushButton_6_clicked()
{
    ui->tabWidget1->setCurrentIndex(7);
}


void BoardWin::on_actionAppoiny_Disappoint_triggered()
{   if(type!=3){
        QMessageBox::warning( this,("Warning"), ("You don't have the priority!"));
         return;
      }
    else{
        AppointWin *a=new AppointWin;
        a->show();
    }


}

void BoardWin::refresh()
{ ui->listWidget->clear();
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
void BoardWin::on_refresh_btn_clicked()
{
      this->refresh();
}

void BoardWin::on_set_btn_clicked()
{    UserInfoWin *uw=new UserInfoWin;
     uw->show();

}

void BoardWin::on_Profile_btn_clicked()
{
    if(type==1){
       f.general[current_general]->view_my_information();
    }
    else if(type==2){
        f.moderator[current_moderator]->view_my_information();
    }
    else if(type==3){
        f.admin[current_admin]->view_my_information();
    }

}

void BoardWin::on_actionlogout_triggered()
{
    boardwindows->close();
    EnterWin *ew=new EnterWin;
    ew->show();
}
