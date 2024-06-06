#ifndef TEST_H
#define TEST_H

#include <string>
#include <vector>

class Test {
public:
    std::string road = "";
    int count = 0;

    std::vector<std::string> LoadAnswers();
    std::vector<std::string> AddFiles();
    int Testing(const std::vector<std::string>& filesContent, const std::vector<std::string>& answers);
    void ShowResult(int correctCount, const std::string& userName);
};

#endif // TEST_H

