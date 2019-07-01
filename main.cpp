#include "mytimer.h"
#include <QApplication>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myTimer w;


    w.resize(1920,1080);
    QRect screenrect = a.primaryScreen()->geometry();
    w.move(screenrect.left(), screenrect.top());
    w.setWindowFlags(Qt::CustomizeWindowHint);
//    QCursor cursor(Qt::BlankCursor);
//    QApplication::setOverrideCursor(cursor);
//    QApplication::changeOverrideCursor(cursor);
//    w.setStyleSheet("background-color:#00c3ff;");
//    w.setStyleSheet("* {background-color: qlineargradient(spread:pad, x1:0 y1:0, x2:1 y2:0, stop:0 rgba(255,255,255), stop:1 rgba(219,219,219));"
//                           "background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 white, stop:1 #e5e5e5);}");
    w.setAutoFillBackground( true );


    w.show();

    a.setStyle("fusion");
    return a.exec();
}
