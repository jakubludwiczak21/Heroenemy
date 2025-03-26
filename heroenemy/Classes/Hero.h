#ifndef HERO_H
#define HERO_H

#include "Actor.h"
#include "Enemy.h"

class Hero : public Actor {
public:
    Hero(int width, int height);

    bool isColliding(const Enemy& enemy);
    void move(int dx, int dy, int width, int height) override;

private:
    Hero(const Hero& a);
};

#endif
