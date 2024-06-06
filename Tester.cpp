#include "Tester.h"
#include "Test.h"
#include <iostream>
#include <Windows.h>

extern std::vector<std::string> fgfgf;
extern std::vector<std::string> aaaaa;

void Tester::StartTest() {
    std::cout << "1) Введите имя пользователя: ";
    std::cin >> name;
    AreYouSure();
}

void Tester::AreYouSure() {
    int YesOrNot;
    std::cout << name << ", вы уверены, что готовы начать тест?\n1) Да\n2) Нет\n";
    std::cin >> YesOrNot;

    if (YesOrNot == 1) {
        system("cls");
        RunTest();
    }
    else {
        system("cls");
    }
}

void Tester::RunTest() {
    Test newTest;
    int correctCount = newTest.Testing(fgfgf, aaaaa);
    newTest.ShowResult(correctCount, name);
}