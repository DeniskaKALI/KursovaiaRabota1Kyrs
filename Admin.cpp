#include "Admin.h"
#include "Test.h"
#include <iostream>
#include <Windows.h>

extern std::vector<std::string> fgfgf;
extern std::vector<std::string> aaaaa;

void Admin::CheckDocker() {
    std::cout << "������� ��� ������������: ";
    std::cin >> name;
    std::cout << "������� ������: ";
    std::cin >> password;
    if (name == adminName && password == adminPassword) {
        ShowMenu();
    }
    else {
        std::cout << "�������� ����� ��� ������";
        std::cin.get();
        system("cls");
    }
}

void Admin::ShowMenu() {
    int option;
    std::cout << "1) �������� �������� �����\n";
    std::cout << "2) �����\n";
    std::cin >> option;

    switch (option) {
    case 1: {
        Test newTester;
        fgfgf = newTester.AddFiles();
        aaaaa = newTester.LoadAnswers();
        break;
    }
    case 2:
        system("cls");
        break;
    default:
        std::cout << "������ �������� ������";
        std::cin.get();
        system("cls");
        ShowMenu();
        break;
    }
}