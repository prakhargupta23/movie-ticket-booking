#include "user.h"
#include "database.h"

User::User() {}

User::User(int id, std::string name, std::string email, std::string password) {
    this->id = id;
    this->name = name;
    this->email = email;
    this->password = password;
}

bool User::login(std::string email, std::string password) {
    Database db;
    if (db.connect()) {
        std::string query = "SELECT id, name FROM users WHERE email='" + email + "' AND password='" + password + "'";
        if (db.executeQuery(query)) {
            return true;
        }
    }
    return false;
}

void User::registerUser(std::string name, std::string email, std::string password) {
    Database db;
    if (db.connect()) {
        std::string query = "INSERT INTO users (name, email, password) VALUES ('" + name + "', '" + email + "', '" + password + "')";
        db.executeQuery(query);
    }
}
