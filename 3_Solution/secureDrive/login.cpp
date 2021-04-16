#include "login.h"
#include "ui_login.h"
#include<QMessageBox>
#include "securedrive.h"
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle("Logare");
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    QString username=ui->lineEdit_username->text();
    QString password=ui->lineEdit_password->text();

    if(username=="admin" && password=="admin")
    {
        QMessageBox::information(this, "Logare", "Logare efectuată cu succes");
        hide();
        app = new App(this);
        app->show();
    }
    else
    {
        QMessageBox::information(this, "Logare", "Numele de utilizator și parola nu se potrivesc");
    }
}


void Login::on_pushButton_inapoi_clicked()
{
    hide();
    SecureDrive *sec = new SecureDrive(this);
    sec->show();
}


