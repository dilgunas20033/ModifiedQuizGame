//
// Created by dilgu on 10/27/2024.
//

#include "category.h"
#include <iostream>
#include <algorithm>

std::string category::select(game* score) {

    do {
        std::cout << std::endl << std::endl << "Select a Category: " << std::endl << string << std::endl << "->";
        std::cin >> selections;
        selections = convertToLowercase(selections);

        i = confirm(selections, i, score);

    } while (i);

    return selections;
}

std::string category::convertToLowercase(const std::string& str) {
    std::string lowercase;

    for (char i : str){

        lowercase += std::tolower(i);
    }

    return lowercase;
}

bool category::confirm(const std::string& games, bool x, game* score) {
    if (games == "gaming") {
        std::cout << "Loading Gaming...";
        x = false;
        score->gaming();
    }
    else if (games == "food") {
        std::cout << "Loading Food...";
        x = false;
        score->food();
    }
    else if (games == "movies/shows" || games == "movies" || games == "shows" || games == "moviesshows") {
        std::cout << "Loading Movies/Shows...";
        x = false;
        score->movieShow();
    }
    else if (games == "music") {
        std::cout << "Loading Music...";
        x = false;
        score->music();
    }
    else if (games == "math") {
        std::cout << "Loading Math...";
        x = false;
        score->math();
    }
    else if (games == "tech") {
        std::cout << "Loading Tech...";
        x = false;
        score->tech();
    }
    else if (games == "sports") {
        std::cout << "Loading Sports...";
        x = false;
        score->sports();
    }
    else if (games == "history") {
        std::cout << "Loading History...";
        x = false;
        score->history();
    }
    else {
        std::cout << "Error!!";
        x = true;
    }

    return x;
}
