#ifndef GAME_TXT_H
#define GAME_TXT_H

#include "Game.h"

class Game_txt : public Game {
public:
    Game_txt(int w, int h);

    void view() override;
    void init();

private:
    Game_txt(const Game_txt& a);
    Game_txt& operator=(const Game_txt& a);
};

#endif
