//
// Created by dilgu on 10/27/2024.
//
#include "game.h"
#include "category.h"
#include <iostream>

int game::tech() {
    category cat;

    std::string answer, multiple;

    std::cout << "\n\nThere are 10 questions, answer them correctly you will get a point. \nHave fun!\n\n";

    std::cout << "You got " << points.tech << " out of 10 for tech" << std::endl << std::endl;

    return points.tech;
}