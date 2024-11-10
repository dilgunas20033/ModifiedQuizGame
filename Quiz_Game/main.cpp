//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: main.cpp
//Desc: The hub where most functions are being called on, and is also the main.
//Program Desc: This is a simple quiz game that I remade when I started the SWE program at FGCU. I have grown a lot and
//              wanted to make a quick remake on it. The program is a simple game where it will ask you a question and
//              you either pick from the choices or type your answer. You can also save your stats and view it at a
//              later time.

#include "info.h"
#include "stats.h"
#include "viewStat.h"

int main() {
    info info;
    category cat;
    game score;
    stats stat(score);
    viewStat view;

    char again;

    view.menu();//asks if they want to play or view stats


    info.getName();//gets info before starting

    do {

        cat.select(&score); //calls for the selection

        std::cout << "Play Again?\n(Y/N)" << std::endl << "->";
        std::cin >> again;

    }while (again == 'Y' || again == 'y'); // do/while loop

    stat.stat(info);

    return 0;
}//main
