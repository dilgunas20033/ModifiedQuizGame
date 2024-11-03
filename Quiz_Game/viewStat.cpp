//
// Created by dilgu on 11/1/2024.
//

#include "viewStat.h"
#include <iostream>
#include <string>
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

    std::string name, line, confirmName;
    int age, confirmAge = 0;
    bool nameFound = false;

    std::ifstream viewStat("saved_stat.txt");

    if (!viewStat){
        std::cout << "Can't open stats.";
        return;
    }

    std::cout << "Please provide the name:" << std::endl << "->";
    std::cin >> name;

    std::cout << "Please provide the age:" << std::endl << "->";
    std:: cin >> age;

    while (std::getline(viewStat, line)) {
        if (line.empty()) continue;

        if (!nameFound && isalpha(line[0])) {
            confirmName = line;
        }
        else if (!nameFound) {
            try {
                confirmAge = std::stoi(line);
            } catch (std::invalid_argument&) {
                continue;
            }

            if (confirmName == name && confirmAge == age) {
                nameFound = true;
                std::cout << "\n\nName: " << confirmName << std::endl;
                std::cout << "Age: " << confirmAge << std::endl << "-------------" << std::endl;
            }
        }

        else if (nameFound) {
            if (line == "------------------------") {
                nameFound = false;
                confirmName.clear();
            } else {
                std::cout << line << std::endl;
            }
        }
    }
    std::cout << std::endl;
    viewStat.close();
}



