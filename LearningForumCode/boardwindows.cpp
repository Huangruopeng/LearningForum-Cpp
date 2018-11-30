#include "BoardWindows.h"
#include "ui_boardwindows.h"
#include <QMovie>
#include <QPicture>
#include <QLabel>
#include <QList>
#include "Register.h"
BoardWindows::BoardWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BoardWindows)
{
    ui->setupUi(this);
    QMovie *pic =new QMovie("C:/Users/Rocair/Desktop/LearningForum-Cpp/LearningForumCode/ProfilePic.png");
    ui->ProfilePicture_label->setMovie(pic);
    pic->start();
    ui->ProfilePicture_label->show();

   // ui->tabWidget1->
    //ui->listWidget
}

BoardWindows::~BoardWindows()
{
    delete ui;
}


