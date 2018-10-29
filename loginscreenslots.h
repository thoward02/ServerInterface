#ifndef LOGINSCREENSLOTS_H
#define LOGINSCREENSLOTS_H

#include <QDebug>
#include <QObject>

class LoginScreenSlots : public QObject{
    Q_OBJECT

public slots:
    void Login();


};

#endif // LOGINSCREENSLOTS_H
