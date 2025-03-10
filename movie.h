#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

using namespace std;

class Movie {
public:
    int id;
    string title;
    string genre;
    int duration;
    string language;

    Movie();
    Movie(int id, string title, string genre, int duration, string language);
    void displayMovies();
};

#endif
