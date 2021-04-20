#include "securedrive.h"
#include"mytcpserver.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyTcpServer server;
    SecureDrive w;
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    w.setFixedSize(w.size());
    w.show();
    return a.exec();
}
