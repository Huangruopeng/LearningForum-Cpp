#ifndef APPOINTWIN_H
#define APPOINTWIN_H

#include <QDialog>

namespace Ui {
class AppointWin;
}

class AppointWin : public QDialog
{
    Q_OBJECT

public:
    explicit AppointWin(QWidget *parent = 0);
    ~AppointWin();

private slots:




    void on_listWidget_general_clicked(const QModelIndex &index);

    void on_listWidget_moderator_clicked(const QModelIndex &index);

    void on_appoint_btn_clicked();

    void on_listWidget_1_clicked(const QModelIndex &index);

    void on_listWidget_2_clicked(const QModelIndex &index);

    void on_listWidget_3_clicked(const QModelIndex &index);

    void on_listWidget_4_clicked(const QModelIndex &index);

    void on_listWidget_5_clicked(const QModelIndex &index);

    void on_listWidget_6_clicked(const QModelIndex &index);

    void on_listWidget_7_clicked(const QModelIndex &index);

    void on_listWidget_8_clicked(const QModelIndex &index);

    void on_disappoint_btn_clicked();

    void refresh();

private:
    Ui::AppointWin *ui;
};

#endif // APPOINTWIN_H
