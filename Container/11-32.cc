#include <iostream>
#include <string>
#include <map>
#include <set>

using std::cout;
using std::endl;
using std::multimap;
using std::set;
using std::string;

void print_authors(multimap<string, string> &authors)
{
    std::map<string, set<string>> _authors;
    for (auto &author : authors)
        _authors[author.first].insert(author.second);
    for (auto &author : _authors)
    {
        cout << author.first << " -> ";
        for (auto &entire : author.second)
            cout << entire << ", ";
        cout << endl;
    }
}
int main()
{
    multimap<string, string> authors{{"Barth, John", "Sot-Weed Factor"},
                                     {"Barth, John", "Lost in the Funhouse"},
                                     {"Smith, Bob", "Falling"},
                                     {"Issac, David", "Lover"},
                                     {"Issac, David", "Kongfu"}};
    print_authors(authors);
    return 0;
}
/*output
Barth, John -> Lost in the Funhouse, Sot-Weed Factor,
Issac, David -> Kongfu, Lover,
Smith, Bob -> Falling,
*/