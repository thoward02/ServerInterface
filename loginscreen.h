#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QFrame>

class LoginScreen{
public:
    int height, width;
    QFrame * window;
    void Show();
private:
    QFrame * interface;
    void BuildScreen();
    void Login();


};
#endif // LOGINSCREEN_H
