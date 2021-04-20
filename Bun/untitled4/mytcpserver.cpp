#include "mytcpserver.h"

MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)
{
    server=new QTcpServer(this);
    QObject::connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));

    if(!server->listen(QHostAddress::Any, 9999))
    {
        qDebug()<<"Nu s-a putut realiza conexiunea la server";
    }
    else
    {
        qDebug()<<"S-a realizat conexiunea la server";
    }
}

void MyTcpServer::newConnection()
{
    QTcpSocket *socket=server->nextPendingConnection();

    socket->write("Hello\n");
    socket->flush();

    socket->waitForBytesWritten(3000);

    socket->close();

}
