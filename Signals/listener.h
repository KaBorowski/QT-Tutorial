#ifndef LISTENER_H
#define LISTENER_H

#include <QObject>
#include <QtDebug>

class Listener : public QObject
{
    Q_OBJECT
public:
    explicit Listener(QObject *parent = nullptr);

signals:

public slots:
    void printState(bool value);

};

#endif // LISTENER_H
