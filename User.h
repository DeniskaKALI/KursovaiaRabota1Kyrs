#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    std::string name;
    std::string password;
    bool userFound = true;

    User(const std::string& name = "User", const std::string& password = "пароль не задан");
    void ShowPassword();
};

#endif 