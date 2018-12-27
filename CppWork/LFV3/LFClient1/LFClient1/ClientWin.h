#ifndef CLIENTWIN_H
#define CLIENTWIN_H

#include <QWidget>
#include <QTcpSocket>
namespace Ui {
class ClientWin;
}

class ClientWin : public QWidget
{
    Q_OBJECT

public:
    explicit ClientWin(QWidget *parent = 0);
    ~ClientWin();
    void SendForum();
    void UpdateForum(QString ForumStr);

private slots:
    void on_connect_btn_clicked();
    void on_update_btn_clicked();

    void slotconnectedsuccess();//用来处理连接成功的信号
    void slotreceive();//接收服务器传过来的信息
    void slotdisconnected();//用来处理离开聊天室的信号

private:
    Ui::ClientWin *ui;


};

#endif // CLIENTWIN_H
