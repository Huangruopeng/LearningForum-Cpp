#ifndef BOARDWIN_H
#define BOARDWIN_H

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

private:
    Ui::BoardWin *ui;
};

#endif // BOARDWIN_H
