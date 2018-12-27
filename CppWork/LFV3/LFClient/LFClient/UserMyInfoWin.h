#ifndef USERMYINFOWIN_H
#define USERMYINFOWIN_H

#include <QDialog>

namespace Ui {
class UserMyInfoWin;
}

class UserMyInfoWin : public QDialog
{
    Q_OBJECT

public:
    explicit UserMyInfoWin(QWidget *parent = 0);
    ~UserMyInfoWin();

private:
    Ui::UserMyInfoWin *ui;
};

#endif // USERMYINFOWIN_H
