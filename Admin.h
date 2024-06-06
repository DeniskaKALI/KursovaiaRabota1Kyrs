#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

class Admin : public User {
public:
    void CheckDocker();

private:
    std::string adminName = "Admin";
    std::string adminPassword = "Admin";

    void ShowMenu();
};

#endif 