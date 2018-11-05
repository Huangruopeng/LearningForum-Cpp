#include "RegistAdmin.h"
#include "ui_RegistAdmin.h"
#include <QMessageBox>
RegistAdmin::RegistAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistAdmin)
{
    ui->setupUi(this);
}

RegistAdmin::~RegistAdmin()
{
    delete ui;
}

void RegistAdmin::on_OK_btn_clicked()
{
    QString name=ui->username_LE->text();
    QString password=ui->password_LE->text();
    QString confirmPW=ui->confirm_password_LE->text();
    if(name.isEmpty() || password.isEmpty() || confirmPW.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("必填项不能为空！");
        msgBox.exec();
    }

    if(password !=confirmPW)
    {
        QMessageBox msgBox;
        msgBox.setText("两次输入的密码不相同！");
        msgBox.exec();
    }

}
