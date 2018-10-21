#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QFrame>
#include <QObject>

class LoginScreen :  public QObject{
    Q_OBJECT
public:
    int height, width;
    QFrame * window;
    void Show();


private:
    QFrame * interface;
    void BuildScreen();


};
#endif // LOGINSCREEN_H
