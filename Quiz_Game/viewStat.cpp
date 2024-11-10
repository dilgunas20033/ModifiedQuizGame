//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: viewStat.cpp
//Desc: This file is for viewing any save stats, it will ask for name and age, and it will search that text file until
//      it hits the name and age.

#include "viewStat.h"

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
    } while (play); // do/while loop
}//menu Function

void viewStat::view() {

    std::string name, line, confirmName;
    int age, confirmAge = 0;
    bool nameFound = false;

    std::ifstream viewStat("saved_stat.txt");

    if (!viewStat){
        std::cout << "Can't open stats.";
        return;
    }// if txt file isn't working or doesn't exist yet

    std::cout << "Please provide the name:" << std::endl << "->";
    std::cin >> name;

    std::cout << "Please provide the age:" << std::endl << "->";
    std:: cin >> age;

    while (std::getline(viewStat, line)) {
        if (line.empty()) {
            continue;
        }

        if (!nameFound && isalpha(line[0])) {
            confirmName = line;
        }
        else if (!nameFound) {
            try {
                confirmAge = std::stoi(line);
            } catch (std::invalid_argument&) {
                continue;
            }

            if (confirmName == name && confirmAge == age) { //confirms both age and name match
                nameFound = true;
                std::cout << "\n\nName: " << confirmName << std::endl;
                std::cout << "Age: " << confirmAge << std::endl << "-------------" << std::endl;
            }
        }

        else if (nameFound) {
            if (line == "------------------------") { // once found print until it hits this line
                nameFound = false;
                confirmName.clear();
            } else {
                std::cout << line << std::endl;
            }
        }
    }
    std::cout << std::endl;
    viewStat.close();
}//view Function



