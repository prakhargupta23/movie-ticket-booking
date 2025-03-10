#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User {
public:
    int id;
    string name;
    string email;
    string password;
    
    User();
    User(int id, string name, string email, string password);
    bool login(string email, string password);
    void registerUser(string name, string email, string password);
};

#endif
