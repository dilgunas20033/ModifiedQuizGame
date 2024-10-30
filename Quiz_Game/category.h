//
// Created by dilgu on 10/27/2024.
//

#include <string>

#ifndef QUIZ_GAME_CATEGORY_H
#define QUIZ_GAME_CATEGORY_H

#include "game.h"

class category : public game{
public:
    std::string selections;

    std::string select(game* score);
    static std::string convertToLowercase(const std::string& str);
    static bool confirm(const std::string& games, bool x, game* score);

private:

    std::string string = "Gaming\nFood\nMovies/Shows\nMusic\nMath\nTech\nSports\nHistory";
    bool i;


};


#endif //QUIZ_GAME_CATEGORY_H
