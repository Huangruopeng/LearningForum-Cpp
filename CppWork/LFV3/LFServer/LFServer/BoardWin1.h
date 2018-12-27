#ifndef BoardWin_H
#define BoardWin_H

#include <QWidget>

namespace Ui {
class BoardWin;
}

class BoardWin : public QWidget
{
    Q_OBJECT

public:
    explicit BoardWin(QWidget *parent = 0);
    ~BoardWin();

    void Refresh();

private slots:

    void on_listWidget_pressed(const QModelIndex &index);

    void on_listWidget_2_pressed(const QModelIndex &index);

    void on_listWidget_3_pressed(const QModelIndex &index);

    void on_listWidget_4_pressed(const QModelIndex &index);

    void on_listWidget_5_pressed(const QModelIndex &index);

    void on_listWidget_6_pressed(const QModelIndex &index);

    void on_listWidget_7_pressed(const QModelIndex &index);

    void on_listWidget_8_pressed(const QModelIndex &index);

    void on_refresh_btn_clicked();

private:
    Ui::BoardWin *ui;

};

#endif // BoardWin_H
