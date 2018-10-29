#include "mainwindow.h"
#include "loginscreen.h"

#include <QObject>
#include <QDebug> //For logging purposes
#include <QFrame>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent){

    CustomizeWindow(); //Just to get the window full screen
    LoadFonts(); //Load any fonts we need
    int x = this->width();
    int y = this->height();

    QFrame * WindowScene = new QFrame(this); //This way we can add a back layer of colour to work with
    WindowScene->setGeometry(0, 0, x, y);
    WindowScene->setObjectName("WindowScene");

    LoginScreen LS;
    LS.window = WindowScene;
    LS.width = x;
    LS.height = y;
    LS.Show();

}



MainWindow::~MainWindow(){
 qDebug() << "[ -- Program Shutting down -- ]";
}
