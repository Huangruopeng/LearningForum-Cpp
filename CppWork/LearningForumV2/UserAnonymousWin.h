#ifndef USERANONYMOUSWIN_H
#define USERANONYMOUSWIN_H

#include <QDialog>

namespace Ui {
class UserAnonymousWin;
}

class UserAnonymousWin : public QDialog
{
    Q_OBJECT

public:
    explicit UserAnonymousWin(QWidget *parent = 0);
    ~UserAnonymousWin();

private slots:
    void on_OK_btn_clicked();

    void on_pushButton_clicked();

private:
    Ui::UserAnonymousWin *ui;
};

#endif // USERANONYMOUSWIN_H
