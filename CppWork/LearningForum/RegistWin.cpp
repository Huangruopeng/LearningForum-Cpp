#include "RegistWin.h"
#include "ui_RegistWin.h"

RegistWin::RegistWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistWin)
{
    ui->setupUi(this);
}

RegistWin::~RegistWin()
{
    delete ui;
}
