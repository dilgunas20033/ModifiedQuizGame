//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: category.h
//Desc: This is code for the player to select a category, there are also a function that makes each answer lowercase

#include <string>
#include <iostream>
#include "game.h"

#ifndef QUIZ_GAME_CATEGORY_H
#define QUIZ_GAME_CATEGORY_H

class category {
public:
    std::string selections;

    std::string select(game* score); //game selection
    static std::string convertToLowercase(const std::string& str); //converts the string to all lowercase
    static bool confirm(const std::string& games, bool x, game* score); //confirms the game and loads the function

private:

    std::string string = "Gaming\nFood\nMovies/Shows\nMusic\nMath\nTech\nSports\nHistory"; //lists all the games
    bool i;


};

#endif //QUIZ_GAME_CATEGORY_H
