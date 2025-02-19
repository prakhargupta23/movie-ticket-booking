#include "movie.h"
#include "database.h"

Movie::Movie() {}

Movie::Movie(int id, std::string title, std::string genre, int duration, std::string language) {
    this->id = id;
    this->title = title;
    this->genre = genre;
    this->duration = duration;
    this->language = language;
}

void Movie::displayMovies() {
    Database db;
    if (db.connect()) {
        std::string query = "SELECT * FROM movies";
        db.executeQuery(query);
    }
}
