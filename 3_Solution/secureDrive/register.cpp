#include "register.h"
#include "ui_register.h"
#include<QMessageBox>
#include "securedrive.h"
Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    this->setWindowTitle("Înregistrare");
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_register_clicked()
{

}

void Register::on_pushButton_inapoi_clicked()
{
    hide();
    SecureDrive *sec = new SecureDrive(this);
    sec->show();
}
