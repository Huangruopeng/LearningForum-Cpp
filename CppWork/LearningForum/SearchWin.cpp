#include "SearchWin.h"
#include "ui_SearchWin.h"

SearchWin::SearchWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchWin)
{
    ui->setupUi(this);
}

SearchWin::~SearchWin()
{
    delete ui;
}
