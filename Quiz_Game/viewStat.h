//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: viewStat.h
//Desc: This file is for viewing any save stats, it will ask for name and age, and it will search that text file until
//      it hits the name and age.

#include <string>
#include <cctype>
#include <iostream>
#include <fstream>

#ifndef QUIZ_GAME_VIEWSTAT_H
#define QUIZ_GAME_VIEWSTAT_H


class viewStat {
public:

    void menu(); // A little menu to either play or view
    void view(); // Searched for the name in txt

};

#endif //QUIZ_GAME_VIEWSTAT_H
