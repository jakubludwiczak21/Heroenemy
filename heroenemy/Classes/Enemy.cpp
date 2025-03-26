#include "Enemy.h"
#include <cstdlib>
#include <ctime>

Enemy::Enemy(int width, int height) : Actor(rand() % width, 0) {}

void Enemy::move(int width, int height, int unused1, int unused2) {
    int dx = rand() % 3 - 1;
    x += dx;
    y++;

    if (x < 0) x = 0;
    if (x >= width) x = width - 1;
    if (y >= height) y = height - 1;
}
