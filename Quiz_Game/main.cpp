#include <iostream>
#include "info.h"
#include "category.h"
#include "game.h"
#include "stats.h"

int main() {
    info info;
    category cat;
    game score;
    stats stat(score);


    char again;

    info.getName();

    do {

        cat.select(&score);

        std::cout << "Play Again?\n(Y/N)" << std::endl << "->";
        std::cin >> again;

    }while (again == 'Y' || again == 'y');

    stat.stat(info);

    return 0;
}
