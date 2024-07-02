#include <QtCore/QCoreApplication>
#include <QtCore/qglobal.h>

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int pid = a.applicationPid();
    std::cout << "Running with pid=" << pid << endl;

    return 0; // a.exec(); the a.exec() put in by qtcreator is wrong.
}
