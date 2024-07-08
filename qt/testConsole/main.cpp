#include <QtCore/QCoreApplication>
#include <QtCore/qglobal.h>

#include <QTextStream>
//#include <QTimer>
#include <QtCore/QProcessEnvironment>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const qint64 pid = a.applicationPid();
    const QStringList environment = QProcessEnvironment::systemEnvironment().toStringList();
    const QStringList args = a.arguments();
    QTextStream input(stdin);
    QTextStream output(stdout);
    QTextStream errout(stderr);

    output << "Running with pid=" << pid << '\n';
    output << '\n' << "Environment Variables" << '\n';
    for (QString env : environment) {
        output << env << '\n';
    }

    output << '\n' << "Program arguments (" << args.size() << "):" << '\n';
    for (QString arg : args) {
        output << arg << '\n';
    }
    output.flush(); // likely not needed, but I'm OCD

    //  QTimer::singleShot(1, &a, [] { exit(0); });
    return 0; // a.exec(); the a.exec() is only needed for some async services.
}
