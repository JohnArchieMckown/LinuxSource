#include "testqt1.h"

#include <QApplication>

int main(int argc, char *argv[], char *envp[])
{
    QApplication a(argc, argv);
    testQT1 w;
    w.show();
    return a.exec();
}
