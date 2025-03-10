#ifndef DATABASE_H
#define DATABASE_H

#include <mysql/mysql.h>
#include <iostream>
#include <string>

using namespace std;

class Database {
private:
    MYSQL *conn;
    const string host = "sql.freedb.tech";
    const string user = "freedb_prakhar";
    const string password = "s#mGQ656JlJtvzAZ";
    const string database = "freedb_movie-booking-syst";
    const unsigned int port = 3306;

public:
    Database();
    ~Database();
    bool connect();
    bool executeQuery(const string& query);
};

#endif
