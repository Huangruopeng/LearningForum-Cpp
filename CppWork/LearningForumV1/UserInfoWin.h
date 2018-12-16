#ifndef USERINFOWIN_H
#define USERINFOWIN_H

#include <QDialog>

namespace Ui {
class UserInfoWin;
}

class UserInfoWin : public QDialog
{
    Q_OBJECT

public:
    explicit UserInfoWin(QWidget *parent = 0);
    ~UserInfoWin();

private slots:
    void on_listWidget_general_clicked(const QModelIndex &index);

    void on_listWidget_moderator_clicked(const QModelIndex &index);

private:
    Ui::UserInfoWin *ui;
};

#endif // USERINFOWIN_H
