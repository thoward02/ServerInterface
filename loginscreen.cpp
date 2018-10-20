#include "loginscreen.h"

#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QFont>
void LoginScreen::Show(){
    //Build the Login Scren
    interface = new QFrame(window);
    interface->setObjectName("LoginFrame");
    interface->setGeometry(0, 0, width, height);
    BuildScreen();
}

void LoginScreen::BuildScreen(){

    int x = width;
    int y = height;
    interface->setGeometry(0, 0, x, y);
    interface->setStyleSheet("QFrame#LoginFrame{background:#1A1B1C;}");

    QFrame * LoginBox = new QFrame(interface);
    LoginBox->setGeometry(x * .20, y * .05, x * .60, y * .90);
    LoginBox->setObjectName("LoginBox");
    LoginBox->setStyleSheet("QFrame#LoginBox{background:#101112;}");

    QLabel * LoginTitle = new QLabel("L O G I N", LoginBox);
    LoginTitle->setGeometry(x * .025, y * .025, x, y * .05);
    LoginTitle->setStyleSheet("QLabel{font-size: 40px; color: white;}");
    QFont LoginTK = QFont("Kiona", 20, 1);
    LoginTitle->setFont(LoginTK);

}
