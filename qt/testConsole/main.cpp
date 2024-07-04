#include <QtCore/QCoreApplication>
#include <QtCore/qglobal.h>

#include <QtCore/QProcessEnvironment>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const int pid = a.applicationPid();
    //    vector<string> arguments(argv, argv + argc);

    const QStringList environment = QProcessEnvironment::systemEnvironment().toStringList();

    QStringList args;
    //  for (string s_arg : arguments) {
    for (int i = 0; i < argc; i++) {
        //      QString qs_arg = QString::fromStdString(s_arg);
        QString qs_arg = QString::fromStdString(argv[i]);
        args.push_back(qs_arg);
    }

    std::cout << "Running with pid=" << pid << endl;
    std::cout << endl << "Environment Variables" << endl;
    for (QString env : environment) {
        cout << env.toStdString() << endl;
    }

    std::cout << endl << "Program arguments (" << args.size() << "):" << endl;
    for (QString arg : args) {
        cout << arg.toStdString() << endl;
    }

    return 0; // a.exec(); the a.exec() put in by qtcreator is wrong.
}
