#include "ui.h"
#include <iostream>

void UI::mainMenu() {
    int choice;
    std::cout << "1. Login\n2. Register\n3. Exit\nEnter choice: ";
    std::cin >> choice;
    if (choice == 1) loginScreen();
    else if (choice == 2) registerScreen();
    else exit(0);
}

void UI::loginScreen() {
    std::string email, password;
    std::cout << "Enter Email: ";
    std::cin >> email;
    std::cout << "Enter Password: ";
    std::cin >> password;
    User user;
    if (user.login(email, password)) {
        std::cout << "Login successful!\n";
        movieSelection();
    } else {
        std::cout << "Invalid credentials.\n";
    }
}

void UI::registerScreen() {
    std::string name, email, password;
    std::cout << "Enter Name: ";
    std::cin >> name;
    std::cout << "Enter Email: ";
    std::cin >> email;
    std::cout << "Enter Password: ";
    std::cin >> password;
    User user;
    user.registerUser(name, email, password);
    std::cout << "Registration successful!\n";
}

void UI::movieSelection() {
    Movie movie;
    movie.displayMovies();
    int movie_id;
    std::cout << "Enter movie ID to book: ";
    std::cin >> movie_id;
    seatBooking();
}

void UI::seatBooking() {
    std::string seat;
    std::cout << "Enter seat number: ";
    std::cin >> seat;
    Booking booking(1, 1, 1, 1, seat, true);
    if (booking.bookTicket()) {
        std::cout << "Booking successful!\n";
    } else {
        std::cout << "Booking failed.\n";
    }
}
