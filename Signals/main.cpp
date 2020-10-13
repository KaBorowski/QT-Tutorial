#include <QCoreApplication>

#include "test.h"
#include "listener.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test *testObj = new Test(&a);
    Listener list;

    QObject::connect(testObj, &Test::quit, &a, &QCoreApplication::quit, Qt::QueuedConnection);
    QObject::connect(testObj, &Test::msgChanged, &list, &Listener::printState, Qt::QueuedConnection);

    testObj->setProperty("msg", true);

    testObj->quitApp();

    return a.exec();
}
