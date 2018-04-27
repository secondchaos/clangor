#include "clangormainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClangorMainWindow w;
    w.show();

    return a.exec();
}
