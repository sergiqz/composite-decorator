#include "mainwindow.h"
#include <QApplication>
#include "decorator.h"
#include "elementx.h"
#include "elementy.h"
#include "elementz.h"
#include "pistola.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    widget *aWidget = new elementy(new elementz(new elementx(new pistola())));
    aWidget->do_this();
    return a.exec();
}
