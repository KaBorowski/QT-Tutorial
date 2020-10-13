#include "animal.h"

animal::animal(QObject *parent, QString name) : QObject(parent)
{
    this->name = name;
    qInfo() << "Created Object named: " << this << name;
}

float animal::getWeight() const
{
    return weight;
}

void animal::setWeight(float value)
{
    weight = value;
}

animal::~animal()
{
    qInfo() << "Object " << this << name << " was destroyed";
}

QString animal::getName() const
{
    return name;
}
