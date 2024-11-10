//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: history.cpp
//Desc: This is the history quiz

#include "game.h"
#include "category.h"

int game::history() {
    category cat;

    std::string answer, multiple;
    int num;

    points.history = 0;

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

    std::cout << "4) Which president is on Mount Rushmore?"<< std::endl
              << "1.Donald Trump\n2.James Madison\n3.Theodore Roosevelt" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Theodore Roosevelt." << std::endl << std::endl;
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

    std::cout << "9) What Year did WW2 Start?" << std::endl << "->";
    std::cin >> num;
    if (answer == "1939") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.history++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 1939." << std::endl << std::endl;
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
}//history Function