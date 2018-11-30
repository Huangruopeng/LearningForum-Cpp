#ifndef REGISTADMINWIN_H
#define REGISTADMINWIN_H

#include <QDialog>

namespace Ui {
class RegistAdminWin;
}

class RegistAdminWin : public QDialog
{
    Q_OBJECT

public:
    explicit RegistAdminWin(QWidget *parent = 0);
    ~RegistAdminWin();

private:
    Ui::RegistAdminWin *ui;
};

#endif // REGISTADMINWIN_H
