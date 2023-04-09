#include <iostream>
#include <string>
#include <map>
#include <set>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::set;
using std::string;

int main()
{
    map<string, size_t> count;
    set<string> exclude{"The", "But", "And", "Or", "An", "A",
                        "the", "but", "and", "or", "an", "a"};
    string word;
    while (cin >> word)
    {
        if (exclude.find(word) == exclude.end())
            ++count[word];
    }
    for (const auto &i : count)
        cout << i.first << " appears " << i.second << ((i.second > 1) ? "times" : "time") << endl;
    return 0;
}
/*output
He was a good child, but he made a huge mistake that led to his death
He appears 1time
child, appears 1time
death appears 1time
good appears 1time
he appears 1time
his appears 1time
huge appears 1time
led appears 1time
made appears 1time
mistake appears 1time
that appears 1time
to appears 1time
was appears 1time
*/