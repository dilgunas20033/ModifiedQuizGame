//
// Created by dilgu on 10/27/2024.
//
#include "game.h"
#include "category.h"
#include <iostream>

int game::tech() {
    category cat;

    std::string answer, multiple;

    points.tech = 0;

    std::cout << "\n\nThere are 10 questions, answer them correctly you will get a point. \nHave fun!\n\n";

    std::cout << "1) What does GUI stand for?" << std::endl
              << "1.Graphical User Interface\n2.General Usage Indicator\n3.Group User Integration" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.tech++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Graphical User Interface." << std::endl << std::endl;
    }

    std::cout << "2) Which programming language is primarily used for iOS app development?" << std::endl
              << "1.Python\n2.Swift\n3.Ruby" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "2") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.tech++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Swift." << std::endl << std::endl;
    }

    std::cout << "3) What is the term for a malicious software program that replicates itself to spread to other computers?"
              << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "virus") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.tech++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is virus." << std::endl << std::endl;
    }

    std::cout << "4) What term describes the physical components of a computer system?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "hardware") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.tech++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is hardware." << std::endl << std::endl;
    }

    std::cout << "5) Who co-founded Microsoft alongside Bill Gates?" << std::endl
              << "1.Steve Jobs\n2.Paul Allen\n3.Larry Page" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "2") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.tech++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Paul Allen." << std::endl << std::endl;
    }

    std::cout << "6) What term is used for a network device that forwards data packets between computer networks?"
              << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "router") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.tech++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is router." << std::endl << std::endl;
    }

    std::cout << "7) What is the main programming language used for Android app development?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "java") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.tech++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Java." << std::endl << std::endl;
    }

    std::cout << "8) Which protocol is used for secure web browsing?" << std::endl
              << "1.FTP\n2.HTTP\n3.HTTPS" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.tech++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is HTTPS." << std::endl << std::endl;
    }

    std::cout << "9) What popular version control system is used for tracking changes in source code?"
              << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "git") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.tech++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Git." << std::endl << std::endl;
    }

    std::cout << "10) What does \"IP\" stand for in \"IP address\"?" << std::endl
              << "1.Internet Protocol\n2.Internal Process\n3.Information Path" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.tech++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Internet Protocol." << std::endl << std::endl;
    }

    std::cout << "You got " << points.tech << " out of 10 for tech" << std::endl << std::endl;

    return points.tech;
}