#ifndef POSTWIN_H
#define POSTWIN_H

#include <QDialog>

namespace Ui {
class PostWin;
}

class PostWin : public QDialog
{
    Q_OBJECT

public:
    explicit PostWin(QWidget *parent = 0);
    ~PostWin();

private slots:
    void on_OK_btn_clicked();



    void on_refresh_btn_clicked();

private:
    Ui::PostWin *ui;
};

#endif // POSTWIN_H
