#include "listener.h"

Listener::Listener(QObject *parent) : QObject(parent)
{

}

void Listener::printState(bool value){
    qInfo() << value;
}
