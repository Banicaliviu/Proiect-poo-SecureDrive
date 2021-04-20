#include "server.h"
#include"client.h"

Server::Server(QObject *parent) :
    QTcpServer(parent)
{

}

void StartServer()
{
    if(!server->listen(QHostAddress::Any, 9999))
    {
        qDebug()<<"Nu s-a putut realiza conexiunea la server";
    }
    else
    {
        qDebug()<<"S-a realizat conexiunea la server";
    }
}

void incomingConnection(qintptr handle)
{
    Client client= new Client(this);
    client.SetSocket(handle);
}
