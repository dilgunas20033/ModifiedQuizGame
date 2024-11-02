//
// Created by dilgu on 10/31/2024.
//

#ifndef QUIZ_GAME_STATS_H
#define QUIZ_GAME_STATS_H

#include "game.h"
#include "info.h"
#include "category.h"
#include <vector>


class stats : public game {
public:
    explicit stats(game &scoreRef) : categories({
        {"Gaming",       &scoreRef.points.gaming},
        {"Food",         &scoreRef.points.food},
        {"Movies/Shows", &scoreRef.points.moviesShows},
        {"Music",        &scoreRef.points.music},
        {"Math",         &scoreRef.points.math},
        {"Tech",         &scoreRef.points.tech},
        {"Sports",       &scoreRef.points.sports},
        {"History",      &scoreRef.points.history}
    }) {}

    void stat(const info &playerInfo, const game &score);

private:
    std::vector<std::pair<std::string, int *>> categories;

};

#endif //QUIZ_GAME_STATS_H
