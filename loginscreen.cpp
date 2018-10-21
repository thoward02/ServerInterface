#include "loginscreen.h"
#include "loginfunctions.h"

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
    //Start building the frames
    int x = width;
    int y = height;
    interface->setGeometry(0, 0, x, y);
    interface->setStyleSheet("QFrame#LoginFrame{background:#696969;}");

    //Build The Login Box
    QFrame * LoginBox = new QFrame(interface);
    LoginBox->setGeometry(0, 0, x / 3 , y);
    LoginBox->setObjectName("LoginBox");
    LoginBox->setStyleSheet("QFrame#LoginBox{background:#a2a2a2;}");
    int LBW = LoginBox->width();
    int LBH = LoginBox->height();

    //Login Title
    QLabel * LoginTitle = new QLabel("L O G I N", LoginBox);
    LoginTitle->setGeometry(LBW * .35, LBH * .1, LBW * .5, LBH * .05);
    LoginTitle->setStyleSheet("QLabel{font-size: 40px; color: #696969;}");

    //Login Title Font
    QFont LoginTK = QFont("Kiona", 20, 4);
    LoginTitle->setFont(LoginTK);

    //Username&Password Title Styles
    QString UPStyle = "QLabel{color: #696969}";
    QString UBStyle = "QLineEdit{background: #8f8e8e; border:none;color: #696969;}";

    //Fonts
    QFont UPTextF = QFont("Kiona", 15, 1);
    QFont UBFont = QFont("Comfortaa", 15, 1);
    QFont LBFont = QFont("Kiona", 20, 1);

    //Username Title
    QLabel * UsernameT = new QLabel(LoginBox);
    UsernameT->setGeometry(LBW * .1, LBH * .2, LBW * .5, LBH * .05);
    UsernameT->setText("Username");
    UsernameT->setStyleSheet(UPStyle);
    UsernameT->setFont(UPTextF);

    //Username Entry Box
    QLineEdit * UsernameB = new QLineEdit(LoginBox);
    UsernameB->setGeometry(LBW * .1, LBH * .25, LBW * .75, LBH * .05);
    UsernameB->setStyleSheet(UBStyle);
    UsernameB->setFont(UBFont);

    //Password Title
    QLabel * PasswordT = new QLabel(LoginBox);
    PasswordT->setGeometry(LBW * .1, LBH * .3, LBW * .5, LBH * .05);
    PasswordT->setText("Password");
    PasswordT->setStyleSheet(UPStyle);
    PasswordT->setFont(UPTextF);

    //Password Entry Box
    QLineEdit * PasswordB = new QLineEdit(LoginBox);
    PasswordB->setGeometry(LBW * .1, LBH * .35, LBW * .75, LBH * .05);
    PasswordB->setStyleSheet(UBStyle);
    PasswordB->setFont(UBFont);
    PasswordB->setEchoMode(QLineEdit::Password);

    //Add our login button
    QPushButton * LoginButton = new QPushButton(LoginBox);
    LoginButton->setText("LOGIN ->");
    LoginButton->setGeometry(LBW * .1, LBH * .45, LBW * .75, LBH * .05);
    LoginButton->setStyleSheet("QPushButton{background: #8f8e8e; border:none;color: #696969;} QPushButton:hover{background: #696969;color: #8f8e8e;}");
    LoginButton->setFont(LBFont);

    //MiscButton Fonts
    QFont MBFont =  QFont("Kiona", 13, 1);

    //Create Account Button
    QPushButton * CAButton = new QPushButton(LoginBox);
    CAButton->setText("Create Account...");
    CAButton->setGeometry(LBW * .1, LBH * .525, LBW * .475, LBH * .025);
    CAButton->setStyleSheet("QPushButton{border:none; background:rgba(0,0,0,0); color:#696969; text-align:left;}QPushButton:hover{color:#8f8e8e}");
    CAButton->setFont(MBFont);

    //Create Forgot Password Button
    QPushButton * FPButton = new QPushButton(LoginBox);
    FPButton->setText("Forgot Password...");
    FPButton->setGeometry(LBW * .1, LBH * .55, LBW * .475, LBH * .025);
    FPButton->setStyleSheet("QPushButton{border:none; background:rgba(0,0,0,0); color:#696969; text-align:left;}QPushButton:hover{color:#8f8e8e}");
    FPButton->setFont(MBFont);

    //Slot Our Buttons
    QObject * LF = new LoginFunctions;
    QObject::connect(LoginButton, SIGNAL(clicked()) , LF , SLOT(Login()));
}

