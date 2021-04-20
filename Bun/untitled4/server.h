#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QMetaType>

class Server : public QObject
{
    Q_OBJECT
public:
    explicit Server(QObject *parent=0);
    void StartServer();
    void incomingConnection(qintptr handle);

signals:

public slots:

private:
    QTcpServer *server;

};

#endif // SERVER_H
