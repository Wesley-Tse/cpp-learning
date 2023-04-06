#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void vprint(std::vector<std::string> &words)
{
    for (auto i = words.cbegin(); i != words.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;
}
bool isShorter(const std::string str1, const std::string str2)
{
    return str1.size() < str2.size();
}
void elimDups(std::vector<std::string> &words)
{

    std::sort(words.begin(), words.end());
    auto iter = std::unique(words.begin(), words.end());
    words.erase(iter, words.end());
}

int main()
{
    std::vector<std::string> words{"this", "is", "as", "test", "which", "is", "as", "lie", "list", "fly"};
    std::cout << "Befor: ";
    vprint(words);
    elimDups(words);
    std::cout << "After erase: ";
    vprint(words);
    std::stable_sort(words.begin(), words.end(), isShorter);
    std::cout << "After stable_sort: ";
    vprint(words);
    return 0;
}
/*output:
Befor: this is as test which is as lie list fly
After erase: as fly is lie list test this which
After stable_sort: as is fly lie list test this which
*/