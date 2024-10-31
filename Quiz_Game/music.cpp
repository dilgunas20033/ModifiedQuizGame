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

    std::cout << "3) What singer has had a Billboard No. 1 hit in each of the last four decades?" << std::endl
              << "1.Beyonce\n2.Mariah Carey\n3.Michael Jackson" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "2") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.music++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Mariah Carey." << std::endl << std::endl;
    }

    std::cout << "4) What was Madonna's first top 10 hit?" << std::endl
              << "1.Holiday\n2.Bedtime Story\n3.Into the Groove" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.music++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Holiday." << std::endl << std::endl;
    }

    std::cout << "5) Eminem's 8 Mile is named after a road in which city?" << std::endl
              << "1.Detroit\n2.Minneapolis\n3.Harlem" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.music++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Detroit." << std::endl << std::endl;
    }

    std::cout << "6) Which astronomer is name-dropped in \"Bohemian Rhapsody?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "galileo") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.music++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Galileo." << std::endl << std::endl;
    }

    std::cout << "7) As a child, what singer held the longest note ever on Star Search?" << std::endl
              << "1.Taylor Swift\n2.Justin Bieber\n3.Usher" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.music++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Usher." << std::endl << std::endl;
    }

    std::cout << "8) What is Post Malone's favorite restaurant?" << std::endl
              << "1.Cheddars\n2.Outback\n3.Olive Garden" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.music++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Olive Garden." << std::endl << std::endl;
    }

    std::cout << "9) Billie Eilish is obsessed with which classic TV show?" << std::endl
              << "1.The Office\n2.Family Guy\n3.Suits" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.music++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is The Office." << std::endl << std::endl;
    }

    std::cout << "10) How many coaches (full and part-time) from The Voice have won Grammys?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "12") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.music++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 12." << std::endl << std::endl;
    }

    std::cout << "You got " << points.music << " out of 10 for music" << std::endl << std::endl;

    return points.music;
}