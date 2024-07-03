#include <QtCore/QCoreApplication>
#include <QtCore/qglobal.h>

#include <QtCore/QProcessEnvironment>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const int pid = a.applicationPid();
    vector<string> arguments(argv, argv + argc);
    const QStringList environment = QProcessEnvironment::systemEnvironment().toStringList();
    QStringList args;
    QList<string> myList;

    myList.reserve(arguments.size());
    std::copy(arguments.begin(), arguments.end(), std::back_inserter(myList));

    std::cout << "Running with pid=" << pid << endl;
    std::cout << endl << "Environment Variables" << endl;
    for (QString env : environment) {
        cout << env.toStdString() << endl;
    }

    std::cout << endl << "Program arguments (" << myList.size() << "):" << endl;
    for (string arg : myList) {
        cout << arg << endl;
    }

    return 0; // a.exec(); the a.exec() put in by qtcreator is wrong.
}
