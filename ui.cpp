#include "ui.h"
#include <iostream>

using namespace std;

void UI::mainMenu() {
    int choice;
    cout << "1. Login\n2. Register\n3. Exit\nEnter choice: ";
    cin >> choice;
    if (choice == 1) loginScreen();
    else if (choice == 2) registerScreen();
    else exit(0);
}

void UI::loginScreen() {
    string email, password;
    cout << "Enter Email: ";
    cin >> email;
    cout << "Enter Password: ";
    cin >> password;
    User user;
    if (user.login(email, password)) {
        cout << "Login successful!\n";
        movieSelection();
    } else {
        cout << "Invalid credentials.\n";
    }
}

void UI::registerScreen() {
    string name, email, password;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Email: ";
    cin >> email;
    cout << "Enter Password: ";
    cin >> password;
    User user;
    user.registerUser(name, email, password);
    cout << "Registration successful!\n";
}

void UI::movieSelection() {
    Movie movie;
    movie.displayMovies();
    int movie_id;
    cout << "Enter movie ID to book: ";
    cin >> movie_id;
    seatBooking();
}

void UI::seatBooking() {
    string seat;
    cout << "Enter seat number: ";
    cin >> seat;
    Booking booking(1, 1, 1, 1, seat, true);
    if (booking.bookTicket()) {
        cout << "Booking successful!\n";
    } else {
        cout << "Booking failed.\n";
    }
}
