#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QtDebug>

class person : public QObject
{
private:
    QString name;

    Q_OBJECT
public:
    explicit person(QObject *parent = nullptr, QString name = "");

    void sayHello(){
        if (name == "") qInfo() << "Hello";
        else qInfo() << "Hello, my name is " << name;
    }

    QString getName() const;
    void setName(const QString &value);

signals:

};

#endif // PERSON_H
