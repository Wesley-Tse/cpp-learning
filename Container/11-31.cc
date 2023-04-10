#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::multimap;
using std::string;

void del_entire(multimap<string, string> &authors, const string &key)
{
    auto cnt = authors.count(key);
    auto iter = authors.find(key);
    while (cnt)
    {
        iter = authors.erase(iter);
        --cnt;
    }
}
void print_authors(multimap<string, string> &authors)
{
    for (auto &author : authors)
        cout << author.first << " -> " << author.second << endl;
    cout << endl;
}
int main()
{
    multimap<string, string> authors{{"Barth, John", "Sot-Weed Factor"},
                                     {"Barth, John", "Lost in the Funhouse"},
                                     {"Smith, Bob", "Falling"},
                                     {"Issac, David", "Lover"}};
    cout << "Before: " << endl;
    print_authors(authors);
    del_entire(authors, "Barth, John");
    cout << "After: " << endl;
    print_authors(authors);
    return 0;
}
/*output
Before:
Barth, John -> Sot-Weed Factor
Barth, John -> Lost in the Funhouse
Issac, David -> Lover
Smith, Bob -> Falling

After:
Issac, David -> Lover
Smith, Bob -> Falling
*/