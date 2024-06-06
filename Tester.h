#ifndef TESTER_H
#define TESTER_H

#include "User.h"

class Tester : public User {
public:
    void StartTest();

private:
    void AreYouSure();
    void RunTest();
};

#endif // TESTER_H