#include "Hero.h"
#include "cmath"

Hero::Hero(int width, int height) : Actor(width / 2, height - 1) {}

bool Hero::isColliding(const Enemy& enemy) {
    return (abs(x - enemy.x) <= 1 && abs(y - enemy.y) <= 1);
}

void Hero::move(int dx, int dy, int width, int height) {
    x += dx;
    y += dy;
    if (x < 0) x = 0;
    if (x >= width) x = width - 1;
    if (y < 0) y = 0;
    if (y >= height) y = height - 1;
}
