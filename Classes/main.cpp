#include <QCoreApplication>

#include <animal.h>
#include "student.h"
#include "teacher.h"

void test (QObject *object){
    animal cat(object, "Panki");
    animal szymonCat(object, "Maciek");

    cat.setWeight(3.5);
    szymonCat.setWeight(5.5);

    qInfo() << "Object " << cat.getName() << "weights " << cat.getWeight() << " kg";
    qInfo() << "Object " << szymonCat.getName() << "weights " << szymonCat.getWeight() << " kg";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test(&a);

    teacher andrzej(NULL, "Andrzej");
    student szymon;

    andrzej.sayHello();
    szymon.sayHello();

    QString napis = "abababababbabababab";
    int tab[10];
    QString *text = new QString("Hello world!!!!!!!!!!!!!!!!!!");

    qInfo() << napis;
    qInfo() << sizeof(&napis);
    qInfo() << tab;
    qInfo() << sizeof(tab);
    qInfo() << text;
    qInfo() << &text;
    qInfo() << *text;
    qInfo() << sizeof(text);
    qInfo() << sizeof(&text);
    qInfo() << sizeof(*text);
    qInfo() << text->length();

    delete text;

    return a.exec();
}
