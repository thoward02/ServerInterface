#ifndef LOGINFUNCTIONS_H
#define LOGINFUNCTIONS_H

#include <QObject>
#include <QDebug>
class LoginFunctions :  public QObject{
    Q_OBJECT

public slots:
    void Login(){
        qDebug() << "eh";
    };
    void CreateAccountO(){

    };
    void ForgotPassO(){

    };

};
#endif // LOGINFUNCTIONS_H
