#include "tcpclientsocket.h"
#include <QHostAddress>
#include "Globle.h"
TcpClientSocket::TcpClientSocket(QObject *parent)
{
    //客户端发送数据过来就会触发readyRead信号
    connect(this, &TcpClientSocket::readyRead, this, &TcpClientSocket::receivedata);
    connect(this, &TcpClientSocket::disconnected, this, &TcpClientSocket::slotclientdisconnected);
}


//收到数据
void TcpClientSocket::receivedata()
{

    int length = 10;
    QByteArray array = readAll();
    QString msg = array;

    //QStringList list=msg.split(" ");

    emit updateserver(msg, length);
}


void TcpClientSocket::slotclientdisconnected()
{
    emit clientdisconnected(this->socketDescriptor());
}


