//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: stats.cpp
//Desc: This file displays the stats and offers to save it into a txt file for later viewing.

#include "stats.h"

void stats::stat(const info& info) {
    char save;
    unsigned int index = 0;

    std::cout << "Quiz Game Stats: " << std::endl << "=========================" << std::endl;

    std::cout << "Player " << info.name << " is " << info.age << ". Below are the stats for today!"
              << std::endl << std::endl;

    while (index < categories.size()) {
        std::cout << categories[index].first << ": " << *categories[index].second << "/10" << std::endl;
        index++;
    } // Loop to display stats

    std::cout << "\nWould you like to save?\n(Y/N)" << std::endl << "->";
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

    std::ofstream saveStats("saved_stat.txt", std::ios::app); //opens file

    saveStats << info.name << std::endl << info.age << std::endl; //Save name and age

    while (index < categories.size()) {
        saveStats << categories[index].first << ": " << *categories[index].second << "/10" << std::endl;
        index++;
    } //Loop that starts puting it in the txt file

    saveStats << "------------------------" << std::endl;

    saveStats.close();

    std::cout << "All saved! Have a good day!";
}
