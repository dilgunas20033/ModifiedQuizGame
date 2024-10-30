//
// Created by dilgu on 10/27/2024.
//
#include "game.h"
#include "category.h"
#include <iostream>

int game::movieShow() {
    category cat;

    std::string answer, multiple;

    std::cout << "\n\nThere are 10 questions, answer them correctly you will get a point. \nHave fun!\n\n";

    std::cout << "1) Who does Jim Halpert fall in love with in The Office?" << std::endl
              << "1.Karen\n2.Michael\n3.Pam" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.moviesShows++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Pam." << std::endl << std::endl;
    }

    std::cout << "2) South Park takes place in which state?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "colorado") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.moviesShows++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Colorado." << std::endl << std::endl;
    }

    std::cout << "3) What famous star produced Barbie?" << std::endl
              << "1.Margot Robbie\n2.Jordan Peele\n3.Christopher Nolan" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.moviesShows++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Margot Robbie." << std::endl << std::endl;
    }

    std::cout << "4) In Willy Wonka & the Chocolate Factory, who is the first kid the Oompa Loompas sing about?" << std::endl
              << "1.Augustus Gloop\n2.Mike Teavee\n3.Violet Beauregarde" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.moviesShows++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Augustus Gloop." << std::endl << std::endl;
    }

    std::cout << "5) On The Big Bang Theory, Penny is a waitress at which restaurant?" << std::endl
              << "1.Outback\n2.Cheesecake Factory\n3.Texas Roadhouse" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "2") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.moviesShows++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Cheesecake Factory." << std::endl << std::endl;
    }

    std::cout << "6) How old does Michael Scott think Pam's mother is on The Office when they celebrate her birthday?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "54") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.moviesShows++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 54." << std::endl << std::endl;
    }

    std::cout << "7) What film was Keanu Reeves' movie debut?" << std::endl
              << "1.Youngblood\n2.Cyberpunk 2077\n3.Matrix" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.moviesShows++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Youngblood." << std::endl << std::endl;
    }

    std::cout << "8) What was Scream originally called?" << std::endl
              << "1.Yell\n2.Scream\n3.Scary Movie" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.moviesShows++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Scary Movie." << std::endl << std::endl;
    }

    std::cout << "9) What is Dorothy Zbornak's job on Golden Girls?" << std::endl
              << "1.Teacher\n2.Substitute Teacher\n3.Nurse" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "2") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.moviesShows++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is substitute teacher." << std::endl << std::endl;
    }

    std::cout << "10) What is the name of Winston's cat on New Girl?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "ferguson") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.moviesShows++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Ferguson." << std::endl << std::endl;
    }

    std::cout << "You got " << points.moviesShows << " out of 10 for Movies/Shows" << std::endl << std::endl;

    return points.moviesShows;
}