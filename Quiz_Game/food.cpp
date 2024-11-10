//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: food.cpp
//Desc: This is the food quiz

#include "game.h"
#include "category.h"

int game::food() {
    category cat;

    std::string answer, multiple;

    points.food = 0;

    std::cout << "\n\nThere are 10 questions, answer them correctly you will get a point. \nHave fun!\n\n";

    std::cout << "1) What is the base ingredient of gummy bears?" << std::endl
              << "1.Coloring\n2.Gelatin\n3.Sugar" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "2") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.food++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Gelatin." << std::endl << std::endl;
    }

    std::cout << "2) Which fruit is known as the \"king of fruits\" and has a strong smell?" << std::endl
              << "1.Durian\n2.Tomato\n3.Jackfuit" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "1") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.food++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Durian." << std::endl << std::endl;
    }

    std::cout << "3) What's the most stolen grocery item?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "cheese") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.food++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Cheese." << std::endl << std::endl;
    }

    std::cout << "4) True or false: Searing meat seals in the juices." << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "false") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.food++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is False." << std::endl << std::endl;
    }

    std::cout << "5) Which country drinks the most coffee in pounds per year?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "finland") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.food++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Finland." << std::endl << std::endl;
    }

    std::cout << "6) Which chocolate bar is the global bestseller?" << std::endl
              << "1.KitKat\n2.Twix\n3.Snickers" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "3") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.food++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Snickers." << std::endl << std::endl;
    }

    std::cout << "7) True or false: Alcohol completely evaporates during cooking." << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "false") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.food++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is False." << std::endl << std::endl;
    }

    std::cout << "8) True or false: The seeds are the spiciest part of a pepper." << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "false") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.food++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is False." << std::endl << std::endl;
    }

    std::cout << "9) How many tablespoons are in a cup?" << std::endl << "->";
    std::cin >> answer;
    answer = cat.convertToLowercase(answer);
    if (answer == "16") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.food++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is 16." << std::endl << std::endl;
    }

    std::cout << "10) What condiment was used for its medicinal qualities in the 1800s?" << std::endl
              << "1.Mustard\n2.Ketchup\n3.Mayo" << std::endl << "->";
    std::cin >> multiple;

    if (multiple == "2") {
        std::cout << std::endl << "Correct!" << std::endl << std::endl;
        points.food++;
    } else {
        std::cout << std::endl << "Sorry, the correct answer is Ketchup." << std::endl << std::endl;
    }

    std::cout << "You got " << points.food << " out of 10 for food" << std::endl << std::endl;

    return points.food;
}//food Function