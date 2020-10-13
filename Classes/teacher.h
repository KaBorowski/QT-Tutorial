#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>
#include "person.h"

class teacher : public person
{
    Q_OBJECT
public:
    explicit teacher(QObject *parent = nullptr, QString name = "");

    void sayHello(){
        if (this->getName() == "") qInfo() << "Hello students";
        else qInfo() << "Hello students, my name is Mr. " << this->getName();
    }

signals:

};

#endif // TEACHER_H
