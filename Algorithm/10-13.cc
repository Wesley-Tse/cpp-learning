#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void vprint(std::vector<std::string> &words)
{
    for (const auto &word : words)
        std::cout << word << " ";
    std::cout << std::endl;
}

bool isLonger(const std::string &str)
{
    return str.size() >= 5;
}

int main()
{
    std::vector<std::string> words{"this", "is", "change", "test", "which", "have", "is", "history", "english", "fly"};
    std::cout << "words: ";
    vprint(words);
    auto iter = std::partition(words.begin(), words.end(), isLonger);
    std::cout << "longer than 5: ";
    for (auto i = words.begin(); i != iter; i++)
        std::cout << *i << " ";
    std::cout << std::endl;
    return 0;
}
/*output:
words: this is change test which have is history english fly
longer than 5: english history change which
*/