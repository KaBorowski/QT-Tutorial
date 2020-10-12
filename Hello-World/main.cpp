#include <QCoreApplication>

#include <QDebug>
#include <iostream>
#include <array>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    std::array<int, 5> data = {1,2,3,4,5};

    qInfo() << data[0];
    qInfo("Enter your age: ");
    std::cin >> age;
    qInfo() << "Moj wiek: " << age;
    qDebug("Debug Info");
    qCritical("Critical Info");
    qFatal("Program crashed");
    qInfo("Hello");


    return a.exec();
}
