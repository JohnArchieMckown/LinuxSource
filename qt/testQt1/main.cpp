#include "testqt1.h"

#include <QApplication>

int main(int argc, char *argv[], char *envp[])
{
    QApplication a(argc, argv);
    testQt1 w;
    w.show();
    return a.exec();
}
