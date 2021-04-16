#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "app.h"
#include <QPushButton>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_inapoi_clicked();

private:
    Ui::Login *ui;
    App *app;
};

#endif // LOGIN_H
