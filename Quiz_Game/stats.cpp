//
// Created by dilgu on 10/31/2024.
//

#include "stats.h"
#include <iostream>


void stats::stat() {

    game score;
    info info; 

    std::cout << "Quiz Game Stats: " << std::endl << "=========================" << std::endl;

    std::cout << "Player " << info.name << " is " << info.age << ". Below are the stats for today!"
              << std::endl << std::endl;

    std::cout << "Gaming: " << score.points.gaming << "/10" << std::endl;
    std::cout << "Food: " << score.points.food << "/10" << std::endl;
    std::cout << "Movies/Shows: " << score.points.moviesShows << "/10" << std::endl;
    std::cout << "Music: " << score.points.music << "/10" << std::endl;
    std::cout << "Math: " << score.points.math << "/10" << std::endl;
    std::cout << "Tech: " << score.points.tech << "/10" << std::endl;
    std::cout << "Sports: " << score.points.sports << "/10" << std::endl;
    std::cout << "History: " << score.points.history << "/10" << std::endl;

}
