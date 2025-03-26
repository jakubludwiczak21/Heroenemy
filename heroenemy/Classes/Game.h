#ifndef GAME_H
#define GAME_H

#include "Engine.h"

class Game : public Engine {
public:
    Game(int w, int h);

    virtual void view() = 0;

    void play();

private:
    Game(const Game& a);
    Game& operator=(const Game& a);
};

#endif
