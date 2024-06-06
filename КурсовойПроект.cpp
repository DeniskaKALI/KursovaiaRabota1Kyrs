#include <iostream>
#include <Windows.h>
#include <vector>
#include "Tester.h"
#include "Admin.h"

std::vector<std::string> fgfgf;
std::vector<std::string> aaaaa;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    bool work = true;

    while (work) {
        int option;
        std::cout << "1) Начать тестирование\n";
        std::cout << "2) Настройки администратора\n";
        std::cout << "3) Выход\n";
        std::cin >> option;

        switch (option) {
        case 1: {
            system("cls");
            Tester newTester;
            newTester.StartTest();
            break;
        }
        case 2: {
            system("cls");
            Admin newAdmin;
            newAdmin.CheckDocker();
            break;
        }
        case 3:
            work = false;
            break;
        default:
            std::cout << "Неверный выбор, попробуйте снова.\n";
            break;
        }
    }

    return 0;
}
