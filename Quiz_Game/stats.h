//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: stats.h
//Desc: This file displays the stats and offers to save it into a txt file for later viewing.

#include "game.h"
#include "info.h"
#include "category.h"
#include <vector>

#ifndef QUIZ_GAME_STATS_H
#define QUIZ_GAME_STATS_H

class stats {
public:
    explicit stats(game &score) : categories({
        {"Gaming",       &score.points.gaming},
        {"Food",         &score.points.food},
        {"Movies/Shows", &score.points.moviesShows},
        {"Music",        &score.points.music},
        {"Math",         &score.points.math},
        {"Tech",         &score.points.tech},
        {"Sports",       &score.points.sports},
        {"History",      &score.points.history}
    }) {} // This makes it easier for stats to be displayed but also easy for the saving

    void stat(const info& info); // Displays Stats and asked to save
    void statSave(const info& info); // Saves Stats

private:
    std::vector<std::pair<std::string, int *>> categories; // For display and saving purposes

};

#endif //QUIZ_GAME_STATS_H
