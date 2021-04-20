#include "client.h"

Client::Client(QObject *parent) : QObject(parent)
{

}

void Client::SetSocket(int descriptor)
{
    socket = new QTcpSocket(this);

    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));

    socket->setSocketDescriptor(descriptor);

    qDebug()<<"client connected";
}

void Client::connected()
{
    qDebug()<<"client connected event";
}

void Client::disconnected()
{
    qDebug()<<"client disconnected event";
}

void Client::readyRead()
{
 qDebug()<<socket->readAll();
}
