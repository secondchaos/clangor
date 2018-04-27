#include "clangormainwindow.h"
#include "ui_clangormainwindow.h"

ClangorMainWindow::ClangorMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClangorMainWindow)
{
    ui->setupUi(this);
}

ClangorMainWindow::~ClangorMainWindow()
{
    delete ui;
}
