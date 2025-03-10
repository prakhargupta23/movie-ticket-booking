#include "database.h"

using namespace std;

Database::Database() {
    conn = mysql_init(NULL);
}

Database::~Database() {
    if (conn) {
        mysql_close(conn);
    }
}

bool Database::connect() {
    if (!mysql_real_connect(conn, host.c_str(), user.c_str(), password.c_str(), database.c_str(), port, NULL, 0)) {
        cerr << "MySQL Connection Error: " << mysql_error(conn) << endl;
        return false;
    }
    return true;
}

bool Database::executeQuery(const string& query) {
    if (mysql_query(conn, query.c_str())) {
        cerr << "Query Execution Error: " << mysql_error(conn) << endl;
        return false;
    }
    return true;
}
