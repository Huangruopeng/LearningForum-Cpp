#ifndef REGISTWIN_H
#define REGISTWIN_H

#include <QDialog>

namespace Ui {
class RegistWin;
}

class RegistWin : public QDialog
{
    Q_OBJECT

public:
    explicit RegistWin(QWidget *parent = 0);
    ~RegistWin();

private:
    Ui::RegistWin *ui;
};

#endif // REGISTWIN_H
