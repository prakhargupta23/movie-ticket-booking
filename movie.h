#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

class Movie {
public:
    int id;
    std::string title;
    std::string genre;
    int duration;
    std::string language;

    Movie();
    Movie(int id, std::string title, std::string genre, int duration, std::string language);
    void displayMovies();
};

#endif
