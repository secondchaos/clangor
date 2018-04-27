#include "songwrapper.h"

SongWrapper::SongWrapper(QString filepath)
{
    player = new QMediaPlayer;

    player->setMedia(QUrl::fromLocalFile(filepath));
    player->setVolume(50);

}

SongWrapper::play() {
    player->play();
}

