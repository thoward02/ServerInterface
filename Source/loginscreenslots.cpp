#include "loginscreenslots.h"

#include <QDebug>

void LoginScreenSlots::Login(){


    //Hide the button | Change colors
    LoginButton->setHidden(true);
    QString HiddenStyle = "QLineEdit{background: #2b8fab; border:none;color: #5c5c5c;}";
    UsernameEntry->setStyleSheet(HiddenStyle);
    PasswordEntry->setStyleSheet(HiddenStyle);

    //Get the login Values
    QString UName = UsernameEntry->text();
    QString PWord = PasswordEntry->text();



}
