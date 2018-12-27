#include "ServerWin.h"
#include "ui_ServerWin.h"
#include "BoardWin1.h"
#include <QTcpServer>

ServerWin::ServerWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServerWin)
{
    ui->setupUi(this);
    port=8888;

}

ServerWin::~ServerWin()
{
    delete ui;
}

void ServerWin::on_pushButtonCreateChattingRoom_clicked()
{
    server  = new Server(this, port);
    connect(server, &Server::updateserver, this, &ServerWin::slotupdateserver);
    ui->pushButtonCreateChattingRoom->setEnabled(false);
}

void ServerWin::slotupdateserver(QString msg, int length)
{
    ui->textEdit->append(msg);
}


void ServerWin::on_viewpost_btn_clicked()
{
    BoardWin *f=new BoardWin;
    f->show();
}

void ServerWin::on_pushButtonSave_clicked()
{
    f.Saveforum();
}
