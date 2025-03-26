#include "Engine.h"
#include <iostream>

Engine::Engine(int w, int h) : width(w), height(h), enemy(w, h), hero(w, h), score(0) {
    board = new char*[height];
    for (int i = 0; i < height; ++i) {
        board[i] = new char[width];
        for (int j = 0; j < width; ++j) {
            board[i][j] = '.';
        }
    }
}

Engine::~Engine() {
    for (int i = 0; i < height; ++i) {
        delete[] board[i];
    }
    delete[] board;
}

bool Engine::isGameOver() {
    return hero.isColliding(enemy) || hero.y == 0;
}

void Engine::update() {
    enemy.move(width, height, 0, 0);
    if (hero.y == 0) {
        score++;
        hero = Hero(width, height);
        enemy = Enemy(width, height);
    }
}

void Engine::moveHero(int dx, int dy) {
    hero.move(dx, dy, width, height);
}

int Engine::getScore() {
    return score;
}


void Engine::updateBoard() {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            board[i][j] = '.';
        }
    }
    board[hero.y][hero.x] = 'H';
    board[enemy.y][enemy.x] = 'E';
    if(hero.y==enemy.y && hero.x == enemy.x) board[hero.y][hero.x] = 'X';
}
