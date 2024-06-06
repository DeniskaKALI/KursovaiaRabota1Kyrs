#include "Test.h"
#include <iostream>
#include <fstream>
#include <Windows.h>
std::string path;
std::vector<std::string> Test::LoadAnswers() {
    std::string all = path + "/answers.txt";
    std::ifstream file(all);
    std::string s;
    std::vector<std::string> answers;

    if (!file.is_open()) {
        std::cerr << "Ошибка открытия файла с ответами.\n";
        return answers;
    }

    while (getline(file, s)) {
        answers.push_back(s);
    }

    file.close();
    return answers;
}

std::vector<std::string> Test::AddFiles() {
    std::vector<std::string> filesContent;

    std::cout << "Укажите путь к папке с файлами:";
    std::cin >> path;
    std::cout << "Укажите количество файлов: ";
    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        std::string filePath = path + '/' + std::to_string(i + 1) + ".txt";
        std::ifstream file(filePath);

        if (!file.is_open()) {
            std::cerr << "Ошибка работы с файлом " << filePath << "\n";
            continue;
        }

        std::string fileContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        filesContent.push_back(fileContent);
        file.close();
    }

    return filesContent;
}

int Test::Testing(const std::vector<std::string>& filesContent, const std::vector<std::string>& answers) {
    std::string userAnswer;
    int correctCount = 0;

    for (size_t i = 0; i < filesContent.size(); ++i) {
        std::cout << filesContent[i] << "\nОтвет: ";
        std::cin >> userAnswer;

        if (i < answers.size() && userAnswer == answers[i]) {
            ++correctCount;
        }

        system("cls");
    }

    return correctCount;
}
std::string res;
void Test::ShowResult(int correctCount, const std::string& userName) {
    char g;
    float score = static_cast<float>(correctCount) / count * 100;


    if (score >= 90.0f) {
        std::cout << "Вы получили оценку отлично\n";
        res = "отлично";
    }
    else if (score >= 80.0f) {
        std::cout << "Вы получили оценку хорошо\n";
        res = "хорошо";
    }
    else if (score >= 60.0f) {
        std::cout << "Вы получили оценку удовлетворительно\n";
        res = "удовлетворительно";
    }
    else {
        std::cout << "Вы получили оценку неудовлетворительно\n";
        res = "неудовлетворительно";
    }

    
   
    std::ofstream outFile("results.txt", std::ios::app); // Append mode
    if (outFile.is_open()) {
        outFile << "Пользователь: " << userName << "\n";
        outFile << "Результат: " << res << "\n\n";
        outFile.close();
        std::cout << "Результаты добавлены в файл results.txt\n";
    }
    else {
        std::cerr << "Ошибка открытия файла results.txt\n";
    }
    std::cin >> g;
    system("cls");

}
