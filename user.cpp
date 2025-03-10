#include "user.h"
#include "database.h"

using namespace std;

User::User() {}

User::User(int id, string name, string email, string password) {
    this->id = id;
    this->name = name;
    this->email = email;
    this->password = password;
}

bool User::login(string email, string password) {
    Database db;
    if (db.connect()) {
        string query = "SELECT id, name FROM users WHERE email='" + email + "' AND password='" + password + "'";
        if (db.executeQuery(query)) {
            return true;
        }
    }
    return false;
}

void User::registerUser(string name, string email, string password) {
    Database db;
    if (db.connect()) {
        string query = "INSERT INTO users (name, email, password) VALUES ('" + name + "', '" + email + "', '" + password + "')";
        db.executeQuery(query);
    }
}
