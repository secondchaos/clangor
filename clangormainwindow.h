#ifndef CLANGORMAINWINDOW_H
#define CLANGORMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class ClangorMainWindow;
}

class ClangorMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClangorMainWindow(QWidget *parent = 0);
    ~ClangorMainWindow();

private:
    Ui::ClangorMainWindow *ui;
};

#endif // CLANGORMAINWINDOW_H
