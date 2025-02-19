#include "booking.h"
#include "database.h"

Booking::Booking() {}

Booking::Booking(int user_id, int movie_id, int theater_id, int screen_id, std::string seat_number, bool is_paid) {
    this->user_id = user_id;
    this->movie_id = movie_id;
    this->theater_id = theater_id;
    this->screen_id = screen_id;
    this->seat_number = seat_number;
    this->is_paid = is_paid;
}

bool Booking::bookTicket() {
    Database db;
    if (db.connect()) {
        std::string query = "INSERT INTO bookings (user_id, movie_id, theater_id, screen_id, seat_number, is_paid) VALUES (" +
                            std::to_string(user_id) + ", " + std::to_string(movie_id) + ", " +
                            std::to_string(theater_id) + ", " + std::to_string(screen_id) + ", '" +
                            seat_number + "', " + (is_paid ? "1" : "0") + ")";
        return db.executeQuery(query);
    }
    return false;
}

void Booking::cancelBooking(int booking_id) {
    Database db;
    if (db.connect()) {
        std::string query = "DELETE FROM bookings WHERE id=" + std::to_string(booking_id);
        db.executeQuery(query);
    }
}
