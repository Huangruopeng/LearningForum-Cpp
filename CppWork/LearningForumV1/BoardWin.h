#ifndef BOARDWIN_H
#define BOARDWIN_H

#include <QMainWindow>

namespace Ui {
class BoardWin;
}

class BoardWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit BoardWin(QWidget *parent = 0);
    ~BoardWin();

private slots:

    void on_writepost_btn_clicked();

    void on_listWidget_pressed(const QModelIndex &index);

    void on_delete_clicked();

    void on_Board_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_6_clicked();

    void on_listWidget_2_pressed(const QModelIndex &index);

    void on_listWidget_3_pressed(const QModelIndex &index);

    void on_listWidget_4_pressed(const QModelIndex &index);

    void on_listWidget_5_pressed(const QModelIndex &index);

    void on_listWidget_6_pressed(const QModelIndex &index);

    void on_listWidget_7_pressed(const QModelIndex &index);

    void on_listWidget_8_pressed(const QModelIndex &index);

    void on_actionAppoiny_Disappoint_triggered();

    void on_refresh_btn_clicked();

    void refresh();

    void on_set_btn_clicked();

    void on_Profile_btn_clicked();

    void on_actionlogout_triggered();

    //void on_pushButton_clicked();

    void on_search_btn_clicked();

    void on_listWidget_search_clicked(const QModelIndex &index);

private:
    Ui::BoardWin *ui;
};

#endif // BOARDWIN_H
