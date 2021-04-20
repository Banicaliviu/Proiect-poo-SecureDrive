#include "register.h"
#include "ui_register.h"
#include "securedrive.h"

#include<iostream>
#include<QMessageBox>
#include<QDir>
#include<QSqlRecord>
#include <QTreeView>
using namespace std;

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("Introduceți numele");
    ui->lineEdit_2->setPlaceholderText("Introduceți parola");
    ui->lineEdit_3->setPlaceholderText("Confirmați parola");
    ui->lineEdit_4->setPlaceholderText("Introduceți email");
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_inapoi_clicked()
{
    hide();
    SecureDrive *reg = new SecureDrive(this);
    reg->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    reg->setFixedSize(reg->size());
    reg->show();
}

void Register::on_toolButton_min_clicked()
{
    this->showMinimized();
}

void Register::on_toolButton_iesire_clicked()
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

void Register::on_pushButton_register_clicked()
{
    hide();
    QMessageBox msgBox;
    msgBox.setWindowTitle("Înregistrare");
    msgBox.setText("Înregistrare efectuată cu succes!");
    msgBox.setStandardButtons((QMessageBox::Ok));
    if(msgBox.exec()==QMessageBox::Ok)
    {
        SecureDrive *sec=new SecureDrive(nullptr);
        sec->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
        sec->setFixedSize(sec->size());
        sec->show();
    }
    else
    {
        //Login *lg=new Login(nullptr);
        //lg->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
        //lg->setFixedSize(lg->size());
        //lg->show();
        msgBox.Close;
    }
}

