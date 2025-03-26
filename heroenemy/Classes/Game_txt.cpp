#include "Game_txt.h"
#include <iostream>
#include <windows.h>

Game_txt::Game_txt(int w, int h) : Game(w, h) {}

void Game_txt::init() {
    char difficulty;
    bool poprawnosc = false;

    while (!poprawnosc) {
        std::cout << "Wybierz poziom trudnosci!: 1 - latwy, 2 - sredni, 3 - trudny" << std::endl;
        std::cin >> difficulty;

        switch(difficulty) {
            case '1':
                width = 6;
                std::cout << "Wybrales latwy poziom!" << std::endl;
                poprawnosc = true;
                break;
            case '2':
                width = 5;
                std::cout << "Wybrales sredni poziom!" << std::endl;
                poprawnosc = true;
                break;
            case '3':
                width = 4;
                std::cout << "Wybrales trudny poziom!" << std::endl;
                poprawnosc = true;
                break;
            default:
                system("cls");
                std::cout << "Wpisales niepoprawna wartosc! Sprobuj ponownie!" << std::endl;
                Sleep(2000);
                system("cls");
                break;
        }
    }

    Sleep(1200);
    system("cls");
}

void Game_txt::view() {
    updateBoard();
    system("cls");
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << board[i][j];
        }
        std::cout << std::endl;
    }
    if (!isGameOver())
        std::cout << "Wynik: " << getScore() << std::endl;
}
