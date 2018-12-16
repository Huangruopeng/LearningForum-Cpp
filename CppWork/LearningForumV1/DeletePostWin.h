#ifndef DELETEPOSTWIN_H
#define DELETEPOSTWIN_H

#include <QDialog>

namespace Ui {
class DeletePostWin;
}

class DeletePostWin : public QDialog
{
    Q_OBJECT

public:
    explicit DeletePostWin(QWidget *parent = 0);
    ~DeletePostWin();

private slots:
    void on_OK_btn_clicked();

private:
    Ui::DeletePostWin *ui;
};

#endif // DELETEPOSTWIN_H
