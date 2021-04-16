/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_inapoi;
    QPushButton *pushButton_login;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(620, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(229, 224, 228, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Login->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/User/Desktop/SecureDriveIcon.jpeg"), QSize(), QIcon::Normal, QIcon::On);
        Login->setWindowIcon(icon);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("C:/Users/roiur/Desktop/WhatsApp Image 2021-03-30 at 18.31.01.jpeg")));

        gridLayout->addWidget(label_3, 0, 0, 3, 1);

        groupBox = new QGroupBox(Login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        groupBox->setPalette(palette1);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        formLayoutWidget_2 = new QWidget(groupBox);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(30, 20, 241, 61));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_username = new QLineEdit(formLayoutWidget_2);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_username);

        label_2 = new QLabel(formLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_password = new QLineEdit(formLayoutWidget_2);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_password);

        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 90, 251, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 0, 0);
        pushButton_inapoi = new QPushButton(horizontalLayoutWidget);
        pushButton_inapoi->setObjectName(QString::fromUtf8("pushButton_inapoi"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_inapoi->sizePolicy().hasHeightForWidth());
        pushButton_inapoi->setSizePolicy(sizePolicy1);
        pushButton_inapoi->setStyleSheet(QString::fromUtf8("background-color:rgb(230, 188, 97);\n"
"border-style:outset;\n"
"border-color:black;\n"
"border-width:1px;\n"
"border-radius:10px;"));

        horizontalLayout->addWidget(pushButton_inapoi);

        pushButton_login = new QPushButton(horizontalLayoutWidget);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        sizePolicy1.setHeightForWidth(pushButton_login->sizePolicy().hasHeightForWidth());
        pushButton_login->setSizePolicy(sizePolicy1);
        pushButton_login->setStyleSheet(QString::fromUtf8("background-color:rgb(81, 165, 215);\n"
"border-style:outset;\n"
"border-color:black;\n"
"border-width:1px;\n"
"border-radius:10px;"));

        horizontalLayout->addWidget(pushButton_login);


        gridLayout->addWidget(groupBox, 1, 1, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label_3->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("Login", "Conectare", nullptr));
        label->setText(QCoreApplication::translate("Login", "Nume utilizator", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Parola", nullptr));
        pushButton_inapoi->setText(QCoreApplication::translate("Login", "\303\216napoi", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "Conecta\310\233i-v\304\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
