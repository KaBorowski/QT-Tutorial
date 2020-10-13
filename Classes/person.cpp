#include "person.h"

QString person::getName() const
{
    return name;
}

void person::setName(const QString &value)
{
    name = value;
}

person::person(QObject *parent, QString name) : QObject(parent)
{
    this->name = name;
}
