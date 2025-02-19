#ifndef DATABASE_H
#define DATABASE_H

#include <mysql/mysql.h>
#include <iostream>
#include <string>

class Database {
private:
    MYSQL *conn;
    const std::string host = "sql.freedb.tech";
    const std::string user = "freedb_prakhar";
    const std::string password = "s#mGQ656JlJtvzAZ";
    const std::string database = "freedb_movie-booking-syst";
    const unsigned int port = 3306;

public:
    Database();
    ~Database();
    bool connect();
    bool executeQuery(const std::string& query);
};

#endif
