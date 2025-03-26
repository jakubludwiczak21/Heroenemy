#include "Game.h"
#include <iostream>

Game::Game(int w, int h) : Engine(w, h) {}

void Game::play() {
    while (!isGameOver()) {
        view();
        char input;
        std::cin >> input;
        int dx = 0, dy = 0;
        switch (input) {
            case 'a':
                dx = -1;
                break;
            case 'd':
                dx = 1;
                break;
            case 'w':
                dy = -1;
                break;
            case 's':
                dy = 1;
                break;
            case 'q':
                dx = -1;
                dy = -1;
                break;
            case 'e':
                dx = 1;
                dy = -1;
                break;
            case 'z':
                dx = -1;
                dy = 1;
                break;
            case 'c':
                dx = 1;
                dy = 1;
                break;
            default:
                break;
        }

        moveHero(dx, dy);
        update();
    }

    view();
    std::cout << "Przegrales! Twoj wynik to: " << getScore() << std::endl;
}
