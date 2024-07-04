#include <QtCore/QCoreApplication>
#include <QtCore/qglobal.h>

#include <QTextStream>
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

    output << "Running with pid=" << pid << Qt::endl;
    output << Qt::endl << "Environment Variables" << Qt::endl;
    for (QString env : environment) {
        output << env << Qt::endl;
    }

    output << Qt::endl << "Program arguments (" << args.size() << "):" << Qt::endl;
    for (QString arg : args) {
        output << arg << Qt::endl;
    }

    return 0; // a.exec(); the a.exec() put in by qtcreator is wrong.
}
