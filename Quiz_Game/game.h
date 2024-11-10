//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: game.h
//Desc: This header is the hub for all the quizzes, it has the struct to keep score will all the function calls

#ifndef QUIZ_GAME_GAME_H
#define QUIZ_GAME_GAME_H

class game{
public:

    struct score {
        int gaming = 0, food = 0, moviesShows = 0, music = 0, math = 0, tech = 0, sports = 0, history = 0;
    };//struct

    score points;

    //calls all the games
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
