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
    explicit stats(game &score) : categories({
        {"Gaming",       &score.points.gaming},
        {"Food",         &score.points.food},
        {"Movies/Shows", &score.points.moviesShows},
        {"Music",        &score.points.music},
        {"Math",         &score.points.math},
        {"Tech",         &score.points.tech},
        {"Sports",       &score.points.sports},
        {"History",      &score.points.history}
    }) {}

    void stat(const info& info);
    void statSave(const info& info);

private:
    std::vector<std::pair<std::string, int *>> categories;

};

#endif //QUIZ_GAME_STATS_H
