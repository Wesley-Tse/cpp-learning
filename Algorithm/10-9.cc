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
void elimDups(std::vector<std::string> &words)
{
    std::cout << "Befor sort(size=" << words.size() << "): ";
    vprint(words);
    std::sort(words.begin(), words.end());
    std::cout << "After sort(size=" << words.size() << "): ";
    vprint(words);
    auto iter = std::unique(words.begin(), words.end());
    std::cout << "After unique(size=" << words.size() << "): ";
    vprint(words);
    words.erase(iter, words.end());
    std::cout << "After erase(size=" << words.size() << "): ";
    vprint(words);
}

int main()
{
    std::vector<std::string> words{"this", "is", "a", "test", "which", "is", "a", "lie"};
    elimDups(words);
    return 0;
}
/*output:
Befor sort(size=8): this is a test which is a lie
After sort(size=8): a a is is lie test this which
After unique(size=8): a is lie test this which
After erase(size=6): a is lie test this which
*/