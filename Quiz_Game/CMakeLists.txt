cmake_minimum_required(VERSION 3.25)
project(Quiz_Game)

set(CMAKE_CXX_STANDARD 17)

add_executable(Quiz_Game main.cpp
        info.cpp
        info.h
        game.h
        category.cpp
        category.h
        gaming.cpp
        food.cpp
        movie_show.cpp
        music.cpp
        math.cpp
        tech.cpp
        sports.cpp
        history.cpp
        stats.cpp
        stats.h
)
