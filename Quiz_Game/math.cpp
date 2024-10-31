//
// Created by dilgu on 10/27/2024.
//
#include "game.h"
#include "category.h"
#include <iostream>

int game::math() {
    category cat;

    std::string answer;

    std::cout << "\n\nThere are 10 questions, answer them correctly you will get a point. \nHave fun!\n\n";

    std::cout << "1) Lets start something simple, 2 + 2?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "4") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.math++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 4." << std::endl << std::endl;
    }

    std::cout << "2) 6 x 6?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "36") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.math++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 36." << std::endl << std::endl;
    }

    std::cout << "3) sqrt(63 / 7)?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.math++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 3." << std::endl << std::endl;
    }

    std::cout << "4) 21 + 3 x 3 - 8?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "22") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.math++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 22." << std::endl << std::endl;
    }

    std::cout << "5) ((9 + 9) x 2) / 3?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "12") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.math++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 12." << std::endl << std::endl;
    }

    std::cout << "6) sqrt((3 x 3) / 9) - 1?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "0") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.math++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 0." << std::endl << std::endl;
    }

    std::cout << "7) (3 x 4)^2?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "144") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.math++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 144." << std::endl << std::endl;
    }

    std::cout << "8) (8 x 8 - 53)^2 - (2 x 2)^2?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "105") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.math++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 105." << std::endl << std::endl;
    }

    std::cout << "9) 1 + 1?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "2") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.math++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 2." << std::endl << std::endl;
    }

    std::cout << "10) (sqrt((6 x 6) / 4) x 2 - 1)^2 - (31 + 2 x 9 / 2)^2?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "-1575") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.math++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is -1575." << std::endl << std::endl;
    }

    std::cout << "You got " << points.math << " out of 10 for math" << std::endl << std::endl;

    return points.math;
}