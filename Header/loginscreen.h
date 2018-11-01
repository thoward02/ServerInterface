#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QFrame>
#include <QObject>
#include <QMainWindow>

#include "loginscreenslots.h"

class LoginScreen :  public QObject{
    Q_OBJECT
public:
    int height, width;
    QFrame * window;
    QMainWindow * MainWindow;
    void Show();
    void SetMainWindow(QMainWindow * MW){
        MainWindow = MW;
    }


private:
    QFrame * interface;

    void BuildScreen();
    void BuildLeftSide();
    void BuildRightSide();
    LoginScreenSlots * LSS = new LoginScreenSlots;

    int LBH, LBW;


};
#endif // LOGINSCREEN_H
