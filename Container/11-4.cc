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
    map<string, size_t> count;
    set<string> exclude{"the", "but", "and", "or", "an", "a"};
    string word;
    while (cin >> word)
    {
        for (auto &ch : word)
            ch = std::tolower(ch);
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
        if (exclude.find(word) == exclude.end())
            ++count[word];
    }
    for (const auto &i : count)
        cout << i.first << " appears " << i.second << ((i.second > 1) ? "times" : "time") << endl;
    return 0;
}
/*output
He was a good child, but he made a mistake.
child appears 1time
good appears 1time
he appears 2times
made appears 1time
mistake appears 1time
was appears 1time
*/