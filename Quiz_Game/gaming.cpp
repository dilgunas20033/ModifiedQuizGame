//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: gaming.cpp
//Desc: This is the gaming quiz

#include "game.h"
#include "category.h"

int game::gaming() {
    category cat;

    std::string answer, multiple;

    points.gaming = 0;

    std::cout << "\n\nThere are 10 questions, answer them correctly you will get a point. \nHave fun!\n\n";

    std::cout << "1) The character 'Bowser' is the primary antagonist of what series?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "mario") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.gaming++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Mario." << std::endl << std::endl;
    }

    std::cout << "2) Which company created the original Paperboy game?" << std::endl
              << "1.Sony\n2.Microsoft\n3.Nintendo" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.gaming++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Nintendo." << std::endl << std::endl;
    }

    std::cout << "3) L.A. Noire' is a 2011 release by which video games developer?" << std::endl
              << "1.Rockstar\n2.Ubisoft\n3.Epic Games" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.gaming++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Rockstar." << std::endl << std::endl;
    }

    std::cout << "4) The Minecraft game was created by a developer from which country?" << std::endl
              << "1.Sweden\n2.America\n3.Japan" << std::endl <<"->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.gaming++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Sweden." << std::endl << std::endl;
    }

    std::cout << "5) Sonic the Hedgehog must collect what items in order to stay alive?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "rings" || answer == "ring") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.gaming++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is rings." << std::endl << std::endl;
    }

    std::cout << "6) MLB The Show 17' is one of 2017's best-selling games based on which sport?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "baseball") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.gaming++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Baseball." << std::endl << std::endl;
    }

    std::cout << "7) 'Super Mario Kart' was released originally for which platform?" << std::endl
              << "1.GameBoy\n2.SNES\n3.DS" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "2") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.gaming++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is SNES." << std::endl << std::endl;
    }

    std::cout << "8) In what period is the game 'Red Dead Redemption' set?" << std::endl
              << "1.Western\n2.Industrial\n3.WW2" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.gaming++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Western." << std::endl << std::endl;
    }


    std::cout << "9) Call Of Duty: Roads To Victory' is for what video game" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "psp") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.gaming++;
    } else {
        std::cout << std::endl <<  "Sorry, the correct answer is PSP." << std::endl << std::endl;
    }

    std::cout << "10) The first 'Call Of Duty' game takes place during what war?" << std::endl
              << "1.WW1\n2.2025\n3.WW2" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.gaming++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is WW2." << std::endl << std::endl;
    }

    std::cout << "You got " << points.gaming << " out of 10 for gaming" << std::endl << std::endl;

    return points.gaming;
}//gaming Function