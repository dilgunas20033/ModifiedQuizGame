//
// Created by dilgu on 10/27/2024.
//

#ifndef QUIZ_GAME_GAME_H
#define QUIZ_GAME_GAME_H

class game{
public:

    struct score {
        int gaming = 0, food = 0, moviesShows = 0, music = 0, math = 0, tech = 0, sports = 0, history = 0;
    };

    score points;

    int gaming();
    int food();
    int movieShow();
    int music();
    int math();
    int tech();
    int sports();
    int history();

};


#endif //QUIZ_GAME_GAME_H
