#ifndef WRITEPOSTWIN_H
#define WRITEPOSTWIN_H

#include <QDialog>

namespace Ui {
class WritePostWin;
}

class WritePostWin : public QDialog
{
    Q_OBJECT

public:
    explicit WritePostWin(QWidget *parent = 0);
    ~WritePostWin();

private slots:
    void on_OK_btn_clicked();

private:
    Ui::WritePostWin *ui;
};

#endif // WRITEPOSTWIN_H
