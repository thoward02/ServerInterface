#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QFrame>
#include <QObject>
#include <QPushButton>
#include <QDebug>

class LoginScreen :  public QObject{
    Q_OBJECT

public:

    int height, width;
    void Show();

    QFrame * window;
public slots:

    void Login(){
        qDebug() << "ss";
        delete window;
    };

private:

    QFrame * interface;
    void BuildScreen();
    void BuildLeftSide();
    void BuildRightSide();
    int LBH, LBW;


};
#endif // LOGINSCREEN_H
