#ifndef UI_H
#define UI_H

#include "user.h"
#include "movie.h"
#include "booking.h"

using namespace std;

class UI {
public:
    void mainMenu();
    void loginScreen();
    void registerScreen();
    void movieSelection();
    void seatBooking();
};

#endif
