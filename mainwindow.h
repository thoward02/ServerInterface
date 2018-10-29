#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGuiApplication>
#include <QScreen>
#include <QRect>
#include <QMainWindow>
#include <QFontDatabase>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:

public:
    MainWindow(QWidget *parent = 0);
    void CustomizeWindow(){
        //Here we'll set the window settings
        setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);
        QScreen *screen = QGuiApplication::primaryScreen();
        QRect  screenGeometry = screen->geometry();
        this->setGeometry(0,0, screenGeometry.width(), screenGeometry.height());
    }
    void LoadFonts(){
        //We'll Load all the fonts we need in here
        QFontDatabase::addApplicationFont(":/Fonts/Kiona-Regular.ttf");
        QFontDatabase::addApplicationFont(":/Fonts/Comfortaa-Regular.ttf");
    }
    ~MainWindow();
};

#endif // MAINWINDOW_H
