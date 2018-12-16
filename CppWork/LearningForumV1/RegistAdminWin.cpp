#include "RegistAdminWin.h"
#include "ui_RegistAdminWin.h"

RegistAdminWin::RegistAdminWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistAdminWin)
{
    ui->setupUi(this);
}

RegistAdminWin::~RegistAdminWin()
{
    delete ui;
}
