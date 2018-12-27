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

private slots:
    void on_Cancel_btn_clicked();

    void on_OK_btn_clicked();

    void on_RegistAdmin_btn_clicked();

private:
    Ui::RegistWin *ui;
};

#endif // REGISTWIN_H
