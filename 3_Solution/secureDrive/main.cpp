#include "securedrive.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SecureDrive w;
    w.show();
    return a.exec();
}
