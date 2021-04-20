#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include<QTcpSocket>
#include<QDebug>
#include<QThreadPool>

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = nullptr);
    void SetSocket(int descriptor);
signals:

public slots:
    void connected();
    void disconnected();
    void readyRead();
    void taskResult(int nr);

private:
    QTcpSocket *socket;
};

#endif // CLIENT_H
