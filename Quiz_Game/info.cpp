//
// Created by dilgu on 10/27/2024.
//
#include <iostream>
#include "info.h"

std::string info::getName() {

    std::cout << "What is your name?" << std::endl << "->";
    std::cin >> name;
    getAge();

    return name;
}

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

    } while(age < 16);

    return age;
}
