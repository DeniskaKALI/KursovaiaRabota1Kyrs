#include "Tester.h"
#include "Test.h"
#include <iostream>
#include <Windows.h>

extern std::vector<std::string> fgfgf;
extern std::vector<std::string> aaaaa;

void Tester::StartTest() {
    std::cout << "1) ������� ��� ������������: ";
    std::cin >> name;
    AreYouSure();
}

void Tester::AreYouSure() {
    int YesOrNot;
    std::cout << name << ", �� �������, ��� ������ ������ ����?\n1) ��\n2) ���\n";
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