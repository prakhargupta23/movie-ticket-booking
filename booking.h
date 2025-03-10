#ifndef BOOKING_H
#define BOOKING_H

#include <iostream>
#include <string>

using namespace std;

class Booking {
public:
    int id;
    int user_id;
    int movie_id;
    int theater_id;
    int screen_id;
    string seat_number;
    bool is_paid;

    Booking();
    Booking(int user_id, int movie_id, int theater_id, int screen_id, std::string seat_number, bool is_paid);
    bool bookTicket();
    void cancelBooking(int booking_id);
};

#endif
