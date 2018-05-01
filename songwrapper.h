#ifndef SONGWRAPPER_H
#define SONGWRAPPER_H

#include <QMediaPlayer>

class SongWrapper
{
public:
    SongWrapper(QString);
private:
    void play();
    QString filepath;
    QMediaPlayer* player;
};

#endif // SONGWRAPPER_H
