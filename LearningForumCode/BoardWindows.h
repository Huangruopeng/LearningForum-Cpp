#ifndef BOARDWINDOWS_H
#define BOARDWINDOWS_H

#include <QMainWindow>

namespace Ui {
class BoardWindows;
}

class BoardWindows : public QMainWindow
{
    Q_OBJECT

public:
    explicit BoardWindows(QWidget *parent = 0);
    ~BoardWindows();

private:
    Ui::BoardWindows *ui;
};

#endif // BOARDWINDOWS_H
