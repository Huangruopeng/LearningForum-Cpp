#ifndef REGISTADMIN_H
#define REGISTADMIN_H

#include <QDialog>

namespace Ui {
class RegistAdmin;
}

class RegistAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit RegistAdmin(QWidget *parent = 0);
    ~RegistAdmin();

private slots:
    void on_OK_btn_clicked();

private:
    Ui::RegistAdmin *ui;
};

#endif // REGISTADMIN_H
