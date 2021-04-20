#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include "app.h"
#include <QPushButton>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlTableModel>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:

    //void on_pushButton_register_clicked();

    void on_pushButton_inapoi_clicked();

    void on_toolButton_min_clicked();

    void on_toolButton_iesire_clicked();

    void on_pushButton_register_clicked();

private:
    Ui::Register *ui;
    Register *reg;

};

#endif // REGISTER_H
