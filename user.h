#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class User {
public:
    int id;
    std::string name;
    std::string email;
    std::string password;
    
    User();
    User(int id, std::string name, std::string email, std::string password);
    bool login(std::string email, std::string password);
    void registerUser(std::string name, std::string email, std::string password);
};

#endif
