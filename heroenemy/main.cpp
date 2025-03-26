#include <cstdlib>
#include <ctime>
#include "Classes/Game_txt.h"
#include <conio.h>

int main() {
    srand(time(NULL));
    int wysokosc_planszy = 5;

    Game_txt gra(1, wysokosc_planszy);
    gra.init();
    gra.play();

    _getch();
    return 0;
}