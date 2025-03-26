#ifndef ENEMY_H
#define ENEMY_H

#include "Actor.h"

class Enemy : public Actor {
public:
    Enemy(int width, int height);

    void move(int width, int height, int unused1, int unused2) override;

private:
    Enemy(const Enemy& a);
};

#endif
