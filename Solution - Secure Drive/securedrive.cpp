#include "securedrive.h"
#include "ui_securedrive.h"


SecureDrive::SecureDrive(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SecureDrive)
{
    ui->setupUi(this);
}

SecureDrive::~SecureDrive()
{
    delete ui;
}


void SecureDrive::on_pushButton_2_clicked()
{
   hide();
   lg = new Login(this);
   lg->show();
}

void SecureDrive::on_pushButton_3_clicked()
{
    hide();
    rg=new Register(this);
    rg->show();
}
