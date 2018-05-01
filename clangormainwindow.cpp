#include "clangormainwindow.h"
#include "ui_clangormainwindow.h"
#include "songwrapper.h"


ClangorMainWindow::ClangorMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClangorMainWindow)
{
    ui->setupUi(this);
    SongWrapper* sw = new SongWrapper(QString::fromStdString("/home/fragile/gloom.mp3"));
}

ClangorMainWindow::~ClangorMainWindow()
{
    delete ui;
}
