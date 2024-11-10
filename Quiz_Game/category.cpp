//Author: Deividas Ilgunas
//Date Updated: 11/10/2024
//File: category.cpp
//Desc: This is code for the player to select a category, there are also a function that makes each answer lowercase

#include "category.h"

std::string category::select(game* score) {

    do {
        std::cout << std::endl << std::endl << "Select a Category: " << std::endl << string << std::endl << "->";
        std::cin >> selections;
        selections = convertToLowercase(selections); //converts answer to lowercase before sending it to confirm

        i = confirm(selections, i, score);

    } while (i); //do/while loop selection

    return selections;
}//select Function

std::string category::convertToLowercase(const std::string& str) {
    std::string lowercase;

    for (char i : str){

        lowercase += std::tolower(i);
    } //end of loop

    return lowercase;
}//covertToLowercase Function

bool category::confirm(const std::string& games, bool x, game* score) {
    if (games == "gaming") {
        std::cout << "\nLoading Gaming...";
        x = false;
        score->gaming();
    }//gaming
    else if (games == "food") {
        std::cout << "\nLoading Food...";
        x = false;
        score->food();
    }//food
    else if (games == "movies/shows" || games == "movies" || games == "shows" || games == "moviesshows") {
        std::cout << "\nLoading Movies/Shows...";
        x = false;
        score->movieShow();
    }//movies/shows
    else if (games == "music") {
        std::cout << "\nLoading Music...";
        x = false;
        score->music();
    }//music
    else if (games == "math") {
        std::cout << "\nLoading Math...";
        x = false;
        score->math();
    }//math
    else if (games == "tech") {
        std::cout << "\nLoading Tech...";
        x = false;
        score->tech();
    }//tech
    else if (games == "sports") {
        std::cout << "\nLoading Sports...";
        x = false;
        score->sports();
    }//sports
    else if (games == "history") {
        std::cout << "\nLoading History...";
        x = false;
        score->history();
    }//history
    else {
        std::cout << "\nError!!";
        x = true;
    }//error

    return x;
}//confirm Function
