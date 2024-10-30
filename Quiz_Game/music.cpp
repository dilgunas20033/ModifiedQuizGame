//
// Created by dilgu on 10/27/2024.
//
#include "game.h"
#include "category.h"
#include <iostream>

int game::music() {
    category cat;

    std::string answer, multiple;

    std::cout << "\n\nThere are 10 questions, answer them correctly you will get a point. \nHave fun!\n\n";

    std::cout << "1) Who is Kendrick Lamar's \"Not Like Us\" about?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "drake") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.music++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Drake." << std::endl << std::endl;
    }

    std::cout << "2) What's the full title of this song by Travis Scott featuring Drake: \"____ Mode\"?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "sicko") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.music++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is sicko." << std::endl << std::endl;
    }


    std::cout << "You got " << points.music << " out of 10 for music" << std::endl << std::endl;

    return points.music;
}