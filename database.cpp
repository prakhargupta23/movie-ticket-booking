#include "database.h"

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
        std::cerr << "MySQL Connection Error: " << mysql_error(conn) << std::endl;
        return false;
    }
    return true;
}

bool Database::executeQuery(const std::string& query) {
    if (mysql_query(conn, query.c_str())) {
        std::cerr << "Query Execution Error: " << mysql_error(conn) << std::endl;
        return false;
    }
    return true;
}
