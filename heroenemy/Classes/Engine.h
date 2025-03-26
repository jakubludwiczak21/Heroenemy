#ifndef ENGINE_H
#define ENGINE_H

#include "Enemy.h"
#include "Hero.h"

class Engine {
protected:
    int width, height;
    Enemy enemy;
    Hero hero;
    int score;
    char** board;

public:
    Engine(int w, int h);

    ~Engine();

    bool isGameOver();

    void update();

    void moveHero(int dx, int dy);

    int getScore();

    void updateBoard();

private:
    Engine(const Engine& a);
    Engine& operator=(const Engine& a);
};

#endif
