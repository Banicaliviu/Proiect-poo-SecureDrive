#include "securedrive.h"
#include "ui_securedrive.h"
#include <QMessageBox>

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

void SecureDrive::on_pushButton_log_clicked()
{
   hide();
   lg = new Login(nullptr);
   lg->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
   lg->show();
}

void SecureDrive::on_pushButton_reg_clicked()
{
    hide();
    rg=new Register(nullptr);
    rg->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    rg->show();
}

void SecureDrive::on_toolButton_iesire_clicked()
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

void SecureDrive::on_toolButton_min_clicked()
{
    this->showMinimized();
}
