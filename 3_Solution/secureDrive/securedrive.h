#ifndef SECUREDRIVE_H
#define SECUREDRIVE_H

#include <QMainWindow>
#include "login.h"
#include "register.h"
QT_BEGIN_NAMESPACE
namespace Ui { class SecureDrive; }
QT_END_NAMESPACE

class SecureDrive : public QMainWindow
{
    Q_OBJECT

public:
    SecureDrive(QWidget *parent = nullptr);
    ~SecureDrive();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::SecureDrive *ui;
    Login* lg;
    Register* rg;
};
#endif // SECUREDRIVE_H
