//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: info.h
//Desc: Gets info from player, name and age.

#include <string>
#include <iostream>
#include <fstream>

#ifndef QUIZ_GAME_INFO_H
#define QUIZ_GAME_INFO_H

class info {
public:

    std::string name;
    int age;

    std::string getName(); //gets name
    int getAge(); //gets age

};


#endif //QUIZ_GAME_INFO_H
