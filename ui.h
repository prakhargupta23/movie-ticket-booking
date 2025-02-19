#ifndef UI_H
#define UI_H

#include "user.h"
#include "movie.h"
#include "booking.h"

class UI {
public:
    void mainMenu();
    void loginScreen();
    void registerScreen();
    void movieSelection();
    void seatBooking();
};

#endif
