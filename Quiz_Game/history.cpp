//
// Created by dilgu on 10/27/2024.
//
#include "game.h"
#include "category.h"
#include <iostream>

int game::history() {
    category cat;

    std::string answer, multiple;
    int num;

    std::cout << "\n\nThere are 10 questions, answer them correctly you will get a point. \nHave fun!\n\n";

    std::cout << "1) What year was the Declaration of Independence signed?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "1776") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 1776." << std::endl << std::endl;
    }

    std::cout << "2) The United States bought Alaska from which country?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "russia") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Russia." << std::endl << std::endl;
    }

    std::cout << "3) Who was the fourth president of the United States?"<< std::endl
              << "1.George Washington\n2.James Madison\n3.James Monroe" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "2") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is James Madison." << std::endl << std::endl;
    }

    std::cout << "4) Name one out of the four presidents that are on Mount Rushmore? (NOTE: Do Not Say George Washington)"
              << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "abraham lincoln") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;

    }
    if (answer == "thomas jefferson") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    }
    if (answer == "theodore roosevelt") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    }
    if (answer == "george washington") {
        std::cout << std::endl << "I said don't say him but it is still correct!" << std::endl << std::endl;
        points.history++;
    }
    else {
        std::cout << std::endl << "Sorry, the correct answer's are Abraham Lincoln, Thomas Jefferson, and Theodore Roosevelt."
                  << std::endl << std::endl;
    }

    std::cout << "5) Where was Martin Luther King, Jr. born?"<< std::endl
              << "1.Florida\n2.Alabama\n3.Georgia" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Georgia." << std::endl << std::endl;
    }

    std::cout << "6) What year did the North American Free Trade Agreement (NAFTA) go into effect?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "1994") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 1994." << std::endl << std::endl;
    }

    std::cout << "7) Fill in the blank: The 19th Amendment guarantees ____ the right to vote." << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "women") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is women." << std::endl << std::endl;
    }

    std::cout << "8) Which year was George H.W. Bush elected president?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "1988") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 1988." << std::endl << std::endl;
    }

    std::cout << "9) What Year was WW2?(Answer can be during WW2)" << std::endl << "->";
    std::cin >> num;
    if ( 1938 < num && num < 1946) {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is between 1939 and 1945." << std::endl << std::endl;
    }

    std::cout << "10) Who is the 16th president?"<< std::endl
              << "1.Abraham Lincoln\n2.Andrew Jackson\n3.Joe Biden" << std::endl << "->";
    std::cin >> multiple;
    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Abraham Lincoln." << std::endl << std::endl;
    }

    std::cout << "You got " << points.history << " out of 10 for history" << std::endl << std::endl;

    return points.history;
}