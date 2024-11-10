//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: info.cpp
//Desc: Gets info from player, name and age.

#include "info.h"

std::string info::getName() {

    std::cout << "What is your name?" << std::endl << "->";
    std::cin >> name;
    getAge();

    return name;
}//getName Function

int info::getAge() {

    do {

        std::cout << "How old are you " << name << "?" << std::endl << "->";
        std::cin >> age;

        if (age < 16){
            std::cout << "You are to young, please enter a correct age!" << std::endl;
        }
        else {
            std::cout << "===============" << std::endl << "Welcome to the game " << name <<"!" << std::endl <<
            "===============";
        }

    } while(age < 16); //do/while loop

    return age;
}//getAge Function
