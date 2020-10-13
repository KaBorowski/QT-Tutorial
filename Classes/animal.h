#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class animal : public QObject
{
    Q_OBJECT
public:
    explicit animal(QObject *parent = nullptr, QString name = "");

    float getWeight() const;
    void setWeight(float value);

    ~animal();

    QString getName() const;

private:
    QString name;
    float weight;

signals:

};

#endif // ANIMAL_H
