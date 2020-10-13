#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QtDebug>

class Test : public QObject
{
    bool isActive;

    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

    ~Test();

    Q_PROPERTY(bool msg READ getIsActive WRITE setIsActive NOTIFY msgChanged)

    void quitApp(){
        qInfo() << "Closing the application";
        emit quit();
    }

    bool getIsActive() const;
    void setIsActive(bool value);

signals:
    void quit();
    void msgChanged(bool value);

};

#endif // TEST_H
