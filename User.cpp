#include "User.h"
#include <iostream>

User::User(const std::string& name, const std::string& password)
    : name(name), password(password) {}

void User::ShowPassword() {
    std::cout << this->password;
}