#ifndef SECUREDRIVE_H
#define SECUREDRIVE_H

#include <QMainWindow>
#include<QtSql>
#include<QSqlDatabase>
#include "login.h"
#include "register.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SecureDrive; }
QT_END_NAMESPACE

class QSqlQueryModel;

class SecureDrive : public QMainWindow
{
    Q_OBJECT

public:
    SecureDrive(QWidget *parent = nullptr);
    ~SecureDrive();

private slots:
    void on_pushButton_log_clicked();

    void on_pushButton_reg_clicked();

    void on_toolButton_iesire_clicked();

    void on_toolButton_min_clicked();

private:
    Ui::SecureDrive *ui;
    Login* lg;
    Register* rg;
};
#endif // SECUREDRIVE_H
