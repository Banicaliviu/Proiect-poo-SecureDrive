#include "login.h"
#include "ui_login.h"
#include<QMessageBox>
#include "securedrive.h"
#include <QToolButton>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->lineEdit_username->setPlaceholderText("Introduceți numele");
    ui->lineEdit_password->setPlaceholderText("Introduceți parola");
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
        app->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
        app->setFixedSize(app->size());
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
    sec->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    sec->setFixedSize(sec->size());
    sec->show();
}

void Login::on_toolButton_iesire_clicked()//exit
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Ieșire");
    msgBox.setText("Sunteți sigur că doriți să inchideți aplicația?");
    msgBox.setStandardButtons((QMessageBox::Yes));
    msgBox.addButton((QMessageBox::No));
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec()==QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
        msgBox.Close;
    }
}

void Login::on_toolButton_min_clicked()//minimize
{
    this->showMinimized();
}

//void Login::on_toolButton_3_clicked(bool expand)//expand
//{
//    expand=true;
//    if(expand==true)
//    {
//        this->setWindowState(Qt::WindowMaximized);
//    }
//    else
//        {
//        this->showNormal();
//        }
//}
