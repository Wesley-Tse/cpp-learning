#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::string;
using std::vector;

void add_pair(vector<pair<string, int>> &vec)
{
    cout << "Input Pairs: " << endl;
    string s;
    int i;
    while (cin >> s >> i)
    {
        vec.push_back(std::make_pair(s, i)); // method 1 to make pair
        // vec.push_back(pair<string, int>(s, i));  //method 2 to make pair
        // vec.push_back({s, i});}  //method 3 to make pair
        // vec.push_back(map<string, int>::value_type(s, i)); // method 4 to make pair
    }
}

int main()
{
    vector<pair<string, int>> vec;
    add_pair(vec);
    for (const auto &i : vec)
        cout << "string: " << i.first << " int: " << i.second << endl;
    return 0;
}
/*output
Input Pairs:
abs 2 change 3 this 5
string: abs int: 2
string: change int: 3
string: this int: 5
*/