#include "EnterWin.h"
#include <QApplication>
#include "Globle.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     EnterWin w;
     w.show();

    return a.exec();
}
