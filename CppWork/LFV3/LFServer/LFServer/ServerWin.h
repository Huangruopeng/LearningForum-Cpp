#ifndef SERVERWIN_H
#define SERVERWIN_H

#include <QWidget>
#include "server.h"

namespace Ui {
class ServerWin;
}

class ServerWin : public QWidget
{
    Q_OBJECT

public:
    explicit ServerWin(QWidget *parent = 0);
    ~ServerWin();

private slots:
    void on_pushButtonCreateChattingRoom_clicked();

    void on_viewpost_btn_clicked();

    void on_pushButtonSave_clicked();

private:
    Ui::ServerWin *ui;
    int port;
    Server *server;

protected slots:
    void slotupdateserver(QString, int);//接收到server发过来的信号就更新界面的信息


};

#endif // SERVERWIN_H
