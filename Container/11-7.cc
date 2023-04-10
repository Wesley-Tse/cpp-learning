#include <iostream>
#include <string>
#include <vector>
#include <map>

using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;

void add_family(map<string, vector<string>> &clan, const string &firstName)
{
    if (clan.find(firstName) == clan.end())
        clan[firstName] = vector<string>();
}
void add_child(map<string, vector<string>> &clan, const string &firstName, const string &lastName)
{
    clan[firstName].push_back(lastName);
}
void print_child(vector<string> &childs)
{
    for (auto &i : childs)
        cout << i << " ";
}
void print_clan(map<string, vector<string>> &clan)
{
    for (auto &family : clan)
    {
        cout << "family: " << family.first << " -> child: ";
        print_child(family.second);
        cout << endl;
    }
    cout << endl;
}
int main()
{
    map<string, vector<string>> clan{{"Isaac", {"Newton"}}};
    cout << "Before: " << endl;
    print_clan(clan);
    add_family(clan, "Smith");
    add_child(clan, "Isaac", "David");
    cout << "After: " << endl;
    print_clan(clan);
    return 0;
}
/*output
Before:
family: Isaac -> child: Newton

After:
family: Isaac -> child: Newton David
family: Smith -> child:
*/