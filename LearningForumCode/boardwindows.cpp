#include "BoardWindows.h"
#include "ui_boardwindows.h"
#include <QMovie>
#include <QPicture>
#include <QLabel>
BoardWindows::BoardWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BoardWindows)
{
    ui->setupUi(this);
    QMovie *pic =new QMovie("C:/Users/Rocair/Desktop/LearningForum-Cpp/LearningForumCode/1.png");
    ui->ProfilePicture_label->setMovie(pic);
    pic->start();
    ui->ProfilePicture_label->show();
}

BoardWindows::~BoardWindows()
{
    delete ui;
}
