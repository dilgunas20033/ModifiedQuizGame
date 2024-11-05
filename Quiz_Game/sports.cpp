//
// Created by dilgu on 10/27/2024.
//
#include "game.h"
#include "category.h"
#include <iostream>

int game::sports() {
    category cat;

    std::string answer, multiple;
    int num;

    points.sports = 0;

    std::cout << "\n\nThere are 10 questions, answer them correctly you will get a point. \nHave fun!\n\n";

    std::cout << "1) The Olympics are held every how many years?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "4") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.sports++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 4." << std::endl << std::endl;
    }

    std::cout << "2) What sport is best known as the ‘king of sports’?" << std::endl
              << "1.Basketball\n2.Boxing\n3.Soccer" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.sports++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Soccer." << std::endl << std::endl;
    }

    std::cout << "3) How many dimples does an average golf ball have?" << std::endl << "->";
    std::cin >> num;
    if (299 < num && num < 501) {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.sports++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is between 300 and 500." << std::endl << std::endl;
    }

    std::cout << "4) Where will the 2028 Summer Olympics be held?" << std::endl
              << "1.Salt Lake City\n2.Atlanta\n3.Los Angeles" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.sports++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Los Angeles." << std::endl << std::endl;
    }

    std::cout << "5) NBA is for what sport?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "basketball") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.sports++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is basketball."
                  << std::endl << std::endl;
    }

    std::cout << "6) In motor racing, what color is the flag they wave to indicate the winner?" << std::endl
              << "1.Checkered Flag\n2.Green Flag\n3.White Flag" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.sports++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is checkered flag." << std::endl << std::endl;
    }

    std::cout << "7) How many holes are played in an average round of golf?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "16") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.sports++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 16." << std::endl << std::endl;
    }

    std::cout << "8) What color are the goalposts in football?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "yellow") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.sports++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is yellow." << std::endl << std::endl;
    }

    std::cout << "9) How many players are on a baseball team?" << std::endl << "->";
    std::cin >> answer;
    if (answer == "9") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.sports++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 9." << std::endl << std::endl;
    }

    std::cout << "10) In soccer, what body part can’t touch the ball?" << std::endl
              << "1.Head\n2.Hands\n3.Feet" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "2") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.sports++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is hands." << std::endl << std::endl;
    }

    std::cout << "You got " << points.sports << " out of 10 for sports" << std::endl << std::endl;

    return points.sports;
}