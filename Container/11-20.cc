#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::set;
using std::string;

int main()
{
    map<string, size_t> word_count;
    set<string> exclude{"the", "but", "and", "or", "an", "a"};
    string word;
    while (cin >> word)
    {
        for (auto &ch : word)
            ch = std::tolower(ch);
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
        if (exclude.find(word) == exclude.end())
        {
            auto ret = word_count.insert({word, 1});
            if (!ret.second)
                ++ret.first->second;
        }
    }
    for (const auto &i : word_count)
        cout << i.first << " appears " << i.second << ((i.second > 1) ? " times" : " time") << endl;
    return 0;
}
/*output
He was a good child, but he made a mistake.
child appears 1 time
good appears 1 time
he appears 2 times
made appears 1 time
mistake appears 1 time
was appears 1 time
*/