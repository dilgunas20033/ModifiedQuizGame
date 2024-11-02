//
// Created by dilgu on 10/31/2024.
//

#include "stats.h"
#include <iostream>
#include <fstream>



void stats::stat(const info& info) {
    char save;
    unsigned int index = 0;

    std::cout << "Quiz Game Stats: " << std::endl << "=========================" << std::endl;

    std::cout << "Player " << info.name << " is " << info.age << ". Below are the stats for today!"
              << std::endl << std::endl;

    while (index < categories.size()) {
        std::cout << categories[index].first << ": " << *categories[index].second << "/10" << std::endl;
        index++;
    }

    std::cout << "\nWould you like to save?(Y/N)" << std::endl << "->";
    std::cin >> save;
    if (save == 'y' || save =='Y'){
        statSave(info);
    }
    else {
        std::cout << "\nOK Goodbye.";
    }
}

void stats::statSave(const info& info) {
    unsigned int index = 0;

    std::string saveStat;

    std::ofstream saveStats("saved_stat.txt", std::ios::app);

    saveStats << "Player: " << info.name << std::endl << "Age: " << info.age << std::endl;

    while (index < categories.size()) {
        saveStats << categories[index].first << ": " << *categories[index].second << "/10" << std::endl;
        index++;
    }

    saveStats << "------------------------" << std::endl;

    saveStats.close();

    std::cout << "All saved! Have a good day!";
}
