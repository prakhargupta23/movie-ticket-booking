#include "movie.h"
#include "database.h"

using namespace std;

Movie::Movie() {}

Movie::Movie(int id, string title, string genre, int duration, string language) {
    this->id = id;
    this->title = title;
    this->genre = genre;
    this->duration = duration;
    this->language = language;
}

void Movie::displayMovies() {
    Database db;
    if (db.connect()) {
        string query = "SELECT * FROM movies";
        db.executeQuery(query);
    }
}
