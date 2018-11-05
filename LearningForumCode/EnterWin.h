#ifndef ENTERWIN_H
#define ENTERWIN_H

//#include <QMainWindow>
#include <QDialog>
namespace Ui {
class EnterWin;
}

class EnterWin : public QDialog
{
    Q_OBJECT

public:
    explicit EnterWin(QWidget *parent = 0);
    ~EnterWin();

private slots:


    void on_OK_btn_clicked();



    void on_sign_in_btn_clicked();

    void on_Cancel_btn_clicked();

private:
    Ui::EnterWin *ui;
};

#endif // ENTERWIN_H
