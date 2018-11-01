#ifndef LOGINSCREENSLOTS_H
#define LOGINSCREENSLOTS_H

#include <QObject>
#include <QLineEdit>
#include <QPushButton>


class LoginScreenSlots : public QObject{
    Q_OBJECT

public slots:
    void Login();
public:

    QLineEdit * UsernameEntry;
    QLineEdit * PasswordEntry;
    QPushButton * LoginButton;

};

#endif // LOGINSCREENSLOTS_H
