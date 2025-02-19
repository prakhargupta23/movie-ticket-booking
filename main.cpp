#include "database.h"

int main() {
    Database db;
    if (db.connect()) {
        std::cout << "Database connection successful!" << std::endl;
    } else {
        std::cout << "Database connection failed!" << std::endl;
    }
    return 0;
}
