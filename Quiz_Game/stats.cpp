//
// Created by dilgu on 10/31/2024.
//

#include "stats.h"
#include <iostream>


void stats::stat(const info& info, const game& score) {
    unsigned int index = 0;

    std::cout << "Quiz Game Stats: " << std::endl << "=========================" << std::endl;

    std::cout << "Player " << info.name << " is " << info.age << ". Below are the stats for today!"
              << std::endl << std::endl;

    while (index < categories.size()) {
        std::cout << categories[index].first << ": " << *categories[index].second << "/10" << std::endl;
        index++;
    }
}
