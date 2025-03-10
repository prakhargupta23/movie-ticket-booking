#include "database.h"

using namespace std;

int main() {
    Database db;
    if (db.connect()) {
        cout << "Database connection successful!" << endl;
    } else {
        cout << "Database connection failed!" << endl;
    }
    return 0;
}
