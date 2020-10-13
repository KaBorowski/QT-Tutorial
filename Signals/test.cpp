#include "test.h"

bool Test::getIsActive() const
{
    return isActive;
}

void Test::setIsActive(bool value)
{
    isActive = value;
    emit msgChanged(value);
}

Test::Test(QObject *parent) : QObject(parent)
{

}

Test::~Test()
{
    qInfo() << this << "Deconstructed";
}
