//
// Created by dilgu on 11/1/2024.
//

#include "viewStat.h"
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <fstream>

void viewStat::menu() {

    bool play = true;
    std::string select;

    do {
        std::cout << "Please select an option:" << std::endl << "1.Play Game\n2.View Stats" << std::endl << "->";
        std::cin >> select;

        if (select == "1") {
            std::cout << "Loading... " << std::endl << std::endl;
            play = false;
        } else if (select == "2") {
            view();
        } else {
            std::cout << "\nError! Please try again." << std::endl;
        }
    } while (play);
}

void viewStat::view() {

    std::string name;
    int age;

    std::ifstream viewStat("saved_stat.txt");

    if (!viewStat){
        std::cout << "Can't open stats.";
        return;
    }

    std::cout << "Please provide the name:" << std::endl << "->";
    std:: cin >> name;

    std::cout << "Please provide the age:" << std::endl << "->";
    std:: cin >> age;
}



